#include<iostream>
#include<vector>
#include<string>

using namespace std;

struct ListNode
{
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head == nullptr|| head->next == nullptr)
        {
            return true;
        }
        ListNode* pre = head;
        ListNode* cur = head;
        vector<int> arr;
        arr.push_back(pre->val);
        int len = 0;
        while (cur != nullptr)
        {
            len ++;
            arr.push_back(pre->val);
            cur = cur->next;
            pre = pre->next;
            if (cur == nullptr)
            {
                break;
            }
            len ++;
            cur = cur->next;
        }
        int i = arr.size() - 1;
        if (len % 2 != 0)
        {
            i--;
        }
        while (i >= 0 && pre != nullptr)
        {
            if (arr[i--] != pre->val)
            {
                return false;
            }
            pre = pre->next;
        }
        return true;
    }
};

