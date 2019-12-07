
//https://leetcode-cn.com/problems/longest-common-prefix/
import java.util.Scanner;

class Solution {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String[] str = new String[3];
        for (int i = 0; i < 3; i++) {
            str[i] = sc.next();
        }
        String s = longestCommonPrefix(str);
        System.out.println(s);
    }

    public static String longestCommonPrefix(String[] strs) {
        if(strs.length==0){
            return "";
        }

        String str = strs[0];
        for(int i=1;i<strs.length;i++){
            if(strs[i].length()<str.length()){
                str=strs[i];
            }
        }

        char ch;
        int length = 0;
        for (int i = 0; i < str.length(); i++) {
            ch = str.charAt(i);
            if (!judge(strs, ch, length)) {
                break;
            }
            length++;
        }
        String pt = str.substring(0, length);
        return pt;
    }

    public static boolean judge(String[] strs, char ch, int length) {
        for (int i = 0; i < strs.length; i++) {
            if (strs[i].charAt(length) != ch) {
                return false;
            }
        }
        return true;
    }
}