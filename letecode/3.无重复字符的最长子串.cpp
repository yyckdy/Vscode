/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 *
 * https://leetcode-cn.com/problems/longest-substring-without-repeating-characters/description/
 *
 * algorithms
 * Medium (38.63%)
 * Likes:    7484
 * Dislikes: 0
 * Total Accepted:    1.7M
 * Total Submissions: 4.4M
 * Testcase Example:  '"abcabcbb"'
 *
 * 给定一个字符串 s ，请你找出其中不含有重复字符的 最长子串 的长度。
 *
 *
 *
 * 示例 1:
 *
 *
 * 输入: s = "abcabcbb"
 * 输出: 3
 * 解释: 因为无重复字符的最长子串是 "abc"，所以其长度为 3。
 *
 *
 * 示例 2:
 *
 *
 * 输入: s = "bbbbb"
 * 输出: 1
 * 解释: 因为无重复字符的最长子串是 "b"，所以其长度为 1。
 *
 *
 * 示例 3:
 *
 *
 * 输入: s = "pwwkew"
 * 输出: 3
 * 解释: 因为无重复字符的最长子串是 "wke"，所以其长度为 3。
 * 请注意，你的答案必须是 子串 的长度，"pwke" 是一个子序列，不是子串。
 *
 *
 *
 *
 * 提示：
 *
 *
 * 0 <= s.length <= 5 * 10^4
 * s 由英文字母、数字、符号和空格组成
 *
 *
 */
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <map>
using namespace std;
//滑动窗口+哈希表
// @lc code=start
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        if (s == " ")
            return 1;
        if (s == "")
            return 0;
        int maxLen = 0;
        map<char, int> m;
        int i = 0, j = 0;
        while (i < s.size())
        {
            if (m.find(s[i]) == m.end() || m[s[i]] < j)
            {
                m[s[i]] = i;
                i++;
            }
            else
            {
                maxLen = max(maxLen, i - j);
                j = m[s[i]] + 1;
            }
        }
        maxLen = max(maxLen, i - j);
        return maxLen;
    }
};
// @lc code=end
