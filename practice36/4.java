

//https://leetcode-cn.com/problems/next-permutation/
import java.util.Arrays;

class Solution {
    public void nextPermutation(int[] nums) {
        int r = 0, l = 0, i, index = 0;
        for (i = nums.length - 1; i > 0; i--) {
            if (nums[i] > nums[i - 1]) {
                l = i - 1;
                r = i;
                index = i;
                break;
            }
        }
        if (i != 0) {
            for (i = r + 1; i < nums.length; i++) {
                if (nums[i] <= nums[l]) {
                    break;
                }
            }
            r = i - 1;
            int temp;
            temp = nums[l];
            nums[l] = nums[r];
            nums[r] = temp;
            quick_sort(nums, index, nums.length - 1);
        } else {
            Arrays.sort(nums);
        }
    }

    public void quick_sort(int[] num, int low, int high) {
        if (low >= high) {
            return;
        }
        int i = low, j = high;
        int key = num[i];
        while (i < j) {
            while (i < j && num[j] >= key) {
                j--;
            }
            if (i < j) {
                num[i++] = num[j];
            }
            while (i < j && num[i] <= key) {
                i++;
            }
            if (i < j) {
                num[j--] = num[i];
            }
        }
        num[i] = key;
        quick_sort(num, low, i - 1);
        quick_sort(num, i + 1, high);
    }
}