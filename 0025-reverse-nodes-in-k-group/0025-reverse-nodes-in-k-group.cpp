class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int> nums;
        ListNode* temp = head;
        while (temp) {
            nums.push_back(temp->val);
            temp = temp->next;
        }
        int n = nums.size();
        for (int i = 0; i + k <= n; i += k) {
            reverse(nums.begin() + i, nums.begin() + i + k);
        }
        temp = head;
        for (int num : nums) {
            temp->val = num;
            temp = temp->next;
        }
        return head;
    }
};