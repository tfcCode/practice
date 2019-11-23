


//https://www.nowcoder.com/practice/a174820de48147d489f64103af152709?tpId=85&tqId=29834&tPage=1&rp=1&ru=/ta/2017test&qru=/ta/2017test/question-ranking
import java.util.Arrays;
import java.util.Scanner;


public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int[] pt=new int[n];
        float sum=0;
        for(int i=0;i<n;i++){
            pt[i]=sc.nextInt();
            sum+=pt[i];
        }
        float avg=sum/n;
        if(avg-(int)avg!=0){
            System.out.println(-1);
            System.exit(0);
        }
        int count=0,temp;
        for(int i=0;i<n;i++){
            temp=Math.abs((int)(pt[i]-avg));
            if(temp%2!=0){
                System.out.println(-1);
                System.exit(0);
            }
            if(pt[i]<avg){
                count=count+temp/2;
            }
        }
        System.out.println(count);
    }
}