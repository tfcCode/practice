
/**
 * @author TFC
 * @date 2020/5/14 22:16
 */
// https://leetcode-cn.com/problems/set-matrix-zeroes/
public class Test {
    public static void main(String[] args) {
        int[][] matrix = {
                {0,1,2,0},
                {3,4,5,2},
                {1,3,1,5}
        };
        setZeroes(matrix);
        System.out.println();
    }

    public static void setZeroes(int[][] matrix) {
        int row = matrix.length;
        int col = matrix[0].length;

        int[][] visited = new int[row][col];

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (visited[i][j] == 0 && matrix[i][j] == 0) {
                    for (int x = 0; x < col; x++) {
                        if (matrix[i][x] != 0 && visited[i][x] == 0) {
                            visited[i][x] = 1;
                            matrix[i][x] = 0;
                        }
                    }
                    for (int x = 0; x < row; x++) {
                        if (matrix[x][j] != 0 && visited[x][j] == 0) {
                            visited[x][j] = 1;
                            matrix[x][j] = 0;
                        }
                    }
                }
            }
        }

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
    }
}














