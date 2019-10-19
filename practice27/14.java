


//https://www.nowcoder.com/practice/6171d3a8748248248c21a3c8f330396d?tpId=98&tqId=33017&tPage=10&rp=10&ru=/ta/2019test&qru=/ta/2019test/question-ranking
import java.util.Scanner;

public class Main {
    public static void main(String args[]){
        Scanner scanner=new Scanner(System.in);
        int n = scanner.nextInt();
        String []str;
        String s;
        int [][]num=new int[n][n];
        for(int i=0;i<n;i++){
            s=scanner.next();
            str=s.split(",");
            for(int j=0;j<n;j++){
                num[i][j]=Integer.parseInt(str[j]);
            }
        }
        int dp[][]=new int[n][n];
        dp[0][0]=num[0][0];
        for(int i=1;i<n;i++){
            dp[i][0]=num[i][0]+dp[i-1][0];
        }
        for(int i=1;i<n;i++){
            dp[0][i]=num[0][i]+dp[0][i-1];
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<n;j++){
                dp[i][j]=Math.min(dp[i-1][j],dp[i][j-1])+num[i][j];
            }
        }
        System.out.println(dp[n-1][n-1]);
    }
}