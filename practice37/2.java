
//https://leetcode-cn.com/problems/wildcard-matching/
class Solution {
    public static void main(String[] args) {
        Solution solution = new Solution();
        String s = "aa";
        String p = "*";
        System.out.println(solution.isMatch(s, p));
    }

    public boolean isMatch(String s, String p) {
        boolean[][] dp = new boolean[s.length() + 1][p.length() + 1];

        dp[0][0] = true;

        for (int i = 1; i <= p.length(); i++) {
            if (dp[0][i - 1] == true && p.charAt(i - 1) == '*') {
                dp[0][i] = true;
            }
        }

        for (int i = 1; i <= s.length(); i++) {
            for (int j = 1; j <= p.length(); j++) {
                if (s.charAt(i - 1) == p.charAt(j - 1) || p.charAt(j - 1) == '?') {
                    dp[i][j] = dp[i - 1][j - 1];
                }
                if (p.charAt(j - 1) == '*') {
                    // dp[i][j-1] 表示匹配空串
                    // dp[i-1][j] 表示匹配一个字符串
                    dp[i][j] = dp[i - 1][j] || dp[i][j - 1];
                }
            }
        }
        return dp[s.length()][p.length()];
    }
}