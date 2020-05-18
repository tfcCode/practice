import java.util.Scanner;

/**
 * @author TFC
 * @date 2020/5/12 19:45
 */
// https://leetcode-cn.com/problems/minimum-path-sum/
public class Test {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[][] dp = {
                {1, 3, 1},
                {1, 5, 1},
                {4, 2, 1}
        };
        System.out.println(minPathSum(dp));
    }

    public static int minPathSum(int[][] grid) {
        int row = grid.length;
        int col = grid[0].length;

        int[][] dp = new int[row][col];
        dp[0][0] = grid[0][0];

        for (int i = 1; i < col; i++) {
            dp[0][i] = dp[0][i - 1] + grid[0][i];
        }

        for (int i = 1; i < row; i++) {
            dp[i][0] = dp[i - 1][0] + grid[i][0];
        }

        for (int i = 1; i < row; i++) {
            for (int j = 1; j < col; j++) {
                if (dp[i - 1][j] <= dp[i][j - 1]) {
                    dp[i][j] = dp[i - 1][j] + grid[i][j];
                } else {
                    dp[i][j] = dp[i][j - 1] + grid[i][j];
                }
            }
        }
        return dp[row - 1][col - 1];
    }
}











