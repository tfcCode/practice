


//https://www.nowcoder.com/practice/3e9d7d22b7dd4daab695b795d243315b?tpId=90&tqId=30844&tPage=4&rp=4&ru=/ta/2018test&qru=/ta/2018test/question-ranking
import java.util.*;
public class Main {
    public static int Min_divisor(int m,int n){
        int r=m%n;
        while(r>0){
            m=n;
            n=r;
            r=m%n;
        }
        return n;
    }
    public static void main(String args[]){
        Scanner scanner=new Scanner(System.in);
        int[] pt=new int[5];
        for(int i=0;i<5;i++){
            pt[i]=scanner.nextInt();
        }
        Arrays.sort(pt);
        int Min=Integer.MAX_VALUE;
        int m1,m2;
        for(int i=0;i<3;i++){
            for(int j=i+1;j<4;j++){
                for(int k=j+1;k<5;k++){
                    m1=pt[i]/Min_divisor(pt[i],pt[j])*pt[j];
                    m2=m1/Min_divisor(m1,pt[k])*pt[k];
                    Min=Math.min(Min,m2);
                }
            }
        }
        System.out.println(Min);
    }
}