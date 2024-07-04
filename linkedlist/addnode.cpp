#include<iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
    ListNode(int val=0){
        this->val = val;
        this->next = nullptr;
    }
};
void display(ListNode* head){
    while(head->next!=NULL){
        cout<<head->val<<" ";
    }
}
int main(){
    ListNode* l = new ListNode(1);
    ListNode* temp = new ListNode(2);
    l->next = temp;
    cout<<l->val<<" "<<l->next;
    display(l);
    return 0;
}