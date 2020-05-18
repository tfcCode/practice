//https://leetcode-cn.com/problems/rotate-list/
class ListNode {
    int val;
    ListNode next;

    ListNode(int x) {
        val = x;
    }
}

class Solution {
    public static void main(String[] args) {
        Solution x = new Solution();

        ListNode temp = new ListNode(0);

        ListNode p = temp;

        p.next = new ListNode(1);
        p = p.next;

        p.next = new ListNode(2);
        p = p.next;

        ListNode res = x.rotateRight(temp, 4);

        while (res != null) {
            System.out.print(res.val + " ");
            res = res.next;
        }
    }

    public ListNode rotateRight(ListNode head, int k) {
        if (head == null || k == 0) {
            return head;
        }
        int len = 0;
        ListNode p = head;
        while (p.next != null) {
            len++;
            p = p.next;
        }
        p.next = head;
        len++;

        int num = len - (len + k) % len;
        ListNode res;
        p = head;
        for (int i = 0; i < num - 1; i++) {
            System.out.println(p.val);
            p = p.next;
        }
        res = p.next;
        p.next = null;
        return res;
    }
}