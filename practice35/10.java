
//https://leetcode-cn.com/problems/swap-nodes-in-pairs/
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

        ListNode res = swapPairs(head);
        while (res != null) {
            System.out.print(res.val + " ");
            res = res.next;
        }
        System.out.println();
    }

    public static ListNode swapPairs(ListNode head) {
        if (head == null || head.next == null) {
            return head;
        }
        ListNode temp, Last, Mid, Next, res;
        temp = head;

        Last = temp;
        Next = Last.next;
        Last.next = Next.next;
        Next.next = Last;
        res = Next;
        temp = Next.next;

        while (temp != null) {
            Last = temp;
            temp = temp.next;
            if (temp != null && temp.next != null) {
                Mid = temp;
                Next = Mid.next;
                Mid.next = Next.next;
                Next.next = Mid;
                Last.next = Next;
                temp = Next.next;
                int a1 = Next.val;
                int a2 = Mid.val;
            }
        }
        return res;
    }
}