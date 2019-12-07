//https://leetcode-cn.com/problems/reverse-integer/
import java.util.Scanner;

class Solution {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        int x = scanner.nextInt();
        System.out.println(reverse(x));
    }

    public static int reverse(int x) {
        int result = 0, pop;
        while (x != 0) {
            pop = x % 10;
            if (result > Integer.MAX_VALUE / 10 || (result == Integer.MAX_VALUE / 10 && pop > Integer.MAX_VALUE % 10)) {
                return 0;
            }
            if (result < Integer.MIN_VALUE / 10 || (result == Integer.MIN_VALUE / 10 && pop < Integer.MIN_VALUE % 10)) {
                return 0;
            }
            result = result * 10 + pop;
            x = x / 10;
        }
        return (int) result;
    }
}