
//https://leetcode-cn.com/problems/longest-palindromic-substring/
class Solution {

    public String longestPalindrome(String s) {
        int len = s.length();
        if (len <= 1) {
            return s;
        }

        int longestPalindrome = 1;
        String longestPalindromeStr = s.substring(0, 1);

        /**
         * 令dp[l][r]表示左右断点为l、r的字串为回文串
         */
        boolean[][] dp = new boolean[len][len];

        for (int r = 1; r < s.length(); r++) {
            for (int l = 0; l < r; l++) {
                /**
                 * 若dp[l][r]=true，则dp[l+1][r-1]一定为true
                 * 若s[l]==s[r],且去掉左右断点后只剩一个或不剩字符，dp[l][r]=true
                 * 例：aba，去掉左右断点后为 a
                 * 例：bb，去掉左右断点后为空
                 */
                if (s.charAt(l) == s.charAt(r) && (r - l <= 2 || dp[l + 1][r - 1])) {
                    dp[l][r] = true;
                    if (r - l + 1 > longestPalindrome) {
                        longestPalindrome = r - l + 1;
                        longestPalindromeStr = s.substring(l, r + 1);
                    }
                }
            }
        }
        return longestPalindromeStr;
    }
}
