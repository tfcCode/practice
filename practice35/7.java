
//https://leetcode-cn.com/problems/merge-two-sorted-lists/
class ListNode {
    int val;
    ListNode next;

    ListNode(int x) {
        val = x;
    }
}

class Solution {
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        ListNode res;

        if (l1.val < l2.val) {
            res = new ListNode(l1.val);
            l1 = l1.next;
        } else {
            res = new ListNode(l2.val);
            l2 = l2.next;
        }

        ListNode temp = res;

        while (l1 != null || l2 != null) {
            if (l1 == null && l2 != null) {
                while (l2 != null) {
                    temp.next = new ListNode(l2.val);
                    temp = temp.next;
                    l2 = l2.next;
                }
            } else if (l1 != null && l2 == null) {
                while (l1 != null) {
                    temp.next = new ListNode(l1.val);
                    temp = temp.next;
                    l1 = l1.next;
                }
            } else if (l1.val < l2.val) {
                temp.next = new ListNode(l1.val);
                temp = temp.next;
                l1 = l1.next;
            } else {
                temp.next = new ListNode(l2.val);
                temp = temp.next;
                l2 = l2.next;
            }
        }
        return res;
    }
}