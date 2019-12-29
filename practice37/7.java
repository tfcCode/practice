
//https://leetcode-cn.com/problems/rotate-image/
class Solution {

    public static void main(String[] args) {
        Solution solution = new Solution();
        System.out.println();
    }

    // 顺时针方向
    public void rotate1(int[][] matrix) {
        int n = matrix.length;

        // 先转置矩阵
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }

        // 再交换对称的列
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n / 2; j++) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i][n - j - 1];
                matrix[i][n - j - 1] = temp;
            }
        }
    }
}
