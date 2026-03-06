class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* dummy=head;
    int len=0;
    while(dummy!=nullptr){
        len++;
        dummy=dummy->next;
    }
    if(n==len){
        head=head->next;
        return head;
    }
    int l=len-n;
    int temp=1;
    ListNode* curr=head;
    while(curr!=nullptr && curr->next!=nullptr){
        if(temp==l){
            curr->next=curr->next->next;
        }
        else{
            curr=curr->next;
        }
        temp++;
    }
    return head;    
    }
};