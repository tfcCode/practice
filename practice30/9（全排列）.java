import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static int count=0;
    public static void main(String args[]){
        Scanner scanner=new Scanner(System.in);
        char []ch=scanner.next().toCharArray();
        Arrays.sort(ch);
        String s=new String(ch);
        StringBuilder stringBuilder=new StringBuilder(s);
        int m=stringBuilder.length();
        Permutation(stringBuilder,0);
    }
    public static boolean Is_repeat(StringBuilder str,int from,int to){
        for(int i=from;i<to;i++){
            if(str.charAt(i)==str.charAt(to)){
                return true;
            }
        }
        return false;
    }
    public static StringBuilder Swap(StringBuilder str,int i,int j){
        char ch1=str.charAt(i);
        char ch2=str.charAt(j);
        str.setCharAt(i,ch2);
        str.setCharAt(j,ch1);
        return str;
    }
    public static void Permutation(StringBuilder str,int n){
        if(n==str.length()){
            count++;
            System.out.println(count+"："+str);
        }
        else{
            for(int i=n;i<str.length();i++){
                if(!Is_repeat(str,n,i)){
                    Swap(str,n,i);
                    Permutation(str,n+1);
                    Swap(str,n,i);
                }
            }
        }
    }
}