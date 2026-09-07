/**
 * Definition for singly-linked list.
 * public class ListNode {
 * int val;
 * ListNode next;
 * ListNode() {}
 * ListNode(int val) { this.val = val; }
 * ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        // Create a dummy node to act as the head of the new merged list.
        ListNode dummy = new ListNode(-1);
        // Create a pointer to build the list, starting from the dummy node.
        ListNode current = dummy;
        
        // Loop as long as both lists have nodes.
        while (list1 != null && list2 != null) {
            // Compare the values of the current nodes in both lists.
            if (list1.val <= list2.val) {
                // If list1's value is smaller, append list1's node to the merged list.
                current.next = list1;
                // Move the list1 pointer to its next node.
                list1 = list1.next;
            } else {
                // If list2's value is smaller, append list2's node.
                current.next = list2;
                // Move the list2 pointer to its next node.
                list2 = list2.next;
            }
            // Move the current pointer forward to the newly added node.
            current = current.next;
        }
        
        // After the loop, one of the lists might still have remaining nodes.
        // Append the rest of the non-null list to the end of the merged list.
        if (list1 != null) {
            current.next = list1;
        } else if (list2 != null) {
            current.next = list2;
        }
        
        // The first node of the merged list is the node after the dummy node.
        return dummy.next;
    }
}