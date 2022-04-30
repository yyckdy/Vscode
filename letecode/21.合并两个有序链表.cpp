/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
 *
 * https://leetcode-cn.com/problems/merge-two-sorted-lists/description/
 *
 * algorithms
 * Easy (66.66%)
 * Likes:    2335
 * Dislikes: 0
 * Total Accepted:    955.3K
 * Total Submissions: 1.4M
 * Testcase Example:  '[1,2,4]\n[1,3,4]'
 *
 * 将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 
 *
 *
 *
 * 示例 1：
 *
 *
 * 输入：l1 = [1,2,4], l2 = [1,3,4]
 * 输出：[1,1,2,3,4,4]
 *
 *
 * 示例 2：
 *
 *
 * 输入：l1 = [], l2 = []
 * 输出：[]
 *
 *
 * 示例 3：
 *
 *
 * 输入：l1 = [], l2 = [0]
 * 输出：[0]
 *
 *
 *
 *
 * 提示：
 *
 *
 * 两个链表的节点数目范围是 [0, 50]
 * -100
 * l1 和 l2 均按 非递减顺序 排列
 *
 *
 */
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
// @lc code=start

class Solution
{
public:
    ListNode *insert(int val, ListNode **L)
    {
        if (*L == NULL)
        {
            *L = new ListNode(val);
            return *L;
        }
        ListNode *p = *L;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = new ListNode(val);
        return p->next;
    }

public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *res = NULL;
        ListNode *p = list1;
        ListNode *q = list2;
        // ListNode *index;
        while (p != NULL && q != NULL)
        {
            if (p->val > q->val)
            {
                if (p->val > q->val)
                {
                    insert(q->val, &res);
                    q = q->next;
                }
            }
            else
            {
                insert(p->val, &res);
                p = p->next;
            }
        }
        if (p == NULL)
        {
            while (q != NULL)
            {
                insert(q->val, &res);
                q = q->next;
            }
        }
        else
        {
            while (p != NULL)
            {
                insert(p->val, &res);
                p = p->next;
            }
        }
        return res;
    }
};
// @lc code=end

void myPrint(ListNode *l)
{
    while (l != NULL)
    {
        cout << l->val << endl;
        l = l->next;
    }
}

int main()
{
    Solution s;
    ListNode *list1 = NULL;
    ListNode *list2 = NULL;
    s.insert(1, &list1);
    s.insert(2, &list1);
    s.insert(4, &list1);
    s.insert(1, &list2);
    s.insert(3, &list2);
    s.insert(4, &list2);
    myPrint(list1);
    myPrint(list2);
    ListNode *res = s.mergeTwoLists(list1, list2);
    cout << endl
         << endl;
    myPrint(res);
}
