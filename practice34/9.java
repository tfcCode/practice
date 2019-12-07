//https://leetcode-cn.com/problems/palindrome-number/
import java.util.Scanner;

class Solution {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        int x=scanner.nextInt();
        System.out.println(isPalindrome(x));
    }

    public static boolean isPalindrome(int x) {
        String str=new String(String.valueOf(x));
        StringBuilder s1=new StringBuilder(str);
        StringBuilder s2=new StringBuilder(str);
        s1=s1.reverse();
        for(int i=0;i<s1.length();i++){
            if(s1.charAt(i)!=s2.charAt(i)){
                return false;
            }
        }
        return true;
    }
}