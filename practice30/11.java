

//https://www.nowcoder.com/practice/45083499b8c5404fb1db44c6ea4f170a?tpId=90&tqId=30845&tPage=4&rp=4&ru=/ta/2018test&qru=/ta/2018test/question-ranking
import java.util.*;
public class Main {
    public static void main(String args[]){
        Scanner scanner=new Scanner(System.in);
        String[] str=scanner.nextLine().split(" ");
        for(int i=0;i<str.length;i++){
            System.out.print(str[i].charAt(0));
        }
        System.out.println();
    }
}