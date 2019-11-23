


//https://www.nowcoder.com/practice/cd763d8541fc4243b8d3b967bb6d6b6a?tpId=85&tqId=29841&tPage=1&rp=1&ru=/ta/2017test&qru=/ta/2017test/question-ranking
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int[] x=new int[n];
        int[] y=new int[n];
        for(int i=0;i<n;i++){
            x[i]=sc.nextInt();
        }
        for(int i=0;i<n;i++){
            y[i]=sc.nextInt();
        }
        int temp=Integer.MAX_VALUE;
        for(int i=0;i<n;i++){
            temp=Math.min(temp,x[i]-1+y[i]-1);
        }
        System.out.println(temp);
    }
}