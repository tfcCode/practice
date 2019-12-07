

//https://leetcode-cn.com/problems/median-of-two-sorted-arrays/
class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int[] num = new int[nums1.length + nums2.length];
        int x1 = 0, x2 = 0;
        for (int i = 0; i < num.length; i++) {
            if (x1 != nums1.length && x2 != nums2.length) {
                while (x1 < nums1.length && x2 < nums2.length && nums1[x1] < nums2[x2]) {
                    num[i++] = nums1[x1++];
                }
                num[i] = nums2[x2++];
            }
            else if (x1 < nums1.length) {
                while (x1 < nums1.length) {
                    num[i++] = nums1[x1++];
                }
            }
            else if (x2 < nums2.length) {
                while (x2 < nums2.length) {
                    num[i++] = nums2[x2++];
                }
            }
        }
        double result;
        if (num.length % 2 == 0) {
            int m = num.length / 2;
            result = (double)(num[m - 1] + num[m]) / 2;
        } else {
            result = (double)num[num.length / 2];
        }
        return result;
    }
}