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
#include <unordered_map>
#include <string>
#include <stack>
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

//  * Definition for singly-linked list.

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        if(list1==NULL)return list2;
        if(list2==NULL)return list1;
        ListNode *res = new ListNode();
        if (list1->val > list2->val)
        {
            res->val = list2->val;
            list2 = list2->next;
        }
        else
        {
            res->val = list1->val;
            list1 = list1->next;
        }
        while (list1 != NULL && list2 != NULL)
        {
            if (list1->val > list2->val)
            {
                insert(res, list2->val);
                list2 = list2->next;
            }
            else
            {
                insert(res, list1->val);
                list1 = list1->next;
            }
        }
        if (list1 == NULL)
        {
            while (list2 != NULL)
            {
                insert(res, list2->val);
                list2 = list2->next;
            }
        }
        else if (list2 == NULL)
        {
            while (list1 != NULL)
            {
                insert(res, list1->val);
                list1 = list1->next;
            }
        }
        return res;
    }

    void insert(ListNode *L, int val)
    {
        ListNode *p = new ListNode(val);
        ListNode *q = L;
        while (q->next != NULL)
        {
            q = q->next;
        }
        q->next = p;
    }
};
// @lc code=end

int main()
{
}
