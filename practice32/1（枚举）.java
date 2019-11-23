
//题目：一个5*6的矩形灯阵，1表示亮，0表示灭，1表示按下，0表示不按下
//且按下一个灯后，与它相邻的所有灯都会改变状态（即由灭到亮，由亮到灭）
//问按下哪些等后灯会全灭


/*
思路：
    以第一行为基准，因为第一行确定后，后面几行就确定了。
    第一行由模拟二进制加法来遍历，从第二行开始，确定当前方格是否需要按下，0表示不需要按下，1表示需要按下
    当前方格只用来使上一格灭掉
    当前方格的值（0/1）由
    puzzle[r][c]：当前方格的值，0表示灭，1表示亮
    press[r][c]：表示当前方格的上一格是否按下
    press[r][c - 1]：表示当前方格的左侧是否按下
    press[r][c + 1]：表示当前方格的右侧是否按下
    press[r - 1][c]：表示当前方格的上上个方格是否按下
*/
import java.io.*;
import java.util.*;

public class Main {
    public static int[][] press = new int[6][8];
    public static int[][] puzzle = new int[6][8];

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        //输入数据
        for (int i = 1; i <= 5; i++) {
            String[] str = br.readLine().split(" ");
            for (int j = 1; j <= 6; j++) {
                puzzle[i][j] = Integer.parseInt(str[j - 1]);
            }
        }

        enumerate();

        for (int i = 1; i <= 5; i++) {
            for (int j = 1; j <= 6; j++) {
                System.out.print(press[i][j] + " ");
            }
            System.out.println();
        }
    }

    public static void enumerate() {
        int c;
        //第一行都置为 0
        for (c = 1; c < 7; c++) {
            press[1][c] = 0;
        }
        while (guess() == false) {
            press[1][1]++;
            c = 1;

            //因为每个数非 0 即 1，所以用第一行模拟二进制加法来遍历所有情况
            while (c <= 6 && press[1][c] > 1) {
                press[1][c] = 0;
                c++;
                press[1][c]++;
            }
        }
    }

    public static Boolean guess() {
        for (int r = 1; r < 5; r++) {
            for (int c = 1; c < 7; c++) {
                //%2 是因为的操作会抵消，相当于没有操作
                press[r + 1][c] = (puzzle[r][c] + press[r][c] + press[r][c - 1] + press[r][c + 1] + press[r - 1][c]) % 2;
            }
        }

        //最后判断最后一行是否全部灭了
        for (int c = 1; c < 7; c++) {
            //若最后一行方格中的值为1，而且能够影响它的所有操作（0/1）的和等于1，表示按下--->灭
            //若最后一行方格中的值为0，而且能够影响它的所有操作（0/1）的和等于0，表示没有按下--->灭（0本身就代表灭）
            if ((press[5][c - 1] + press[5][c] + press[5][c + 1] + press[4][c]) % 2 != puzzle[5][c]) {
                return false;
            }
        }
        return true;
    }
}