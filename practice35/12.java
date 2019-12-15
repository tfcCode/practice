

//https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array/
class Solution {
    public static void main(String[] args) {
        int[] pt = new int[]{1, 1, 2, 3, 4, 4, 5, 5};
        int x = removeDuplicates(pt);
        System.out.println(x);
    }

    public static int removeDuplicates(int[] nums) {
        int num = 0;
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] != nums[num]) {
                num++;
                nums[num] = nums[i];
            }
        }
        return num + 1;
    }
}