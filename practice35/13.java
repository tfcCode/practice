
//https://leetcode-cn.com/problems/remove-element/
class Solution {
    public static void main(String[] args) {
        int[] pt = new int[]{3,2,2,3};
        int x = removeElement(pt, 3);
        System.out.println(x);
    }

    public static int removeElement(int[] nums, int val) {
        int j = 0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] != val) {
                nums[j++] = nums[i];
            }
        }
        return j;
    }
}