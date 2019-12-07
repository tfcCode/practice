
//https://leetcode-cn.com/problems/roman-to-integer/
import java.util.HashMap;
import java.util.Scanner;

class Solution {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        System.out.println(romanToInt(s));

    }

    public static int romanToInt(String s) {
        HashMap<Character, Integer> map = new HashMap<Character, Integer>();
        map.put('M', 1000);
        map.put('D', 500);
        map.put('C', 100);
        map.put('L', 50);
        map.put('X', 10);
        map.put('V', 5);
        map.put('I', 1);

        int res = 0, x1, x2;
        for (int i = 0; i < s.length(); i++) {
            if (i + 1 < s.length()) {
                x1 = map.get(s.charAt(i));
                x2 = map.get(s.charAt(i + 1));
                if (x1 < x2) {
                    res = res + x2 - x1;
                    i++;
                } else {
                    res = res + x1;
                }
            } else {
                res = res + map.get(s.charAt(i));
            }
        }
        return res;
    }
}