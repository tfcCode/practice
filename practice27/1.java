
//https://www.nowcoder.com/practice/b8e21f5816874425836b7d32011f46b0?tpId=98&tqId=32968&tPage=8&rp=8&ru=/ta/2019test&qru=/ta/2019test/question-ranking
import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        int m;
        Scanner scanner=new Scanner(System.in);
        m=scanner.nextInt();
        int x;
        x=m/5;
        if(m%5!=0){
            x++;
        }
        System.out.println(x);
    }
}
