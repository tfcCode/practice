

//https://www.nowcoder.com/practice/ee5de2e7c45a46a090c1ced2fdc62355?tpId=85&tqId=29867&tPage=2&rp=2&ru=/ta/2017test&qru=/ta/2017test/question-ranking
import java.util.*;
import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String[] s = sc.nextLine().split(" ");
        System.out.print(s[s.length-1]);
        for(int i=s.length-2;i>=0;i--){
            System.out.print(" "+s[i]);
        }
    }
}