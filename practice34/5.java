
//https://leetcode-cn.com/problems/longest-substring-without-repeating-characters/
import java.util.*;

class Solution {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        int m = lengthOfLongestSubstring(str);
        System.out.println(m);
    }

    public static int lengthOfLongestSubstring(String s) {
        StringBuilder str = new StringBuilder(s);

        HashMap<Character, Integer> map = new HashMap<Character, Integer>();

        int length = 0, temp = 0;

        for (int i = 0; i < s.length(); i++) {
            for (int j = i; j < s.length(); j++) {
                if (map.get(str.charAt(j)) == null) {
                    map.put(str.charAt(j), 1);
                    temp++;
                } else {
                    if (temp > length) {
                        length = temp;
                        temp = 1;
                    }
                    break;
                }
            }
            if (temp > length) {
                length = temp;
            }
            map.clear();
            temp=0;
        }
        return length;
    }
}