
/**
 * @author TFC
 * @date 2020/5/14 22:16
 */
// https://leetcode-cn.com/problems/search-a-2d-matrix/
public class Test {
    public static void main(String[] args) {
        int[][] matrix = {
                {1, 3, 5, 7},
                {10, 11, 16, 20},
                {23, 30, 34, 50}
        };
        System.out.println(searchMatrix(matrix, 34));
    }

    public static boolean searchMatrix(int[][] matrix, int target) {
        if (matrix == null || matrix.length == 0 || matrix[0].length == 0) {
            return false;
        }
        int row = matrix.length;
        int col = matrix[0].length;

        int x = 0;
        for (int i = 0; i < row; i++) {
            if (target > matrix[x][col - 1]) {
                x++;
            } else {
                break;
            }
        }

        if (x == row) {
            return false;
        }

        for (int i = 0; i < col; i++) {
            if (matrix[x][i] == target) {
                return true;
            }
        }
        return false;
    }
}














