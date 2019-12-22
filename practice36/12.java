
//https://leetcode-cn.com/problems/combination-sum-ii/
import java.util.*;

class Solution {
    private List<List<Integer>> res = new ArrayList<>();
    private List<Integer> list = new ArrayList<>();

    public static void main(String[] args) {
        int[] pt = new int[]{10, 1, 2, 7, 6, 1, 5};
        Solution x = new Solution();
        System.out.println(x.combinationSum2(pt, 8));
    }

    public List<List<Integer>> combinationSum2(int[] candidates, int target) {
        if (candidates.length == 0) {
            return res;
        }

        Arrays.sort(candidates);
        dfs(target, candidates, 0);

        return res;
    }

    public void dfs(int temp, int[] num, int n) {
        if (temp == 0) {
            res.add(new ArrayList<>(list));
            return;
        }
        for (int i = n; i < num.length && temp - num[i] >= 0; i++) {
            if (i > n && num[i] == num[i - 1]) {
                continue;
            }
            list.add(num[i]);
            dfs(temp - num[i], num, i + 1);
            list.remove(list.size() - 1);
        }
    }
}
