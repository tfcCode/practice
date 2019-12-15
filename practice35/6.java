
//https://leetcode-cn.com/problems/valid-parentheses/
import java.util.*;

class Solution {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        System.out.println(isValid(s));
    }

    public static boolean isValid(String s) {
        Stack<Character> temp = new Stack<>();
        for (int i = 0; i < s.length(); i++) {

            if (s.charAt(i) == '(' || s.charAt(i) == '[' || s.charAt(i) == '{') {
                temp.push(s.charAt(i));
            } else if (temp.size() > 0) {
                char ch = temp.lastElement();
                if (ch == '(' && s.charAt(i) == ')') {
                    temp.pop();
                } else if (ch == '[' && s.charAt(i) == ']') {
                    temp.pop();
                } else if (ch == '{' && s.charAt(i) == '}') {
                    temp.pop();
                } else {
                    temp.push(s.charAt(i));
                }
            } else {
                temp.push(s.charAt(i));
            }
        }
        if (temp.size() == 0) {
            return true;
        } else {
            return false;
        }
    }
}