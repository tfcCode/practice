

//https://leetcode-cn.com/problems/find-first-and-last-position-of-element-in-sorted-array/
class Solution {
    public static void main(String[] args) {
        int[] num = new int[]{3, 3, 3};
        System.out.println(searchRange(num,3));
    }

    public static int[] searchRange(int[] nums, int target) {
        int[] index = new int[]{-1, -1};
        if (nums.length == 0) {
            return index;
        }
        int n1 = 0, n2 = 0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == target) {
                n1 = i;
                break;
            }
        }
        int i = n1 + 1;
        while (i < nums.length && nums[i] == nums[n1]) {
            i++;
        }
        n2 = i - 1;
        index[0] = binary_search(nums, target, 0, n1);
        index[1] = binary_search(nums, target, n2, nums.length - 1);
        if (index[1] == -1) {
            index[1] = index[0];
        }
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
        return index;
    }
}