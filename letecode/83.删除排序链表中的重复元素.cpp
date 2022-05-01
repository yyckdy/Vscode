/*
 * @lc app=leetcode.cn id=83 lang=cpp
 *
 * [83] 删除排序链表中的重复元素
 *
 * https://leetcode-cn.com/problems/remove-duplicates-from-sorted-list/description/
 *
 * algorithms
 * Easy (53.60%)
 * Likes:    778
 * Dislikes: 0
 * Total Accepted:    420.5K
 * Total Submissions: 785.1K
 * Testcase Example:  '[1,1,2]'
 *
 * 给定一个已排序的链表的头 head ， 删除所有重复的元素，使每个元素只出现一次 。返回 已排序的链表 。
 *
 *
 *
 * 示例 1：
 *
 *
 * 输入：head = [1,1,2]
 * 输出：[1,2]
 *
 *
 * 示例 2：
 *
 *
 * 输入：head = [1,1,2,3,3]
 * 输出：[1,2,3]
 *
 *
 *
 *
 * 提示：
 *
 *
 * 链表中节点数目在范围 [0, 300] 内
 * -100 <= Node.val <= 100
 * 题目数据保证链表已经按升序 排列
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
    ListNode *deleteNode(ListNode *L, ListNode *L1)
    {
        ListNode *p = L;
        while (p->next != L1)
        {
            p = p->next;
        }
        p->next = L1->next;
        return L;
    }

    ListNode *deleteDuplicates(ListNode *head)
    {
        if (!head)
            return NULL;
        ListNode *p = head->next;
        ListNode *q = head;
        while (p != NULL)
        {
            if (p->val == q->val)
            {
                deleteNode(q, p);
                p = p->next;
                continue;
            }
            p = p->next;
            q = q->next;
        }
        return head;
    }
};
// @lc code=end
