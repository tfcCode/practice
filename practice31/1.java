
//https://www.nowcoder.com/practice/e90351c561ff40a4b2bbf067bbbb5f31?tpId=90&tqId=30859&tPage=5&rp=5&ru=/ta/2018test&qru=/ta/2018test/question-ranking
import java.util.Scanner;

public class Main{
    public static void main(String args[]){
        Scanner scanner=new Scanner(System.in);
        int n=scanner.nextInt();
        int m=scanner.nextInt();
        if(n<=m){
            System.out.println(2);
        }
        else{
            int x= (int) Math.ceil((double)n/m*2);
            System.out.println(x);
        }
    }
}