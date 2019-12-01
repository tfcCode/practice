

//https://www.nowcoder.com/practice/bd891093881d4ddf9e56e7cc8416562d?tpId=85&tqId=29864&tPage=2&rp=2&ru=/ta/2017test&qru=/ta/2017test/question-ranking
import java.math.BigInteger;
import java.util.*;
import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        int index;
        String temp, result="";
        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) >= '0' && str.charAt(i) <= '9') {
                index = i;
                while (i < str.length() && str.charAt(i) >= '0' && str.charAt(i) <= '9') {
                    i++;
                }
                temp = str.substring(index, i);
                if(temp.length()>result.length()){
                    result=temp;
                }
            }
        }
        System.out.println(result);
    }
}