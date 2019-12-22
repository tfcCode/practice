

//https://leetcode-cn.com/problems/search-insert-position/
class Solution {
    public static void main(String[] args) {
        int[] num = new int[]{3, 3, 3};
        System.out.println();
    }

    public int searchInsert(int[] nums, int target) {
        int index = binary_search(nums, target, 0, nums.length - 1);
        return index;
    }

    public static int binary_search(int[] nums, int target, int l, int r) {
        int index = -1;
        int low = l, high = r, mid = 0;
        while (low <= high) {
            mid = (low + high) / 2;
            if (nums[mid] == target) {
                index = mid;
                break;
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else if (nums[mid] < target) {
                low = mid + 1;
            }
        }
        if (index != -1) {
            return index;
        } else {
            if (nums[mid] < target) {
                return mid + 1;
            } else {
                return mid;
            }
        }
    }
}