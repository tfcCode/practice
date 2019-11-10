

//https://www.nowcoder.com/practice/00fccaa8e30d414ab86b9bb229bd8e68?tpId=90&tqId=30829&tPage=3&rp=3&ru=/ta/2018test&qru=/ta/2018test/question-ranking
import java.util.*;

public class Main {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] a = new int[n];
        int[][] dp = new int[n][n];
        for (int i = 0; i < n; i++) {
            a[i] = scanner.nextInt();
            dp[i][i] = a[i];
        }
        for(int j=1;j<n;j++){
            for(int i=j-1;i>=0;i--){
                if(a[i]==a[j]){
                    dp[i][j]=dp[i+1][j-1]+2*a[i];
                }
                else{
                    dp[i][j]=Math.min(dp[i+1][j]+2*a[i],dp[i][j-1]+2*a[j]);
                }
            }
        }
        System.out.println(dp[0][n-1]);
    }
}
