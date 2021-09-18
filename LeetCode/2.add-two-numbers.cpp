/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ptr1 = l1;
        ListNode* ptr2;
        int carry = 0 , sum = 0;
        while(l1 || l2 || carry){
            sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
            carry = sum/10;
            if(l1){
                l1->val = sum%10;
            } else if(l2){
                l2->val = sum%10;
                ptr2->next = l2;
            } else if(sum) {
                ListNode* node = new ListNode(1);
                ptr2->next = node;
            }
            ptr2 = l1 ? l1 : l2;
            l1 = l1 ? l1->next : l1;
            l2 = l2 ? l2->next : l2;
        }
        return ptr1;
    }
};
// @lc code=end

