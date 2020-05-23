import java.util.HashMap;
import java.util.Map;

/**
 * @author TFC
 * @date 2020/5/14 22:16
 */
// https://leetcode-cn.com/problems/minimum-window-substring/

/**
 * 1、初始，leftleft 指针和 rightright 指针都指向 S 的第一个元素
 *
 * 2、将 rightright 指针右移，扩张窗口，直到得到一个可行窗口，亦即包含 T 的全部字母的窗口
 *
 * 3、得到可行的窗口后，将 left 指针逐个右移，若得到的窗口依然可行，则更新最小窗口大小
 *
 * 4、若窗口不再可行，则跳转至 2
  */
public class Test {
    public static void main(String[] args) {
        int[][] matrix = {
                {1, 3, 5, 7},
                {10, 11, 16, 20},
                {23, 30, 34, 50}
        };
        int[] num = {2, 0, 2, 1, 1, 0};
        String s = "ADFCE";
        String t = "AD";
        System.out.println(minWindow(s, t));
    }

    public static String minWindow(String s, String t) {
        if (s.length() == 0 || t.length() == 0) {
            return "";
        }

        Map<Character, Integer> mapt = new HashMap<>();
        for (int i = 0; i < t.length(); i++) {
            int count = mapt.getOrDefault(t.charAt(i), 0);
            mapt.put(t.charAt(i), count + 1);
        }

        int left = 0;
        int right = 0;
        int count = 0;
        int start = 0, end = 0;
        int minlen = Integer.MAX_VALUE;
        Map<Character, Integer> window = new HashMap<>();

        while (right < s.length()) {
            char c = s.charAt(right);
            if (mapt.containsKey(c)) {
                window.put(c, window.getOrDefault(c, 0) + 1);
                if (window.get(c).compareTo(mapt.get(c)) == 0) {
                    count++;
                }
            }
            right++;

            while (count == mapt.size()) {
                if (right - left < minlen) {
                    start = left;
                    end = right;
                    minlen = right - left;
                }
                char c1 = s.charAt(left);
                if (mapt.containsKey(c1)) {
                    window.put(c1, window.getOrDefault(c1, 1) - 1);
                    if (window.get(c1) < mapt.get(c1)) {
                        count--;
                    }
                }
                left++;
            }
        }
        return minlen == Integer.MAX_VALUE ? "" : s.substring(start, end);

    }
}















