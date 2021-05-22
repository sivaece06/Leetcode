/*

Given the head of a singly linked list, return true if it is a palindrome.

Example 1:

Input: head = [1,2,2,1]
Output: true
Example 2:


Input: head = [1,2]
Output: false


Constraints:

The number of nodes in the list is in the range [1, 105].
0 <= Node.val <= 9
 

Follow up: Could you do it in O(n) time and O(1) space?
*/

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
    
    ListNode *findMiddleNode (ListNode *temp) {
        ListNode *slow = temp, *fast = temp;
        
        while (slow && fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return (slow);   
    }
    
    ListNode *reverseNode (ListNode *headnode) {
        ListNode *curr = headnode, *prev = nullptr, *temp = nullptr;
        
        while (curr != nullptr) {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        
        return (prev);
    }
    
    bool isPalindrome(ListNode* head) {
        ListNode *curr = head;
        
        if (head == nullptr)
            return (true);
        
        ListNode *MidHead = findMiddleNode (head);
        ListNode *revNode = reverseNode (MidHead);
        
        while (curr != MidHead) {
            if (curr->val != revNode->val)
                return (false);
            else {
                curr = curr->next;
                revNode = revNode->next;
            }
        }
        
        return (true);
    }
};
