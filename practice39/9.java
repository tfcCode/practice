/**
 * @author TFC
 * @date 2020/5/14 22:16
 */
// https://leetcode-cn.com/problems/search-in-rotated-sorted-array-ii/

public class Test {
    public static void main(String[] args) {
        int[] nums = {1, 3};
        Test test = new Test();
        System.out.println(test.search(nums, 3));
    }

    public boolean search(int[] nums, int target) {
        if (nums.length == 0 || nums == null) {
            return false;
        }
        int x = -1;
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] < nums[i - 1]) {
                x = i;
                break;
            }
        }
        if (x == -1) {
            if (twoFind(nums, 0, nums.length - 1, target)) {
                return true;
            }
        } else {
            if (twoFind(nums, 0, x - 1, target) || twoFind(nums, x, nums.length - 1, target)) {
                return true;
            }
        }
        return false;
    }

    public boolean twoFind(int[] nums, int left, int right, int target) {
        int mid = (left + right) / 2;
        while (left <= right) {
            mid = (left + right) / 2;
            if (nums[mid] > target) {
                right = mid - 1;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                return true;
            }
        }
        if (nums[mid] == target) {
            return true;
        }
        return false;
    }
}















