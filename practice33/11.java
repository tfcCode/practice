

//https://www.nowcoder.com/practice/1b58fbb97bc048b8a4438173c5392167?tpId=85&tqId=29882&tPage=3&rp=3&ru=/ta/2017test&qru=/ta/2017test/question-ranking
import java.math.BigInteger;
import java.util.*;
import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int[] num=new int[10001];
        int x;
        for(int i=0;i<9997;i++){
            x=sc.nextInt();
            num[x]=1;
        }
        StringBuilder sb=new StringBuilder();
        for(int i=1;i<=10000;i++){
            if(num[i]==0){
                sb.append(i);
            }
        }
        BigInteger number=new BigInteger(sb.toString());
        System.out.println(number.mod(BigInteger.valueOf(7)));
    }
}

