import java.util.HashMap;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;

/**
 * @author TFC
 * @date 2020/5/14 22:16
 */
// https://leetcode-cn.com/problems/word-search/

public class Test {
    public static void main(String[] args) {
        char[][] board = {
                {'A', 'B', 'C', 'E'},
                {'S', 'F', 'C', 'S'},
                {'A', 'D', 'E', 'E'}
        };
        Test test = new Test();

        System.out.println(test.exist(board, "ABCCED"));
    }

    private int[][] direction = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};

    char[][] board;
    String word;
    int row;
    int col;
    int[][] visited;

    public boolean exist(char[][] board, String word) {
        if (board.length == 0 || board == null || board[0].length == 0) {
            return false;
        }

        int row = board.length;
        int col = board[0].length;
        int[][] visited = new int[row][col];

        this.row = row;
        this.col = col;
        this.board = board;
        this.word = word;
        this.visited = visited;

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (board[i][j] == word.charAt(0)) {
                    visited[i][j] = 1;
                    if (dfs(i, j, 0)) {
                        return true;
                    } else {
                        visited[i][j] = 0;
                    }
                }
            }
        }
        return false;
    }

    public boolean dfs(int i, int j, int start) {
        if (start == word.length() - 1) {
            return board[i][j] == word.charAt(start);
        }
        if (board[i][j] == word.charAt(start)) {
            visited[i][j] = 1;
            for (int k = 0; k < 4; k++) {
                int newX = i + direction[k][0];
                int newY = j + direction[k][1];
                if (isArea(newX, newY) && visited[newX][newY] == 0) {
                    if (dfs(newX, newY, start + 1)) {
                        return true;
                    }
                }
            }
            visited[i][j] = 0;
        }
        return false;
    }

    public boolean isArea(int i, int j) {
        if (i >= 0 && i < row && j >= 0 && j < col) {
            return true;
        }
        return false;
    }
}















