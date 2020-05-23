import java.util.Stack;

/**
 * @author TFC
 * @date 2020/5/14 22:16
 */

// https://leetcode-cn.com/problems/maximal-rectangle/

public class Test {

    public static void main(String[] args) {
        char[][] matrix = {
                {'1', '0', '1', '0', '0'},
                {'1', '0', '1', '1', '1'},
                {'1', '1', '1', '1', '1'},
                {'1', '0', '0', '1', '0'}
        };
        
    }

    public int maximalRectangle(char[][] matrix) {
        if (matrix.length == 0 || matrix[0].length == 0) {
            return 0;
        }
        int row = matrix.length;
        int col = matrix[0].length;

        int[] heights = new int[col];

        int maxArea = 0;

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (matrix[i][j] == '1') {
                    heights[j]++;
                } else {
                    heights[j] = 0;
                }
            }
            maxArea = Math.max(maxArea, largestRectangleArea(heights));
        }
        return maxArea;
    }

    public int largestRectangleArea(int[] heights) {
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















