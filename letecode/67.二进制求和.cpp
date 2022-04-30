/*
 * @lc app=leetcode.cn id=67 lang=cpp
 *
 * [67] 二进制求和
 *
 * https://leetcode-cn.com/problems/add-binary/description/
 *
 * algorithms
 * Easy (53.91%)
 * Likes:    793
 * Dislikes: 0
 * Total Accepted:    238.5K
 * Total Submissions: 442.3K
 * Testcase Example:  '"11"\n"1"'
 *
 * 给你两个二进制字符串，返回它们的和（用二进制表示）。
 *
 * 输入为 非空 字符串且只包含数字 1 和 0。
 *
 *
 *
 * 示例 1:
 *
 * 输入: a = "11", b = "1"
 * 输出: "100"
 *
 * 示例 2:
 *
 * 输入: a = "1010", b = "1011"
 * 输出: "10101"
 *
 *
 *
 * 提示：
 *
 *
 * 每个字符串仅由字符 '0' 或 '1' 组成。
 * 1 <= a.length, b.length <= 10^4
 * 字符串如果不是 "0" ，就都不含前导零。
 *
 *
 */
#include <iostream>
using namespace std;
#include <string>
// @lc code=start
class Solution
{
public:
    string addBinary(string a, string b)
    {
        int res1 = 0;
        int res2 = 0;
        for (int i = a.size(); i > 0; i--)
        {
            res1 += pow(2, i - 1) * ((int)a[i] - 48);
        }
        for (int i = b.size(); i > 0; i--)
        {
            res2 += pow(2, i - 1) * ((int)b[i] - 48);
        }
        int temp = res1 + res2;
        string s = "";
        while (temp != 0)
        {
            s.append(to_string(temp % 2));
            temp /= 2;
        }
        return s;
    }
};
// @lc code=end
