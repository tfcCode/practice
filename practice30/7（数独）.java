
//https://www.nowcoder.com/practice/f43c26af3b5c4a5fa566460dbbd28a14?tpId=90&tqId=30824&tPage=3&rp=3&ru=/ta/2018test&qru=/ta/2018test/question-ranking
import java.io.*;

public class Main {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int[][] sudoku = new int[9][9];
        String str[];
        for (int i = 0; i < 9; i++) {
            str = br.readLine().split(" ");
            for (int j = 0; j < 9; j++) {
                sudoku[i][j] = Integer.parseInt(str[j]);
            }
        }
        dfs(sudoku, 0, 0);
    }

    public static boolean dfs(int[][] sudoku, int i, int j) {
        if (i == 8 && j == 9) {
            output(sudoku);
            return true;
        }

        //换行
        if (j == 9) {
            i++;
            j = 0;
        }
        boolean res = false;
        if (sudoku[i][j] == 0) {
            boolean[] option = NumberOption(sudoku, i, j);
            for (int k = 1; k < option.length; k++) {
                //判断哪些数字还没出现过
                if (!res && !option[k]) {
                    sudoku[i][j] = k;
                    //判断当前所填是否符合要求（即判断下一个位置是否存在能填数）
                    res = dfs(sudoku, i, j + 1);
                }
            }

            //当前位置所填数不合要求，重新填
            if (!res) {
                sudoku[i][j] = 0;
            }
        }
        else {
            //当前位置已经填过数了，继续下一个位置
            dfs(sudoku, i, j + 1);
        }
        return res;
    }

    //判断1-9哪些数字已经在行、列、小九宫格中出现过了
    public static boolean[] NumberOption(int[][] sudoku, int row, int col) {
        boolean[] option = new boolean[10];

        //在行、列中已经出现过
        for (int i = 0; i < sudoku.length; i++) {
            option[sudoku[row][i]] = true;
            option[sudoku[i][col]] = true;
        }

        //在小九宫格中出现过
        int J_row = row / 3 * 3, J_col = col / 3 * 3;
        for (int i = J_row; i < J_row + 3; i++) {
            for (int j = J_col; j < J_col + 3; j++) {
                option[sudoku[i][j]] = true;
            }
        }
        return option;
    }


    //输出
    public static void output(int[][] sudoku) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 8; j++) {
                System.out.print(sudoku[i][j] + " ");
            }
            System.out.println(sudoku[i][8]);
        }
    }
}
