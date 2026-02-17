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
void removeDuplicates(ListNode* head)
{
    ListNode* curr = head;
    while (curr && curr->next)
    {
        if (curr->val == curr->next->val)
        {
            ListNode* temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        }
        else
        {
            curr = curr->next;
        }
    }
    traverse(head);
}
void deleteNode1(ListNode*& head,int val)
{
    ListNode* prev = head;
    ListNode* curr = head->next;
    while (curr && curr->next)
    {
        if (curr->val == val)
        {
            prev->next = curr->next;
            delete curr;
            break;
        }
        prev = curr;
        curr = curr->next;
    }
    traverse(head);

}
void deleteNode(ListNode* node)
{

    ListNode* temp = node;
    node = node->next;
    cout<<temp->val;
    //delete temp;
    //break;
}
void printUniques(ListNode*& head)
{
    int last_val = INT_MIN;
    ListNode* curr = head;
    while (curr)
    {
        if (curr->val != last_val)
        {
            cout << curr->val << " ";
            last_val = curr->val;
        }
        curr = curr->next;
    }
}
int main()
{
    vector<int> vals = {4,5,1,9};
    ListNode* head = buildList(vals);
    ListNode* node;
    //deleteNode(node);
    deleteNode1(head,5);
    //traverse(head);


}

