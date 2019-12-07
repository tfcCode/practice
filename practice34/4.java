
//https://leetcode-cn.com/problems/add-two-numbers/
class ListNode {
    int val;
    ListNode next;

    ListNode(int x) {
        val = x;
    }
}

class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode pt = new ListNode(0);
        ListNode temp = pt;
        int m = 0;
        while (true) {
            if (l1 == null && l2 != null) {
                temp.val = (l2.val + m) % 10;
                m = (l2.val + m) / 10;
                l2 = l2.next;
            } else if (l1 != null && l2 == null) {
                temp.val = (l1.val + m) % 10;
                m = (l1.val + m) / 10;
                l1 = l1.next;
            } else if (l1 != null && l2 != null) {
                temp.val = (l1.val + l2.val + m) % 10;
                m = (l1.val + l2.val + m) / 10;
                l1 = l1.next;
                l2 = l2.next;
            } else {
                temp.val = m;
                m = m / 10;
            }
            if (l1 == null && l2 == null && m == 0) {
                break;
            }
            temp.next = new ListNode(0);
            temp = temp.next;
        }
        return pt;
    }
}