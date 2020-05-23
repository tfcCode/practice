
/**
 * @author TFC
 * @date 2020/5/14 22:16
 */

// https://leetcode-cn.com/problems/partition-list/

public class Test {

    public static void main(String[] args) {
        ListNode head = new ListNode(1);
        ListNode cur = head;

        cur.next = new ListNode(4);
        cur = cur.next;

        cur.next = new ListNode(3);
        cur = cur.next;

        cur.next = new ListNode(2);
        cur = cur.next;

        cur.next = new ListNode(5);
        cur = cur.next;

        cur.next = new ListNode(2);
        cur = cur.next;

        System.out.println(partition(head, 3));

    }

    static class ListNode {
        int val;
        ListNode next;

        ListNode(int x) {
            val = x;
        }
    }

    public static ListNode partition(ListNode head, int x) {
        ListNode min = new ListNode(0);
        ListNode tempMin = min;
        ListNode max = new ListNode(0);
        ListNode tempMax = max;

        ListNode temp = head;
        while (temp != null) {
            if (temp.val < x) {
                tempMin.next = temp;
                tempMin = tempMin.next;
            } else {
                tempMax.next = temp;
                tempMax = tempMax.next;
            }
            temp = temp.next;
        }
        tempMin.next = max.next;
        tempMax.next=null;

        ListNode pt = min.next;
        while (pt != null) {
            System.out.print(pt.val + " ");
            pt = pt.next;
        }

        return min.next;
    }
}















