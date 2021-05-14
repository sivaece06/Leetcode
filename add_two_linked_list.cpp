/*
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example 1:
Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.

Example 2:
Input: l1 = [0], l2 = [0]
Output: [0]

Example 3:
Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]

*/


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
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *list1 = l1;
        ListNode *list2 = l2;
        ListNode *DummyHead = new ListNode(0);
        ListNode *curr = DummyHead;
        
        
        int carry = 0, sum = 0, num1 = 0, num2 = 0;
        
        while (list1 != nullptr || list2 != nullptr) {
            
            num1 = (list1 != nullptr)? list1->val:0;
            
            num2 = (list2 != nullptr)? list2->val:0;
            
            sum = carry + num1 + num2;
            
          //  cout << "num1: " <<num1 << " num2: " << num2 << " carry: " << carry << " sum: " <<sum<<endl;
            
            curr->next = new ListNode (sum%10);
            
            if (list1 != nullptr)
                list1 = list1->next;
            
            if (list2 != nullptr)
                list2 = list2->next;
            
            carry = sum/10;
            
            curr = curr->next;
        }
        
      if (carry > 0) {
        curr->next = new ListNode(carry);
        }
    
        return DummyHead->next;
    }
};
