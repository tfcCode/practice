
//https://leetcode-cn.com/problems/4sum/
import java.util.*;

class Solution {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] pt = new int[n];
        for (int i = 0; i < n; i++) {
            pt[i] = sc.nextInt();
        }

        List<List<Integer>> res = fourSum(pt, -9);
        System.out.println(res);

    }

    public static List<List<Integer>> fourSum(int[] nums, int target) {
        List<List<Integer>> result = new ArrayList();

        int len = nums.length;

        if (nums == null || len < 4)
            return result;

        Arrays.sort(nums);

        for (int i = 0; i < len; i++) {
            System.out.print(nums[i] + " ");
        }
        System.out.println();

        for (int i = 0; i <= len - 4; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            for (int j = i + 1; j < len; j++) {
                if (j - 1 > i && nums[j] == nums[j - 1]) {
                    continue;
                }
                int L = j + 1;
                int R = len - 1;
                while (L < R) {
                    int sum = nums[i] + nums[j] + nums[L] + nums[R];
                    if (sum == target) {
                        result.add(Arrays.asList(nums[i], nums[j], nums[L], nums[R]));
                        while (L < R && nums[L + 1] == nums[L]) {
                            L++;
                        }
                        while (L < R && nums[R - 1] == nums[R]) {
                            R--;
                        }
                        L++;
                        R--;
                    } else if (sum < target) {
                        L++;
                    } else if (sum > target) {
                        R--;
                    }
                }
            }
        }
        return result;
    }
}