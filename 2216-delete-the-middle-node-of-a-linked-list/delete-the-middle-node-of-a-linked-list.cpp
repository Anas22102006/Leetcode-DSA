class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
    ListNode* dummy=head;
    int len=0;
    while(dummy!=nullptr){
        dummy=dummy->next;
        len++;
    }
    if(len==1){
        return nullptr;
    }
    int l=len/2;
    int temp=1;
    ListNode* curr=head;
    while(curr!=nullptr){
        if(l==temp){
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