import java.util.Scanner;

/**
 * @author TFC
 * @date 2020/5/12 19:45
 */
// https://leetcode-cn.com/problems/plus-one/
public class Test {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[][] dp = {
                {1, 3, 1},
                {1, 5, 1},
                {4, 2, 1}
        };
        int[] tfc = {9};
        System.out.println(plusOne(tfc));
    }

    public static int[] plusOne(int[] digits) {
        int i = digits.length - 1;

        int r = 1;
        int t;
        while (i >= 0) {
            t = digits[i] + r;
            digits[i] = t % 10;
            r = t / 10;
            i--;
        }
        if (r != 0) {
            int[] result = new int[digits.length + 1];
            result[0] = r;
            for (int x = 1; x < result.length; x++) {
                result[x] = digits[x - 1];
            }
            return result;
        }
        return digits;
    }
}











