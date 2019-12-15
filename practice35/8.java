

//https://leetcode-cn.com/problems/generate-parentheses/
import java.util.*;

class Solution {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println(generateParenthesis(n));
    }

    public static List<String> generateParenthesis(int n) {
        List<String> ans = new ArrayList();
        backtrack(ans, "", 0, 0, n);
        return ans;
    }

    public static void backtrack(List<String> ans, String cur, int left, int right, int max) {
        if (cur.length() == max * 2) {
            ans.add(cur);
            return;
        }

        if (left < max)
            backtrack(ans, cur + "(", left + 1, right, max);
        if (right < left)
            backtrack(ans, cur + ")", left, right + 1, max);
    }
}