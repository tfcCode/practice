
//https://www.nowcoder.com/practice/d2dfc62bf1ba42679a0e358c57da9828?tpId=90&&tqId=30778&rp=1&ru=/activity/oj&qru=/ta/2018test/question-ranking
import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String args[]){
        Scanner scanner=new Scanner(System.in);
        int n=scanner.nextInt();
        int []h=new int[n];
        for(int i=0;i<n;i++){
            h[i]=scanner.nextInt();
        }
        Arrays.sort(h);
        n=scanner.nextInt();
        int []w=new int[n];
        for(int i=0;i<n;i++){
            w[i]=scanner.nextInt();
        }
        Arrays.sort(w);
        int i=h.length-1;
        int j=w.length-1;
        int count=0;
        while(i>=0&&j>=0){
            if(w[j]>=h[i]){
                i--;
                j--;
                count++;
            }
            else{
                i--;
            }
        }
        System.out.println(count);
    }
}