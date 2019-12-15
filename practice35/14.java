

//https://leetcode-cn.com/problems/implement-strstr/
import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s1 = sc.next();
        String s2 = sc.next();
        System.out.println(strStr(s1, s2));
    }

    public static int strStr(String haystack, String needle) {
        if (needle.equals("")) {
            return 0;
        }
        if (haystack.equals("")) {
            return -1;
        }

        int index = -1;
        for (int i = 0; i < haystack.length(); i++) {
            if (haystack.charAt(i) == needle.charAt(0)) {
                int x = i, y = 0;
                while (x < haystack.length() && y < needle.length() && haystack.charAt(x) == needle.charAt(y)) {
                    x++;
                    y++;
                }
                if (y == needle.length()) {
                    index = i;
                    break;
                }
            }
        }
        return index;
    }
}