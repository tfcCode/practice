
//https://www.nowcoder.com/practice/ff0e55dcb75b45b09164c56f87cdf737?tpId=90&tqId=30848&tPage=4&rp=4&ru=/ta/2018test&qru=/ta/2018test/question-ranking

/*
参考自：wylu
思路：中心遍历，以-2 1 2 3 4 5 6（排序后），距离 s=5 为例
假设此时以 1 为中心，设其下标为 i，1 左边的往右移动，右边的往左边移动，距离为s
此时的右边界 right=Max(1+s，6-s)，即right=Max(a[i]+s,a[n-1]-s)
     左边界 left=Min(2-s,-2+s),即 left=Min(a[i+1]-s,a[0]+s)
依次从 0 开始遍历，找出最佳中心点
*/
import java.util.*;
public class Main {
    public static void main(String args[]){
        Scanner scanner=new Scanner(System.in);
        int n=scanner.nextInt();
        int s=scanner.nextInt();
        int[] a=new int[n];
        for(int i=0;i<n;i++){
            a[i]=scanner.nextInt();
        }
        Arrays.sort(a);
        int dist=a[n-1]-a[0];
        int right,left;
        for(int i=0;i<n-1;i++){
            right=Math.max(a[i]+s,a[n-1]-s);
            left=Math.min(a[i+1]-s,a[0]+s);
            dist=Math.min(dist,right-left);
        }
        System.out.println(dist);
    }
}