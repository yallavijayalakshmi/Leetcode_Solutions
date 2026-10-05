class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* curr = head;
        ListNode* prev = NULL;

        while (curr != NULL) {

            if (curr->val == val) {
                
                if (prev == NULL) {
                    head = curr->next;
                    curr = head;
                }
                else {
                    prev->next = curr->next;
                    curr = curr->next;
                }

            }
            else {
                prev = curr;
                curr = curr->next;
            }
        }

        return head;
    }
};