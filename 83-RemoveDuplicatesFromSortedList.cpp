#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL){
            return head;
        }
        ListNode* current=head;
        while(current->next!=NULL){
            ListNode* next=current->next;
            if(current->val==next->val){
                current->next=next->next;
            }
            else{
                current=current->next;

            }
        }
        return head;
    }
};
