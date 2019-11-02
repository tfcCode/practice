//: strings/ReplacingStringTokenizer.java

//https://www.nowcoder.com/practice/b6edb5ca15d34b1eb42e4725a3c68eba?tpId=98&tqId=33062&tPage=12&rp=12&ru=/ta/2019test&qru=/ta/2019test/question-ranking
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        int x=scanner.nextInt();
        String str[]=new String[x];
        int []pt=new int[x];
        for(int i=0;i<x;i++){
            str[i]=scanner.next();
        }
        int m,n;
        for(int i=0;i<x;i++){
            for(m=0,n=str[i].length()-1;m<n;){
                if(str[i].charAt(m)!=str[i].charAt(n)){
                    if(str[i].charAt(m+1)==str[i].charAt(n)){
                        pt[i]=m;
                        break;
                    }
                    if(str[i].charAt(m)==str[i].charAt(n-1)){
                        pt[i]=n;
                        break;
                    }
                }
                else{
                    m++;
                    n--;
                }
            }
            if(m>=n){
                pt[i]=-1;
            }
        }
        for(int num:pt){
            System.out.println(num);
        }
    }
}
