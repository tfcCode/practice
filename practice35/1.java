
//https://leetcode-cn.com/problems/3sum/
import java.util.*;

class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        List<List<Integer>> result = new ArrayList();

        int len = nums.length;

        if(nums == null || len < 3)
            return result;

        Arrays.sort(nums); // 排序
        for(int i=0;i<len;i++){
            if(nums[i]>0){
                break;
            }
            if(i>0&&nums[i]==nums[i-1]){
                continue;   //去重
            }
            int L=i+1;
            int R=len-1;
            while(L<R){
                int sum=nums[i]+nums[L]+nums[R];
                if(sum==0){
                    System.out.println(nums[i]+" "+nums[L]+" "+nums[R]);
                    result.add(Arrays.asList(nums[i],nums[L],nums[R]));
                    while(L<R&&nums[L+1]==nums[L]){
                        L++;
                    }
                    while(L<R&&nums[R-1]==nums[R]){
                        R--;
                    }
                    L++;
                    R--;
                }
                else if(sum<0){
                    L++;
                }
                else if(sum>0){
                    R--;
                }
            }
        }
        return result;
    }
}