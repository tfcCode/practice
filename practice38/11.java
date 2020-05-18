import java.math.BigInteger;
import java.util.Scanner;

/**
 * @author TFC
 * @date 2020/5/12 19:45
 */
// https://leetcode-cn.com/problems/sqrtx/
public class Test {
    public static void main(String[] args) {
        System.out.println(mySqrt(3));
    }

    public static int mySqrt(int x) {
        if (x == 0) {
            return 0;
        }
        long left = 1;
        long right = x / 2;
        while (left < right) {
            long mid = (left + right + 1) / 2;
            long res = mid * mid;
            if (res > x) {
                right = mid - 1;
            } else {
                left = mid;
            }
        }
        return (int) left;
    }
}











