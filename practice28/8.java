

//https://www.nowcoder.com/practice/b7da655789d941dd8f8bfc547443b5d1?tpId=98&tqId=33048&tPage=12&rp=12&ru=/ta/2019test&qru=/ta/2019test/question-ranking
import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner scanner=new Scanner(System.in);
        int n=scanner.nextInt();
        int count=0;
        for(int i=2,j=n-2;i<=n/2&&j>=n/2;){
            if(!isPrime(i)){
                i++;
            }
            else if(!isPrime(j)){
                j--;
            }
            else if(isPrime(i)&&isPrime(j)){
                if(i+j==n) {
                    count++;
                    i++;
                    j--;
                }
                else if(i+j<n){
                    i++;
                }
                else if(i+j>n){
                    j--;
                }
            }
        }
        System.out.println(count);
    }
    public static boolean isPrime(int n){
        for(int i=2;i<=Math.sqrt(n);i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
}
