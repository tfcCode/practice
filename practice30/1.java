
//https://www.nowcoder.com/practice/ce5b35929ab84e3a806886d9667be00a?tpId=90&tqId=30790&tPage=1&rp=1&ru=/ta/2018test&qru=/ta/2018test/question-ranking
import java.util.Scanner;

public class Main {
    public static void main(String args[]){
        Scanner scanner=new Scanner(System.in);
        int n=scanner.nextInt();
        int t=scanner.nextInt();
        int a=scanner.nextInt();
        int count=0;
        if(t<=a){
            count=count+t;
            count=count+n-a;
        }
        else{
            count=count+a;
            count=count+n-t;
        }
        System.out.println(count);
    }
}
