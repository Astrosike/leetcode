
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
        int carry = 0;
        ListNode* list1 = l1;
        ListNode* list2 = l2;
        ListNode* result = new ListNode(0);
        ListNode* return_res = result;
        
        while ((list1 != NULL) && (list2 != NULL)){
            int sum = list1->val + list2->val + carry;
            result->next = new ListNode(sum%10);
            if(sum >= 10)
                carry = 1;
            else
                carry = 0;
            result = result->next;
            list1 = list1->next;
            list2 = list2->next;            
        }
        
        while(list2 != NULL){
            int sum = list2->val + carry;
            result->next = new ListNode(sum%10);
            if(sum >= 10)
                carry = 1;
            else
                carry = 0;  
            result = result->next;
            list2 = list2->next;   
        }

        while(list1 != NULL){
            int sum = list1->val + carry;
            result->next = new ListNode(sum%10);
            if(sum >= 10)
                carry = 1;
            else
                carry = 0;  
            result = result->next;
            list1 = list1->next;   
        }
        
        if(carry == 1){
            result->next = new ListNode(carry);
            result = result->next;
        }
        
        return return_res->next;
    }
};
