
//https://leetcode-cn.com/problems/permutations-ii/
import java.util.*;

class Solution {
    private List<List<Integer>> res = new ArrayList<>();

    public static void main(String[] args) {
        Solution solution = new Solution();
        int[] pt = new int[]{1, 1, 2, 1, 2, 4, 1, 2, 421, 1};
        System.out.println(solution.permuteUnique(pt));
    }

    public List<List<Integer>> permuteUnique(int[] nums) {
        Permutation(nums, 0);
        return res;
    }

    public void Permutation(int[] num, int n) {
        if (n == num.length) {
            ArrayList<Integer> x = new ArrayList<>();
            for (int i = 0; i < num.length; i++) {
                x.add(num[i]);
            }
            res.add(x);
        }
        for (int i = n; i < num.length; i++) {
            if (!isRepeat(num, n, i)) {
                swap(num, n, i);
                Permutation(num, n + 1);
                swap(num, n, i);
            }
        }
    }

    public void swap(int[] num, int i, int j) {
        int x = num[i];
        num[i] = num[j];
        num[j] = x;
    }

    public boolean isRepeat(int[] num, int from, int to) {
        for (int i = from; i < to; i++) {
            if (num[i] == num[to]) {
                return true;
            }
        }
        return false;
    }
}