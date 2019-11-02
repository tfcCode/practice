

//https://www.nowcoder.com/practice/b6b63d3c0ff140a481b4f9acda922503?tpId=98&tqId=33027&tPage=11&rp=11&ru=/ta/2019test&qru=/ta/2019test/question-ranking
import java.io.*;
import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    public static void Calculation(long num){
        int count,temp,m;
        count=0;
        for(int i=1;i<=num;i++){
            temp=i;
            while(temp>0){
                m=temp/5;
                count=count+m;
                temp=temp/5;
            }
        }
        System.out.println(count);
    }
    public static void main(String args[]) throws IOException {
        Scanner scanner=new Scanner(System.in);
        long n=scanner.nextLong();
        Calculation(n);
    }
}