


//https://www.nowcoder.com/practice/1183548cd48446b38da501e58d5944eb?tpId=85&tqId=29840&tPage=1&rp=1&ru=/ta/2017test&qru=/ta/2017test/question-ranking
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int col=sc.nextInt();
        int row=sc.nextInt();
        int[][] pt=new int[row][col];
        int count=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(pt[i][j]==0){
                    count++;
                    if(i+2<row){
                        pt[i+2][j]=-1;
                    }
                    if(j+2<col){
                        pt[i][j+2]=-1;
                    }
                }
            }
        }
        System.out.println(count);
    }
}