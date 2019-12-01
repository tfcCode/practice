

//https://www.nowcoder.com/practice/7f24eb7266ce4b0792ce8721d6259800?tpId=85&tqId=29863&tPage=2&rp=2&ru=/ta/2017test&qru=/ta/2017test/question-ranking

/**
 * 5 15
 * 5 5 10 2 3
 * 思路：看1—sum的各个方案有多少个，比如和为10的方案有2个，那么和为15的方案就有这几种
 * 1、数组中有15这个数
 * 2、和为10的方案数加上和为5的方案数
 */

import java.math.BigInteger;
import java.util.*;
import java.util.Scanner;

public class Main {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);

        String[] s=sc.nextLine().split(" ");
        int n=Integer.parseInt(s[0]);
        int sum=Integer.parseInt(s[1]);

        s=sc.nextLine().split(" ");
        int[] pt=new int[n+1];
        for(int i=1;i<=n;i++){
            pt[i]=Integer.parseInt(s[i-1]);
        }

        long[][] dp=new long[n+1][sum+1];
        for(int i=0;i<=n;i++){
            dp[i][0]=1;
        }

        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                if(j-pt[i]>=0){
                    dp[i][j]=dp[i-1][j]+dp[i-1][j-pt[i]];
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        System.out.println(dp[n][sum]);
    }
}