
//https://www.nowcoder.com/practice/6ffdd7e4197c403e88c6a8aa3e7a332a?tpId=85&tqId=29861&tPage=2&rp=2&ru=/ta/2017test&qru=/ta/2017test/question-ranking
import java.math.BigInteger;
import java.util.*;
import java.util.Scanner;

public class Main {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        BigInteger result=new BigInteger("1");
        BigInteger temp;
        for(Integer i=2;i<=n;i++){
            temp=new BigInteger(i.toString());
            result=result.multiply(temp);
        }
        String str=result.toString();
        int count=0;
        for(int i=str.length()-1;i>=0;i--){
            if(str.charAt(i)=='0'){
                count++;
            }
            else{
                break;
            }
        }
        System.out.println(count);
    }
}