/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 *
 * https://leetcode-cn.com/problems/longest-palindromic-substring/description/
 *
 * algorithms
 * Medium (36.45%)
 * Likes:    5153
 * Dislikes: 0
 * Total Accepted:    1M
 * Total Submissions: 2.8M
 * Testcase Example:  '"babad"'
 *
 * 给你一个字符串 s，找到 s 中最长的回文子串。
 *
 *
 *
 * 示例 1：
 *
 *
 * 输入：s = "babad"
 * 输出："bab"
 * 解释："aba" 同样是符合题意的答案。
 *
 *
 * 示例 2：
 *
 *
 * 输入：s = "cbbd"
 * 输出："bb"
 *
 *
 *
 *
 * 提示：
 *
 *
 * 1 <= s.length <= 1000
 * s 仅由数字和英文字母组成
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
    pair<int, int> length(int i, string s, int j)
    {
        pair<int, int> p = make_pair(i, j);
        if (s[i + 1] == s[i] && !(i > 0 && s[i - 1] == s[i + 1]))
        {
            p.second++;
            int j = i + 1;
            for (i--, j++; i >= 0 && j < s.size(); i--, j++)
            {
                if (s[i] == s[j])
                {
                    p.first--;
                    p.second++;
                }
                else
                    return p;
            }
        }
        j = i;
        for (i--, j++; i >= 0 && j < s.size(); i--, j++)
        {
            if (s[i] == s[j])
            {
                p.first--;
                p.second++;
            }
            else
                return p;
        }
        return p;
    }
    string longestPalindrome(string s)
    {
        pair<int, int> res = make_pair(0, 0);
        int end = 0;
        for (int i = 0; i < s.size(); i++)
        {
            pair<int, int> p = length(i, s, i);
            if (p.second - p.first > res.second - res.first)
            {
                res.first = p.first;
                res.second = p.second;
            }
        }
        return s.substr(res.first, res.second - res.first + 1);
    }
};
// @lc code=end
int main()
{
    Solution s;
    string S = "babad";
    cout << s.longestPalindrome(S) << endl;
}
