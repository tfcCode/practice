
//https://www.nowcoder.com/practice/9af744a3517440508dbeb297020aca86?tpId=37&tqId=21316&tPage=5&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        int sum1;
        int sum2;
        int sum,count,temp;
        while(scanner.hasNext()) {
            int n=scanner.nextInt();
            int []pt=new int[n];

            sum1=0;
            sum2=0;
            count=0;

            for (int i = 0; i < n; i++) {
                temp = scanner.nextInt();
                if (temp % 3 == 0) {
                    sum1 += temp;
                } else if (temp % 5 == 0) {
                    sum2 += temp;
                } else {
                    pt[count++] = temp;
                }
            }
            sum = Math.abs(sum1 - sum2);
            System.out.println(Judge(0, count, pt, sum, 0));
        }
    }
    public static boolean Judge(int i,int n,int []a,int sum,int result){
        if(i==n){
            return Math.abs(result)==sum;
        }
        else{
            return (Judge(i+1,n,a,sum,result+a[i])||Judge(i+1,n,a,sum,result-a[i]));
        }
    }
}