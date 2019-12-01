

//https://www.nowcoder.com/practice/14cf13771cd840849a402b848b5c1c93?tpId=85&tqId=29884&tPage=3&rp=3&ru=/ta/2017test&qru=/ta/2017test/question-ranking
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int num = in.nextInt();

        int[] m={1,5,10,20,50,100};
        long[] data=new long[num+1];
        for(int i=0;i<=num;i++){
            data[i]=1;
        }

        for(int i=1;i<6;i++){
            for(int n=1;n<=num;n++){
                if(n>=m[i]){
                    data[n]=data[n]+data[n-m[i]];
                }
            }
        }
        System.out.println(data[num]);
    }
}