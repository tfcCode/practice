
/**
 * 我们知道，一共N个元素，共有 n! 种排列，其中，每个不同作为开头的排列数各有 (n-1)! 个。
 * 可知，第 k 个排列，可通过计算 (n-1)! 再做除法，向上取整后减一。即为第一个位置数字的索引
 * <p>
 * 假设 n=4,k=10 的情况下，(n-1)! = 6
 * 10 / 6 = 1.667 ,取整为 2，再减一，得出第一个位置的数字索引为 1，即为元素 2.
 * 将 2 在未确定位置元素的数组中移除，此时，k应该递减，即减去第一位的可能性个数，
 * 既是减去 (n-1)! * 1 （此处 *1 是因为上面算出的索引为 1）。
 * 确定第一个元素为 2，数组中还剩 [1,3,4] ，k为 4，第二个位置的数字索引为 ceil(4/(3-1)!)-1 = 1，
 * 得出第二个元素为 3，数组中还剩 [1,4] ,k = 4-1*(3-1)! = 2
 * 继续计算第三个位置的元素索引为 ceil(2/(2-1)!)-1 = 1，抵触第三个元素为 4，剩余最后一个元素 1 。
 * 依次计算，或者直接追加均可。
 * <p>
 * n 剩余的数字个数，递减
 * f 每组的排列个数
 */
//https://leetcode-cn.com/problems/permutation-sequence/
class Solution {
    public static void main(String[] args) {
        Solution x = new Solution(); 
        System.out.println(x.getPermutation(3, 3));
    }

    public String getPermutation(int n, int k) {
        boolean[] visited = new boolean[n];
        // 将 n! 种排列分为：n 组，每组有 (n - 1)! 种排列
        return recursive(n, factorial(n - 1), k, visited);
    }

    private String recursive(int n, int f, int k, boolean[] visited) {
        int offset = k % f;   // 组内偏移量
        int groupIndex = k / f + (offset > 0 ? 1 : 0);  // 第几组

        int i = 0;
        for (; i < visited.length && groupIndex > 0; i++) {
            if (!visited[i]) {
                groupIndex--;
            }
        }
        visited[i - 1] = true;

        if (n - 1 > 0) {
            // offset = 0 时，则取第 i 组的第 f 个排列，否则取第 i 组的第 offset 个排列
            return String.valueOf(i) + recursive(n - 1, f / (n - 1), (offset == 0 ? f : offset), visited);
        } else {
            // 最后一数字
            return String.valueOf(i);
        }
    }

    //求 n!
    private int factorial(int n) {
        int res = 1;
        for (int i = n; i > 1; i--) {
            res *= i;
        }
        return res;
    }
}
