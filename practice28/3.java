

//https://www.nowcoder.com/practice/f350f14cd22c41aabfa7e54a1b8e8825?tpId=98&tqId=33024&tPage=11&rp=11&ru=/ta/2019test&qru=/ta/2019test/question-ranking
import java.io.*;
import java.util.*;

public class Main {
    public static void translate(String s){
        String []str=s.split(",");
        List<Integer> pt=new LinkedList<>();
        for(int i=0;i<str.length;i++){
            pt.add(Integer.parseInt(str[i]));
        }
        ListIterator<Integer> front=pt.listIterator();
        ListIterator<Integer> back=pt.listIterator(pt.size());

        List<Integer> pt1=new LinkedList<>();
        for(int i=0;i<str.length/2;i++){
            pt1.add(front.next());
            pt1.add(back.previous());
        }
        if(str.length%2==1){
            pt1.add(front.next());
        }
        front=pt1.listIterator();
        System.out.print(front.next());
        while(front.hasNext()){
            System.out.print(","+front.next());
        }
        System.out.println();
    }
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader=new BufferedReader(new InputStreamReader(System.in));
        String s=bufferedReader.readLine();
        translate(s);
    }
}