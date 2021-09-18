/*
 * @lc app=leetcode id=160 lang=cpp
 *
 * [160] Intersection of Two Linked Lists
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB){
            return NULL;
        }
        unordered_set<ListNode*> unique_nodes;
        ListNode* ptr_A = headA;
        while(ptr_A != NULL){
            unique_nodes.insert(ptr_A);
            ptr_A = ptr_A->next;
        }
        ListNode* ptr_B = headB;
        while(ptr_B != NULL){
            if(unique_nodes.count(ptr_B) > 0){
                return ptr_B;
            }
            ptr_B = ptr_B->next;
        }
        return NULL;
    }
};
// @lc code=end

