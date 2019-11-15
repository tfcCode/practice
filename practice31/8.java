


//https://www.nowcoder.com/practice/16e48900851646c0b2c6cdef9d7ea051?tpId=90&tqId=30878&tPage=6&rp=6&ru=/ta/2018test&qru=/ta/2018test/question-ranking
import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        String[] str=bufferedReader.readLine().split(" ");
        int m=Integer.parseInt(str[0]);
        int n=Integer.parseInt(str[1]);
        List<Integer> pt_m=to_two(m);
        List<Integer> pt_n=to_two(n);
        int count=0;
        int x;
        if(pt_m.size()>pt_n.size()){
            for(int i=pt_n.size();i<pt_m.size();i++){
                x=pt_m.get(i);
                if(pt_m.get(i)==1){
                    count++;
                }
            }
            for(int i=0,j=0;j<pt_n.size();i++,j++){
                if(pt_m.get(i)!=pt_n.get(j)){
                    count++;
                }
            }
        }
        else if(pt_m.size()<pt_n.size()){
            for(int i=pt_m.size();i<pt_n.size();i++){
                if(pt_n.get(i)==1){
                    count++;
                }
            }
            for(int i=0,j=0;i<pt_m.size();i++,j++){
                if(pt_m.get(i)!=pt_n.get(j)){
                    count++;
                }
            }
        }
        else{
            for(int i=0,j=0;i<pt_m.size();i++,j--){
                if(pt_m.get(i)!=pt_n.get(j)){
                    count++;
                }
            }
        }
        System.out.println(count);
    }
    static List to_two(int n){
        List<Integer> result=new ArrayList<>();
        while(n>0){
            result.add(n%2);
            n=n/2;
        }
        return result;
    }
}