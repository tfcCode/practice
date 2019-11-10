
//https://www.nowcoder.com/practice/9d4ac9f5eabd46bea7f41b66da9168fe?tpId=90&tqId=30854&tPage=4&rp=4&ru=/ta/2018test&qru=/ta/2018test/question-ranking
import java.util.*;

public class Main {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        long[] a = new long[n];
        for (int i = 0; i < n; i++) {
            a[i] = scanner.nextLong();
        }
        int k = scanner.nextInt();
        long[] sum=new long[n+1];
        for(int i=0;i<n;i++){
            sum[i+1]=sum[i]+a[i];
        }
        int res=0;
        for(int i=n;i>=1;i--){
            for(int j=0;j<i;j++){
                if((sum[i]-sum[j])%k==0){
                    res=Math.max(res,i-j);
                    break;
                }
            }
            if(res>=i-1){
                break;
            }
        }
        System.out.println(res);
    }
}