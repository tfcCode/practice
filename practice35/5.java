

//https://leetcode-cn.com/problems/remove-nth-node-from-end-of-list/
class ListNode {
    int val;
    ListNode next;

    ListNode(int x) {
        val = x;
    }
}

class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode temp;
        temp = head;
        int num = 0;
        while (temp != null) {
            num++;
            temp = temp.next;
        }

        if (n == num) {
            return head.next;
        }
        temp = head;
        for (int i = 0; i < num - n - 1; i++) {
            temp = temp.next;
        }
        temp.next = temp.next.next;
        return head;
    }
}