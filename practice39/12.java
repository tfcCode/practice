import java.util.Stack;

/**
 * @author TFC
 * @date 2020/5/14 22:16
 */

// https://leetcode-cn.com/problems/largest-rectangle-in-histogram/

public class Test {

    public static void main(String[] args) {
        int[] heights = { 3};
        System.out.println(largestRectangleArea(heights));
    }

    public static int largestRectangleArea(int[] heights) {
        Stack<Integer> stack = new Stack<>();
        stack.push(-1);

        int maxArea = 0;
        for (int i = 0; i < heights.length; i++) {
            while (stack.peek() != -1 && heights[stack.peek()] >= heights[i]) {
                int x = heights[stack.pop()];
                int y = i - stack.peek() - 1;
                maxArea = Math.max(maxArea, x * y);
            }
            stack.push(i);
        }

        int len = heights.length;
        while (stack.peek() != -1) {
            int x = heights[stack.pop()];
            int y = len - stack.peek() - 1;
            maxArea = Math.max(maxArea, x * y);
        }
        return maxArea;
    }

}















