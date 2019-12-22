
//https://leetcode-cn.com/problems/longest-valid-parentheses/

import java.util.Stack;

class Solution {
    public static void main(String[] args) {
        String str = ")()())";
        System.out.println(longestValidParentheses(str));
    }

    public static int longestValidParentheses(String s) {
        Stack<Integer> temp = new Stack<>();
        int res = 0;
        temp.push(-1);   //预防第一个为')'
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '(') {
                temp.push(i);
            } else {
                temp.pop();
                if (temp.empty()) {
                    temp.push(i);
                }
                else {
                    res = Math.max(res, i - temp.lastElement());
                }
            }
        }
        return res;
    }
}