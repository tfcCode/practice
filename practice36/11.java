
//https://leetcode-cn.com/problems/combination-sum/
import java.util.*;

class Solution {
    private List<List<Integer>> res = new ArrayList<>();
    private List<Integer> list = new ArrayList<>();

    public static void main(String[] args) {
        int[] pt = new int[]{8, 7, 4, 3};
        Solution x = new Solution();
        System.out.println(x.combinationSum(pt, 11));
    }

    public List<List<Integer>> combinationSum(int[] candidates, int target) {
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
            list.add(num[i]);
            dfs(temp - num[i], num, i);
            list.remove(list.size() - 1);
        }
    }
}
