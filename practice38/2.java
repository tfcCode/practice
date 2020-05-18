
//https://leetcode-cn.com/problems/length-of-last-word/
import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = "a";
        Solution x = new Solution();
        System.out.println(x.lengthOfLastWord(str));
    }

    public int lengthOfLastWord(String s) {
        if (s == null || s.equals("")) {
            return 0;
        }
        int res = 0;
        s = s.trim();
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s.charAt(i) != ' ') {
                res++;
            } else {
                break;
            }  
        }
        return res;
    }
}
