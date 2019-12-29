
//https://leetcode-cn.com/problems/merge-intervals/
import java.util.HashMap;
import java.util.Map;

class Solution {
    public static void main(String[] args) {
        Solution x = new Solution();
        int[][] pt = new int[][]{{2, 6}, {1, 3}, {15, 18}, {8, 10}};
        int[][] m = x.merge(pt);
        for (int i = 0; i < m.length; i++) {
            System.out.println("[" + m[i][0] + " , " + m[i][1] + "]");
        }
        System.out.println(x.merge(pt));
    }

    public int[][] merge(int[][] intervals) {
        if (intervals.length == 0) {
            return new int[0][0];
        }
        sort(intervals, 0, intervals.length - 1);

        Map<Integer, Integer> temp = new HashMap<>();

        for (int i = 0; i < intervals.length - 1; i++) {
            if (intervals[i + 1][0] <= intervals[i][1] && intervals[i + 1][1] <= intervals[i][1]) {
                intervals[i + 1][0] = intervals[i][0];
                intervals[i + 1][1] = intervals[i][1];
            } else if (intervals[i + 1][0] <= intervals[i][1] && intervals[i + 1][1] >= intervals[i][1]) {
                intervals[i + 1][0] = intervals[i][0];
            } else if (intervals[i + 1][0] == intervals[i][0] && intervals[i + 1][1] >= intervals[i][1]) {
            } else if (intervals[i + 1][0] == intervals[i][0] && intervals[i + 1][1] < intervals[i][1]) {
                intervals[i + 1][1] = intervals[i][1];
            } else {
                temp.put(intervals[i][0], intervals[i][1]);
            }
        }
        int len = intervals.length;
        temp.put(intervals[len - 1][0], intervals[len - 1][1]);

        int[][] res = new int[temp.size()][2];
        int i = 0;
        for (Integer key : temp.keySet()) {
            res[i][0] = key;
            res[i][1] = temp.get(key);
            i++;
        }

        return res;
    }


    public void sort(int[][] num, int low, int high) {
        if (low >= high) {
            return;
        }
        int l = low;
        int r = high;

        int key1 = num[low][0];
        int key2 = num[low][1];
        while (l < r) {
            while (l < r && num[r][0] >= key1) {
                r--;
            }
            if (l < r) {
                num[l][0] = num[r][0];
                num[l][1] = num[r][1];
            }
            while (l < r && num[l][0] <= key1) {
                l++;
            }
            if (l < r) {
                num[r][0] = num[l][0];
                num[r][1] = num[l][1];
            }
        }
        num[l][0] = key1;
        num[l][1] = key2;
        sort(num, low, l - 1);
        sort(num, l + 1, high);
    }
}