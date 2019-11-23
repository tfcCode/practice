


//https://www.nowcoder.com/practice/a5190a7c3ec045ce9273beebdfe029ee?tpId=85&tqId=29839&tPage=1&rp=1&ru=/ta/2017test&qru=/ta/2017test/question-ranking

import java.util.*;

public class Main {
    public static int ans,sum,mul,n;
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n=sc.nextInt();
        int[] pt=new int[n];
        for(int i=0;i<n;i++){
            pt[i]=sc.nextInt();
        }
        Arrays.sort(pt);
        mul=1;
        dfs(0,pt);
        System.out.println(ans);
    }
    public static void dfs(int index,int[] pt){
        for(int i=index;i<n;i++){
            //从只剩一个开始，依次递增数量
            sum=sum+pt[i];
            mul=mul*pt[i];
            if(sum>mul){
                ans++;
                dfs(i+1,pt);
            }
            else if(pt[i]==1){
                dfs(i+1,pt);
            }
            else{
                sum=sum-pt[i];
                mul=mul/pt[i];
                break;
            }
            sum=sum-pt[i];
            mul=mul/pt[i];
            for(;i<n-1&&pt[i]==pt[i+1];i++){}
        }
    }
}