

//https://www.nowcoder.com/practice/839f681bf36c486fbcc5fcb977ffe432?tpId=85&tqId=29844&tPage=1&rp=1&ru=/ta/2017test&qru=/ta/2017test/question-ranking
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        String[] str=new String[n];
        for(int i=0;i<n;i++){
            str[i]=sc.next();
        }
        if(Lexicographically(str)&&Lengths(str)){
            System.out.println("both");
        }
        else if(!Lexicographically(str)&&!Lengths(str)){
            System.out.println("none");
        }
        else if(Lexicographically(str)){
            System.out.println("lexicographically");
        }
        else if(Lengths(str)){
            System.out.println("lengths");
        }
    }

    static boolean Lexicographically(String[] str){
        for(int i=0;i<str.length-1;i++){
            if(str[i].compareTo(str[i+1])>0){
                return false;
            }
        }
        return true;
    }

    static boolean Lengths(String[] str){
        for(int i=0;i<str.length-1;i++){
            if(str[i].length()>str[i+1].length()){
                return false;
            }
        }
        return true;
    }
}