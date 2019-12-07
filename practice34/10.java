
//https://leetcode-cn.com/problems/regular-expression-matching/
import java.util.Scanner;

class Solution {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        String s=scanner.next();
        String p=scanner.next();
        System.out.println(isMatch(s,p));
    }

    public static boolean isMatch(String s, String p) {
        if (s == null || p == null) {
            return false;
        }

        //dp[i][j] 表示 s 的前 i 个是否能被 p 的前 j 个匹配
        boolean[][] dp = new boolean[s.length() + 1][p.length() + 1];
        dp[0][0] = true;

        /**
         * 例：s=aab，p=c*a*b
         * 若不进行预处理，则dp[0][1+1]=false
         * 但根据实际情况，dp[0][1+1]=true
         * 所以要对特殊情况进行预处理
         */
        for (int i = 0; i < p.length(); i++) { // here's the p's length, not s's
            if (p.charAt(i) == '*' && dp[0][i - 1]) {
                dp[0][i + 1] = true; // here's y axis should be i+1
            }
        }

        for (int i = 0; i < s.length(); i++) {
            for (int j = 0; j < p.length(); j++) {
                if (p.charAt(j) == s.charAt(i) || p.charAt(j) == '.') {
                    dp[i + 1][j + 1] = dp[i][j];
                }
                if (p.charAt(j) == '*') {
                    if (p.charAt(j - 1) != s.charAt(i) && p.charAt(j - 1) != '.') {
                        dp[i + 1][j + 1] = dp[i + 1][j - 1];
                    } else {
                        dp[i + 1][j + 1] = (dp[i][j + 1] || dp[i + 1][j] || dp[i + 1][j - 1]);
                    }
                }
            }
        }
        return dp[s.length()][p.length()];
    }
}