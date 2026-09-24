class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<int> nums;
        ListNode* temp = head;
        while (temp) {
            nums.push_back(temp->val);
            temp = temp->next;
        }
        nums.erase(nums.end() - n);
        if (nums.empty())
            return nullptr;
        temp = head;
        for (int num : nums) {
            temp->val = num;
            temp = temp->next;
        }
        ListNode* prev = nullptr;
        temp = head;
        while (temp->next) {
            prev = temp;
            temp = temp->next;
        }
        prev->next = nullptr;
        delete temp;
        return head;
    }
};