


import java.util.Scanner;

public class Main{
    public static void main(String args[]){
        Scanner scanner=new Scanner(System.in);
        int n=scanner.nextInt();
        int []pt=new int[n];
        int count=0;
        pt[0]=scanner.nextInt();
        for(int i=1;i<n;i++){
            pt[i]=scanner.nextInt();
            if(pt[i]!=pt[i-1]+1){
                count++;
            }
        }
        System.out.println(count+1);
    }
}