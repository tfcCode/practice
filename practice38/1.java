
//https://leetcode-cn.com/problems/insert-interval/
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;

class Solution {
    public static void main(String[] args) {
        Solution x = new Solution();
        int[][] pt = new int[][]{{0, 1}, {2, 3}, {7, 8}, {9, 9}};
        int[] p = new int[]{19, 26};
        int[][] m = x.insert(pt, p);
        for (int i = 0; i < m.length; i++) {
            System.out.println("[" + m[i][0] + " , " + m[i][1] + "]");
        }
        System.out.println();
    }
  
    public int[][] insert(int[][] intervals, int[] newInterval) {
        if (newInterval.length == 0) {
            return intervals;
        }
        if (intervals.length == 0 && newInterval.length == 0) {
            return new int[0][0];
        }

        int[][] pt = new int[intervals.length + 1][2];
        for (int i = 0; i < intervals.length; i++) {
            pt[i][0] = intervals[i][0];
            pt[i][1] = intervals[i][1];
        }
        pt[intervals.length][0] = newInterval[0];
        pt[intervals.length][1] = newInterval[1];

        sort(pt, 0, pt.length - 1);
        for (int i = 0; i < pt.length; i++) {
            System.out.println("[" + pt[i][0] + " , " + pt[i][1] + "]");
        }

        ArrayList<ArrayList<Integer>> temp = new ArrayList<>();

        for (int i = 0; i < pt.length - 1; i++) {
            if (pt[i + 1][0] <= pt[i][1] && pt[i + 1][1] <= pt[i][1]) {
                pt[i + 1][0] = pt[i][0];
                pt[i + 1][1] = pt[i][1];
            } else if (pt[i + 1][0] <= pt[i][1] && pt[i + 1][1] >= pt[i][1]) {
                pt[i + 1][0] = pt[i][0];
            } else if (pt[i + 1][0] == pt[i][0] && pt[i + 1][1] >= pt[i][1]) {
            } else if (pt[i + 1][0] == pt[i][0] && pt[i + 1][1] < pt[i][1]) {
                pt[i + 1][1] = pt[i][1];
            } else {
                temp.add(new ArrayList<>(Arrays.asList(pt[i][0], pt[i][1])));
            }
        }
        int len = pt.length;
        temp.add(new ArrayList<>(Arrays.asList(pt[len - 1][0], pt[len - 1][1])));

        int[][] res = new int[temp.size()][2];
        int i = 0;
        for (ArrayList<Integer> first : temp) {
            res[i][0] = first.get(0);
            res[i][1] = first.get(1);
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