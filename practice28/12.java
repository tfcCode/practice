


//https://www.nowcoder.com/practice/03d341fb6c9d42debcdd38d82a0a545c?tpId=98&tqId=33068&tPage=13&rp=13&ru=/ta/2019test&qru=/ta/2019test/question-ranking
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        int n=scanner.nextInt();
        int curmax=0;
        int result=-9999;
        int temp;
        for(int i=0;i<n;i++){
            temp=scanner.nextInt();
            curmax+=temp;
            result=Math.max(curmax,result);
            curmax=Math.max(curmax,0);
        }
        System.out.println(result);
    }
}
