
//https://leetcode-cn.com/problems/spiral-matrix-ii/

import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Solution x = new Solution();
        int n = 5;
        int[][] res = x.generateMatrix(n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print(res[i][j] + " ");
            }
            System.out.println();
        }
    }
  
    public int[][] generateMatrix(int n) {
        int[][] res = new int[n][n];
        boolean[][] temp = new boolean[n][n];
        int sum = 0;
        int x = 1;

        int up = 0, down = n, left = 0, right = n;
        while (sum < n * n) {
            for (int i = left; i < right && temp[left][i] == false; i++) {
                res[left][i] = x;
                temp[left][i] = true;
                x++;
                sum++;
            }
            right--;

            for (int i = up + 1; i < down && temp[i][right] == false; i++) {
                res[i][right] = x;
                temp[i][right] = true;
                x++;
                sum++;
            }
            down--;

            for (int i = right - 1; i >= left && temp[down][i] == false; i--) {
                res[down][i] = x;
                temp[down][i] = true;
                x++;
                sum++;
            }
            left++;

            for (int i = down - 1; i > up && temp[i][up] == false; i--) {
                res[i][up] = x;
                temp[i][up] = true;
                x++;
                sum++;
            }
            up++;
        }
        return res;
    }
}
