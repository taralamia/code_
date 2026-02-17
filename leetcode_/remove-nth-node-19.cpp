#include<bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};
void traverse(ListNode* head)
{
    ListNode* curr = head;
    while (curr != nullptr)
    {
        cout << curr->val << " ";
        curr = curr->next;
    }
}
ListNode* buildList(const vector<int>& vals)
{
    if (vals.empty()) return nullptr;

    ListNode* head = new ListNode(vals[0]);
    ListNode* tail = head;

    for (size_t i = 1; i < vals.size(); ++i)
    {
        tail->next = new ListNode(vals[i]);
        tail = tail->next;
    }

    return head;
}
void removeNthFromEnd(ListNode* head, int n)
{
    ListNode* curr = head;
    ListNode* curr1 = head->next;
    ListNode* toDelete;
    int n1 =0, temp;
    while(curr!=nullptr)
    {
        curr = curr->next;
        n1++;
    }
    int j = n1-n+1;
    if(j == 1)
    {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
    for(int i=1; i<=j; i++)
    {
        curr1=curr1->next;
    }
    toDelete = curr1;
    curr1 = curr1->next;
    delete toDelete;
    traverse(head);
}
int main()
{
    vector<int> vals = {1,2};
    ListNode* head = buildList(vals);
    ListNode* node;
    removeNthFromEnd(head,1);


}
