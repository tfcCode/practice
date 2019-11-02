

//https://www.nowcoder.com/practice/13483f545ad7499c97a3bbcdcdb9312a?tpId=98&tqId=32923&tPage=5&rp=5&ru=/ta/2019test&qru=/ta/2019test/question-ranking
import java.util.Scanner;

public class Main{
    static int m,n,count;
    public static void main(String []args) {
        Scanner scanner=new Scanner(System.in);
        n=scanner.nextInt();
        m=scanner.nextInt();
        dfs(0,1);
        System.out.println(count);
    }
    public static void dfs(int sum,int p){
        if(sum==m&&p==n+1){
            count++;
        }
        int t=0;
        for(int i=p;i<=n;i++,t=t*10){
            t=t+i;
            dfs(sum+t,i+1);
            if(p!=1){
                dfs(sum-t,i+1);
            }
        }
    }
}
