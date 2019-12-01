
//https://www.nowcoder.com/practice/e27b9fc9c0ec4a17a5064fb6f5ab13e4?tpId=85&tqId=29883&tPage=3&rp=3&ru=/ta/2017test&qru=/ta/2017test/question-ranking
import java.math.BigInteger;
import java.util.*;
import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int x=sc.nextInt();
        int y=sc.nextInt();
        int sum=x+y;
        BigInteger m=new BigInteger("1");
        BigInteger n=new BigInteger("1");
        for(Integer i=sum;i>sum-x;i--){
            m=m.multiply(new BigInteger(i.toString()));
        }
        for(Integer i=1;i<=x;i++){
            n=n.multiply(new BigInteger(i.toString()));
        }
        System.out.println(m.divide(n));
    }
}

