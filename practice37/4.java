
//https://leetcode-cn.com/problems/permutations/
import java.util.*;

class Solution {
    public static void main(String[] args) {
        Solution solution = new Solution();
        int[] pt = new int[]{1, 2, 3};
        System.out.println(solution.permute(pt));
    }

    private List<List<Integer>> res = new ArrayList<>();


    public void swap(int[] num, int i, int j) {
        int temp = num[i];
        num[i] = num[j];
        num[j] = temp;
    }

    public boolean isRepeat(int[] num, int from, int to) {
        for (int i = from; i < to; i++) {
            if (num[i] == num[to]) {
                return true;
            }
        }
        return false;
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

    public List<List<Integer>> permute(int[] nums) {
        Permutation(nums, 0);
        return res;
    }
}