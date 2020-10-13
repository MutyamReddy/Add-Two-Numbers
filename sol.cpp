class Solution {
public:
    ListNode* addTwoNumbers(ListNode* A, ListNode* B) {
         ListNode* dummy=new ListNode(0);ListNode* curr=dummy;
        int res=0,carry=0;
        while(A||B){
            int a=0;
            if(A!=NULL){
                a=A->val;
                A=A->next;
            }
            int b=0;
            if(B!=NULL){
                b=B->val;
                B=B->next;
            }
            res=(a+b+carry);
            carry=res/10;
            res%=10;
            ListNode* n=new ListNode(res);
            curr->next=n;
            curr=n;
        }
        if(carry){
            curr->next=new ListNode(carry);
        }
        return dummy->next;
    }
};
