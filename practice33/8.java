
//https://www.nowcoder.com/practice/eac8c671a0c345b38aa0c07aba40097b?tpId=85&tqId=29866&tPage=2&rp=2&ru=/ta/2017test&qru=/ta/2017test/question-ranking
import java.util.*;
import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String[] s = sc.nextLine().split(" ");
        int[] pt=new int[s.length];
        for(int i=0;i<s.length;i++){
            pt[i]=Integer.parseInt(s[i]);
        }
        Arrays.sort(pt);
        int count=0;
        int temp=pt[0];
        int sign=0;
        for(int i=0;i<s.length;i++){
            if(temp==pt[i]){
                count++;
            }
            else{
                if(count>=s.length/2){
                    sign++;
                    if(sign==1) {
                        System.out.print(temp);
                    }
                    else{
                        System.out.print(" "+temp);
                    }
                }
                temp=pt[i];
                count=1;
            }
        }
    }
}