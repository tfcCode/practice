
//https://leetcode-cn.com/problems/trapping-rain-water/
class Solution {
    public static void main(String[] args) {
        Solution solution = new Solution();
        int[] pt = new int[]{0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
        System.out.println(solution.trap(pt));
    }

    public int trap(int[] height) {
        if (height.length == 0) {
            return 0;
        }
        int[] left_max = new int[height.length];
        int[] rigth_max = new int[height.length];

        left_max[0] = height[0];
        for (int i = 1; i < height.length; i++) {
            left_max[i] = Math.max(height[i], left_max[i - 1]);
        }

        rigth_max[height.length - 1] = height[height.length - 1];
        for (int i = height.length - 2; i >= 0; i--) {
            rigth_max[i] = Math.max(height[i], rigth_max[i + 1]);
        }

        int res = 0;
        for (int i = 0; i < height.length; i++) {
            res = res + Math.min(left_max[i], rigth_max[i]) - height[i];
        }
        return res;
    }
}