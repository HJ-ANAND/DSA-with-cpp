#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode(int d)
    {
        val = d;
        next = NULL;
    }
};

ListNode *modifiedList(vector<int> &nums, ListNode *head)
{
    if (head == NULL)
        return head;
    unordered_set<int> todelete(nums.begin(), nums.end());

    while (head && todelete.count(head->val))
    {
        ListNode *delnode = head;
        head = head->next;
        delete delnode;
    }
    if (head == NULL)
        return head;
    ListNode *temp = head;
    while (temp->next)
    {
        if (todelete.count(temp->next->val))
        {
            ListNode *delnode = temp->next;
            temp->next = temp->next->next;
            delete delnode;
        }
        else
            temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> arr = {1, 2, 1, 2, 1, 2};
    int n = arr.size();
    ListNode *head = NULL;
    for (int i = 0; i < n; i++)
    {
        ListNode *temp = new ListNode(arr[i]);
        if (head == NULL)
            head = temp;
        else
        {
            ListNode *last = head;
            while (last->next != NULL)
            {
                last = last->next;
            }
            last->next = temp;
        }
    }

    ListNode *temp = head;
    while (temp)
    {
        cout << temp->val << "-->";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    vector<int> nums = {1};

    ListNode *root = modifiedList(nums, head);

    temp = root;
    while (temp)
    {
        cout << temp->val << "-->";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    return 0;
}