
//https://leetcode-cn.com/problems/jump-game/
class Solution {
    public static void main(String[] args) {
        Solution x = new Solution();
        int[] pt = new int[]{3, 2, 1, 0, 4};
        System.out.println(x.canJump(pt));
    }

    public boolean canJump(int[] nums) {
        int lastPosition = nums.length - 1;
        for (int i = nums.length - 1; i >= 0; i--) {
            if (nums[i] + i >= lastPosition) {
                lastPosition = i;
            }
        }
        return lastPosition == 0;
    }
}