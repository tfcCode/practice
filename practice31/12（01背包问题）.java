

//https://www.nowcoder.com/practice/343e8ccf80474ef686005d95637dd08d?tpId=90&tqId=30889&tPage=6&rp=6&ru=/ta/2018test&qru=/ta/2018test/question-ranking
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] str = br.readLine().split(",");
        int[] v=new int[str.length+1];
        int sum=0;
        for(int i=1;i<=str.length;i++){
            v[i]=Integer.parseInt(str[i-1]);
            sum+=v[i];
        }
        int vol=sum/2;
        int[][] dp=new int[str.length+1][vol+1];
        for(int i=1;i<=str.length;i++){
            for(int j=1;j<=vol;j++){
                if(j<v[i]){
                    dp[i][j]=dp[i-1][j];
                }
                else{
                    dp[i][j]=Math.max(dp[i-1][j-v[i]]+v[i],dp[i-1][j]);
                }
            }
        }
        System.out.println(sum-dp[str.length][vol]+","+dp[str.length][vol]);
    }
}
