
//https://www.nowcoder.com/practice/cc3eef5aed91489f9b706f4196e0d5c6?tpId=98&tqId=32979&tPage=8&rp=8&ru=/ta/2019test&qru=/ta/2019test/question-ranking
import java.util.Scanner;

public class Main {
    public static void main(String args[]){
        Scanner scanner=new Scanner(System.in);
        int n=scanner.nextInt();
        int pt[]=new int[2*n];
        int mark[]=new int[2*n];
        for(int i=0;i<2*n;i++){
            pt[i]=scanner.nextInt();
            mark[i]=1;
        }
        int left=0,right,count=0;
        while(left<2*n){
            if (mark[left]>0) {
                mark[left]=0;
                right=left+1;
                while(right<2*n&&pt[right]!=pt[left]){
                    count=count+mark[right];
                    right++;
                }
                mark[right]=0;
            }
            left++;
        }
        System.out.println(count);
    }
}
