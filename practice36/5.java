
//https://leetcode-cn.com/problems/search-in-rotated-sorted-array/

import java.util.Arrays;

class Solution {
    public static void main(String[] args) {
        int[] num = new int[]{4, 5, 6, 7, 0, 1, 2};
        System.out.println(search(num, 0));
    }

    public static int search(int[] nums, int target) {
        if(nums.length==0){
            return -1;
        }
        int n = 0;
        int index1, index2;
        for (int i = 0; i < nums.length - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                n = i;
                break;
            }
        }
        index1 = binary_search(nums, target, 0, n);
        index2 = binary_search(nums, target, n + 1, nums.length - 1);
        if (index1 != -1) {
            return index1;
        } else if (index2 != -1) {
            return index2;
        } else {
            return -1;
        }
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