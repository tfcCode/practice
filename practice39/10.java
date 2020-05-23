/**
 * @author TFC
 * @date 2020/5/14 22:16
 */

// https://leetcode-cn.com/problems/remove-duplicates-from-sorted-list-ii/

public class Test {

    static class ListNode {
        int val;
        ListNode next;

        ListNode(int x) {
            val = x;
        }
    }

    public static void main(String[] args) {
        ListNode cur = new ListNode(1);
        ListNode temp = cur;

        cur.next = new ListNode(1);
        cur = cur.next;

        cur.next = new ListNode(2);
        cur = cur.next;

        cur.next = new ListNode(3);
        cur = cur.next;

        cur.next = new ListNode(3);
        cur = cur.next;

        cur.next = new ListNode(4);
        cur = cur.next;

        cur.next = null;

        cur = temp;
        while (cur != null) {
            System.out.print(cur.val + " ");
            cur = cur.next;
        }
        System.out.println();
        deleteDuplicates(temp);
    }


    public static ListNode deleteDuplicates(ListNode head) {
        ListNode preHead = new ListNode(0);
        preHead.next = head;

        ListNode cur = preHead;
        while (cur.next != null && cur.next.next != null) {
            int x = cur.next.val;
            if (cur.next.val == cur.next.next.val) {
                ListNode temp = cur.next;
                while (temp != null && temp.next != null && temp.val == temp.next.val) {
                    temp = temp.next;
                }
                cur.next = temp.next;
            } else {
                cur = cur.next;
            }
        }

        cur = preHead.next;
        while (cur != null) {
            System.out.print(cur.val + " ");
            cur = cur.next;
        }
        return preHead.next;
    }
}















