

//https://www.nowcoder.com/practice/a4771283f1c9435d9aeb3045d55dc030?tpId=98&tqId=33049&tPage=12&rp=12&ru=/ta/2019test&qru=/ta/2019test/question-ranking
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        int n=scanner.nextInt();
        int []pt=new int[n];
        int sum=0;
        for(int i=0;i<n;i++){
            pt[i]=scanner.nextInt();
            sum=sum+pt[i];
        }
        if(sum%n==1){
            System.out.println(-1);
            System.exit(0);
        }
        int diff=0;
        int aver=sum/n;
        int count=0;
        for(int i=0;i<n;i++){
            diff=pt[i]-aver;
            if(Math.abs(diff)%2==1){
                System.out.println(-1);
                System.exit(0);
            }
            if(diff>0){
                count+=diff/2;
            }
        }
        System.out.println(count);
    }
}
