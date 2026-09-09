class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int> nums;
        ListNode* temp = head;
        while (temp) {
            nums.push_back(temp->val);
            temp = temp->next;
        }
        sort(nums.begin(), nums.end());
        temp = head;
        for (int num : nums) {
            temp->val = num;
            temp = temp->next;
        }
        return head;
    }
};