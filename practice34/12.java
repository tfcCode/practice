
//https://leetcode-cn.com/problems/integer-to-roman/
import java.util.Scanner;

class Solution {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        System.out.println(intToRoman(num));
    }

    public static String intToRoman(int num) {
        // 把阿拉伯数字与罗马数字可能出现的所有情况和对应关系，放在两个数组中
        // 并且按照阿拉伯数字的大小降序排列，这是贪心选择思想
        int[] nums = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        String[] romans = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        StringBuilder str = new StringBuilder("");
        int index = 0;
        while (index < 13) {
            while (num >= nums[index]) {
                str.append(romans[index]);
                num = num - nums[index];
            }
            index++;
        }
        return str.toString();
    }
}