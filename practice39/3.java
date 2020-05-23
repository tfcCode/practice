
/**
 * @author TFC
 * @date 2020/5/14 22:16
 */
// https://leetcode-cn.com/problems/sort-colors/
public class Test {
    public static void main(String[] args) {
        int[][] matrix = {
                {1, 3, 5, 7},
                {10, 11, 16, 20},
                {23, 30, 34, 50}
        };
        int[] num = {2, 0, 2, 1, 1, 0};
        sortColors(num);
    }

    public static void sortColors(int[] nums) {
        int p0 = 0;
        int p2 = nums.length - 1;
        int cur = 0;
        int temp;
        while (cur <= p2) {
            if (nums[cur] == 0) {
                temp = nums[p0];
                nums[p0++] = nums[cur];
                nums[cur++] = temp;
            } else if (nums[cur] == 2) {
                temp = nums[p2];
                nums[p2--] = nums[cur];
                nums[cur] = temp;
            } else {
                cur++;
            }
        }
        for (int i = 0; i < nums.length; i++) {
            System.out.print(nums[i] + " ");
        }
    }
}














