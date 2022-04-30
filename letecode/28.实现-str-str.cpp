/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 实现 strStr()
 *
 * https://leetcode-cn.com/problems/implement-strstr/description/
 *
 * algorithms
 * Easy (40.23%)
 * Likes:    1371
 * Dislikes: 0
 * Total Accepted:    613.8K
 * Total Submissions: 1.5M
 * Testcase Example:  '"hello"\n"ll"'
 *
 * 实现 strStr() 函数。
 *
 * 给你两个字符串 haystack 和 needle ，请你在 haystack 字符串中找出 needle 字符串出现的第一个位置（下标从 0
 * 开始）。如果不存在，则返回  -1 。
 *
 *
 *
 * 说明：
 *
 * 当 needle 是空字符串时，我们应当返回什么值呢？这是一个在面试中很好的问题。
 *
 * 对于本题而言，当 needle 是空字符串时我们应当返回 0 。这与 C 语言的 strstr() 以及 Java 的 indexOf()
 * 定义相符。
 *
 *
 *
 * 示例 1：
 *
 *
 * 输入：haystack = "hello", needle = "ll"
 * 输出：2
 *
 *
 * 示例 2：
 *
 *
 * 输入：haystack = "aaaaa", needle = "bba"
 * 输出：-1
 *
 *
 * 示例 3：
 *
 *
 * 输入：haystack = "", needle = ""
 * 输出：0
 *
 *
 *
 *
 * 提示：
 *
 *
 * 1 <= haystack.length, needle.length <= 10^4
 * haystack 和 needle 仅由小写英文字符组成
 *
 *
 */
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
// @lc code=start
class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int res = -1;
        if (haystack.empty())
            return 0;
        if (needle.size() > haystack.size())
            return res;
        for (int i = 0; i < haystack.size() - needle.size() + 1; i++)
        {
            bool flag = true;
            if (haystack[i] == needle[0])
            {
                for (int j = 0; j < needle.size(); j++)
                {
                    if (needle[j] != haystack[j + i])
                    {
                        flag = false;
                        break;
                    }
                    if (j + i >= haystack.size())
                    {
                        return -1;
                    }
                }
                if (flag)
                {
                    return i;
                }
            }
        }
        return res;
    }
};
// @lc code=end
