
//https://www.nowcoder.com/practice/e15b45484ff049ddb84fa1b8d309948c?tpId=90&tqId=30877&tPage=6&rp=6&ru=/ta/2018test&qru=/ta/2018test/question-ranking
import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        String[] str=bufferedReader.readLine().split(" ");
        int m=Integer.parseInt(str[0]);
        int n=Integer.parseInt(str[1]);
        int[][] pt=new int[m][n];
        for(int i=0;i<m;i++){
            str=bufferedReader.readLine().split(" ");
            for(int j=0;j<n;j++){
                pt[i][j]=Integer.parseInt(str[j]);
            }
        }
        int[][] dp=new int[m+1][n+1];
        dp[m][n]=1;
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                dp[i][j]=Math.max(1,Math.min(dp[i][j+1],dp[i+1][j])-pt[i][j]);
            }
        }
        System.out.println(dp[0][0]);
    }
}