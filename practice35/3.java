
//https://leetcode-cn.com/problems/letter-combinations-of-a-phone-number/
import java.util.*;

class Solution {
    static Map<Character, String> phone = new HashMap<Character, String>() {{
        put('2', "abc");
        put('3', "def");
        put('4', "ghi");
        put('5', "jkl");
        put('6', "mno");
        put('7', "pqrs");
        put('8', "tuv");
        put('9', "wxyz");
    }};


    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        //String str = sc.next();
        String str = "";
        System.out.println(letterCombinations(str));
    }

    public static List<String> letterCombinations(String digits) {
        List<String> res = new ArrayList<>();
        if (digits.length() == 0 || digits == null) {
            return res;
        }
        StringBuilder temp = new StringBuilder();
        next(digits, 0, temp, res);
        return res;
    }

    public static void next(String str, int n, StringBuilder temp, List<String> res) {
        if (n == str.length()) {
            res.add(temp.toString());
            return;
        }
        char ch = str.charAt(n);
        String s = phone.get(ch);
        for (int i = 0; i < s.length(); i++) {
            temp.append(s.charAt(i));
            next(str, n + 1, temp, res);
            temp.delete(temp.length() - 1, temp.length());
        }
    }
}