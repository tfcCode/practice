
//https://leetcode-cn.com/problems/reverse-nodes-in-k-group/
class ListNode {
    int val;
    ListNode next;

    ListNode(int x) {
        val = x;
    }
}

class Solution {
    public static void main(String[] args) {
        ListNode head = new ListNode(1);
        ListNode temp = head;

        temp.next = new ListNode(2);
        temp = temp.next;
        temp.next = new ListNode(3);
        temp = temp.next;
        temp.next = new ListNode(4);
        temp = temp.next;
        temp.next = new ListNode(5);
        temp = temp.next;
        temp.next = new ListNode(6);
        temp = temp.next;
        temp.next = new ListNode(7);
        temp = temp.next;
        temp.next = new ListNode(8);
        ListNode res = reverseKGroup(head, 3);
        while (res != null) {
            System.out.print(res.val + " ");
            res = res.next;
        }
        System.out.println();
    }

    public static ListNode reverseKGroup(ListNode head, int k) {
        ListNode res = new ListNode(0);
        res.next = head;

        ListNode pre = res;
        ListNode end = res;

        while (end.next != null) {
            for (int i = 0; i < k && end != null; i++) {
                end = end.next;
            }

            if (end == null) {
                break;
            }

            ListNode start = pre.next;
            ListNode Next = end.next;
            end.next = null;
            pre.next = reverse(start);
            start.next = Next;
            pre = start;
            end = pre;
        }
        return res.next;
    }

    static ListNode reverse(ListNode head) {
        ListNode pre = null;
        ListNode curr = head;
        while (curr != null) {
            ListNode next = curr.next;
            curr.next = pre;
            pre = curr;
            curr = next;
        }
        return pre;
    }
}
