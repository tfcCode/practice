
//https://leetcode-cn.com/problems/jump-game-ii/
class Solution {
    public static void main(String[] args) {
        Solution solution = new Solution();
        int[] pt = new int[]{2, 3, 1, 1, 4};
        System.out.println(solution.jump(pt));
    }

    public int jump(int[] nums) {
        int step = 0;
        int end = 0;
        int max = 0;
        for (int i = 0; i < nums.length - 1; i++) {
            max = Math.max(max, nums[i] + i);
            if (i == end) {
                end = max;
                step++;
            }
        }
        return step;
    }
}