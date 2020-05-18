import java.util.Stack;

/**
 * @author TFC
 * @date 2020/5/14 22:16
 */
// https://leetcode-cn.com/problems/edit-distance/
public class Test {
    public static void main(String[] args) {
        System.out.println(minDistance("horse", "ros"));
    }

    public static int min(int a, int b, int c) {
        a = Math.min(a, b);
        return Math.min(a, c);
    }

    public static int minDistance(String word1, String word2) {
        int[][] dis = new int[word1.length() + 1][word2.length() + 1];

        for (int i = 1; i <= word1.length(); i++) {
            dis[i][0] = dis[i - 1][0] + 1;
        }
        for (int i = 1; i <= word2.length(); i++) {
            dis[0][i] = dis[0][i - 1] + 1;
        }

        int temp, delete, insert, addtion;
        for (int i = 1; i <= word1.length(); i++) {
            for (int j = 1; j <= word2.length(); j++) {
                temp = word1.charAt(i - 1) == word2.charAt(j - 1) ? 0 : 1;
                insert = dis[i - 1][j] + 1;
                delete = dis[i][j - 1] + 1;
                addtion = dis[i - 1][j - 1] + temp;
                int x = min(insert, delete, addtion);
                dis[i][j] = x;
            }
        }
        for (int i = 0; i <= word1.length(); i++) {
            for (int j = 0; j <= word2.length(); j++) {
                System.out.print(dis[i][j] + " ");
            }
            System.out.println();
        }
        return dis[word1.length()][word2.length()];
    }
}














