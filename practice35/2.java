
//https://leetcode-cn.com/problems/3sum-closest/
import java.util.Arrays;
import java.util.Scanner;

class Solution {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] pt=new int[n];
        for(int i=0;i<n;i++){
            pt[i]=sc.nextInt();
        }
        int x=threeSumClosest(pt,2);
        System.out.println(x);
    }
    public static int threeSumClosest(int[] nums, int target) {
        int res=0,temp=Integer.MAX_VALUE;
        int len=nums.length;
        Arrays.sort(nums);

        for(int i=0;i<len;i++){
            System.out.print(nums[i]+" ");
        }
        System.out.println();
        for(int i=0;i<len;i++){
            if(i>0&&nums[i]==nums[i-1]){
                continue;
            }
            int L=i+1;
            int R=len-1;
            while(L<R){
                int sum=nums[i]+nums[L]+nums[R];
                if(sum==target){
                    return sum;
                }
                if(Math.abs(target-sum)<temp){
                    res=sum;
                    temp=Math.abs(target-sum);
                }
                if(sum>target){
                    R--;
                }
                else if(sum<target){
                    L++;
                }
            }
        }
        return res;
    }
}