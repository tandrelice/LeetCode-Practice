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
        ListNode *result = new ListNode(0);
        ListNode *temp = result;
        bool flag = false;
        for(;;){
            if( (l1 == NULL) && (l2 == NULL) ){
                if(flag){
                    temp->val = 1;
                }
                return result;
            }
            else if (l1 == NULL){
                if(flag){
                    if(l2->val == 9){
                        temp->val = 0;
                        flag = true;
                        l2 = l2->next;
                        temp->next = new ListNode(0);
                        temp = temp->next;
                    }
                    else{
                        temp->val = l2->val + 1;
                        temp->next = l2->next;
                        return result;
                    }
                }
                else{
                    temp->val = l2->val;
                    temp->next = l2->next;
                    return result;
                }
            }
            else if (l2 == NULL){
                if(flag){
                    if(l1->val == 9){
                        temp->val = 0;
                        flag = true;
                        l1 = l1->next;
                        temp->next = new ListNode(0);
                        temp = temp->next;
                    }
                    else{
                        temp->val = l1->val + 1;
                        temp->next = l1->next;
                        return result;
                    }
                }
                else{
                    temp->val = l1->val;
                    temp->next = l1->next;
                    return result;
                }
            }
            else{
                if(flag){
                    if(l1->val + l2->val + 1 >= 10){
                        temp->val = l1->val + l2->val - 9;
                        flag = true;
                        l1 = l1->next;
                        l2 = l2->next;
                        temp->next = new ListNode(0);
                        temp = temp->next;
                    }
                    else{
                        temp->val = l1->val + l2->val + 1;
                        flag = false;
                        l1 = l1->next;
                        l2 = l2->next;
                        if( (l1 == NULL) && (l2 == NULL)) return result;
                        temp->next = new ListNode(0);
                        temp = temp->next;
                    }
                }
                else{
                    if(l1->val + l2->val >= 10){
                        temp->val = l1->val + l2->val - 10;
                        flag = true;
                        l1 = l1->next;
                        l2 = l2->next;
                        temp->next = new ListNode(0);
                        temp = temp->next;
                    }
                    else{
                        temp->val = l1->val + l2->val;
                        flag = false;
                        l1 = l1->next;
                        l2 = l2->next;
                        if( (l1 == NULL) && (l2 == NULL)) return result;
                        temp->next = new ListNode(0);
                        temp = temp->next;
                    }
                }
            }
        }
    }
};