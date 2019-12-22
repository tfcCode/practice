

//https://leetcode-cn.com/problems/substring-with-concatenation-of-all-words/
import java.util.*;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = "barfoothefoobarman";
        String[] words = new String[]{"foo", "bar"};
        System.out.println(findSubstring(s, words));
    }

    public static List<Integer> findSubstring(String s, String[] words) {
        List<Integer> res = new ArrayList<>();
        if (s.length() == 0 || s == null || words.length == 0 || words == null) {
            return res;
        }

        int len = words[0].length();
        int sum_len = len * words.length;

        HashMap<String, Integer> map = new HashMap<>();
        for (String word : words) {
            map.put(word, map.getOrDefault(word, 0) + 1);
        }

        HashMap<String, Integer> temp_map = new HashMap<>();
        for (int i = 0; i <= s.length() - sum_len; i++) {
            String temp = s.substring(i, i + sum_len);
            temp_map.clear();
            for (int j = 0; j < sum_len; j = j + len) {
                String str = temp.substring(j, j + len);
                temp_map.put(str, temp_map.getOrDefault(str, 0) + 1);
            }
            if (map.equals(temp_map)) {
                res.add(i);
            }
        }
        return res;
    }
}
