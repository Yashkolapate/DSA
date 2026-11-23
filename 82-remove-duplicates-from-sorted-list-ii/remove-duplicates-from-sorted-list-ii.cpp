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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp= head;
        ListNode* newNode=new ListNode(0);
        newNode->next=head;
        ListNode* dummy= newNode;
        while(temp!=nullptr){
            if(temp->next!=nullptr && temp->val==temp->next->val ){
                while( temp->next!=nullptr && temp->val==temp->next->val ){
                    temp=temp->next;
                }
                temp=temp->next;
            }
            else{
                newNode->next=temp;
                newNode=temp;
                temp=temp->next;
            }
        }
        newNode->next=nullptr;
        return dummy->next ;
    }
};