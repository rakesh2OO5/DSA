class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (!head || !head->next)
            return head;
        ListNode* curr = head;
        while (curr && curr->next) {
            ListNode* next = curr->next;
            ListNode* newNode = new ListNode(gcd(curr->val, next->val));
            curr->next = newNode;
            newNode->next = next;
            curr = next;
        }
        return head;
    }
};