
//https://www.nowcoder.com/practice/a1792d443f914f2b928d2a157cd7900d?tpId=98&tqId=33003&tPage=9&rp=9&ru=/ta/2019test&qru=/ta/2019test/question-ranking
import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] p = new int[n + 1];
        int[] a = new int[n + 1];
        int[] q = new int[n + 1];
        int[] b = new int[n + 1];
        for (int i = 1; i <= n; i++) {
            p[i] = scanner.nextInt();
            a[i] = scanner.nextInt();
            q[i] = scanner.nextInt();
            b[i] = scanner.nextInt();
        }

        int[][] dp = new int[n + 1][121];
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= 120; j++) {
                dp[i][j] = dp[i - 1][j];
                if (j >= p[i]) {
                    dp[i][j] = Math.max(dp[i][j], dp[i - 1][j - p[i]] + a[i]);
                }
                if (j >= q[i]) {
                    dp[i][j] = Math.max(dp[i][j], dp[i - 1][j - q[i]] + b[i]);
                }
            }
        }
        System.out.println(dp[n][120]);
    }
}