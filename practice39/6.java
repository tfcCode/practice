import java.util.HashMap;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;

/**
 * @author TFC
 * @date 2020/5/14 22:16
 */
// https://leetcode-cn.com/problems/subsets/

public class Test {

    private List<List<Integer>> result = new LinkedList<>();
    int n, k;

    public static void main(String[] args) {
        Test test = new Test();
        int[] nums = {3, 1, 2, 4};
        List<List<Integer>> res = test.subsets(nums);
        for (int i = 0; i < res.size(); i++) {
            System.out.println(res.get(i));
        }
    }

    public void backtrack(int first, LinkedList<Integer> curr, int[] nums) {
        if (curr.size() == k) {
            result.add(new LinkedList<>(curr));
        }

        for (int i = first; i <= n; i++) {
            curr.add(nums[i - 1]);
            backtrack(i + 1, curr, nums);
            curr.removeLast();
        }

    }

    public List<List<Integer>> subsets(int[] nums) {
        result.add(new LinkedList<>());
        this.n = nums.length;
        for (int i = 1; i <= n; i++) {
            this.k = i;
            backtrack(1, new LinkedList<>(), nums);
        }
        return result;
    }
}















