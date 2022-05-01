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
#include <string>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
// @lc code=start
class Solution
{
public:
    string addBinary(string a, string b)
    {
        int index1 = a.size() - 1;
        int index2 = b.size() - 1;
        if (index1 > index2)
        {
            b.insert(b.begin(), index1 - index2, '0');
            index2 = b.size()-1;
        }
        if (index1 < index2)
        {
            a.insert(a.begin(), index2 - index1, '0');
            index1 = a.size()-1;
        }
        int carry = 0;
        string res = "";
        while ((index1 + 1) && (index2 + 1))
        {
            int temp = (int)a[index1] - 48 + (int)b[index2] - 48;
            temp += carry;
            if (temp == 2)
            {
                // 0
                res.insert(res.begin(), (char)48);
                carry = 1;
            }
            else if (temp == 3)
            {
                // 1
                res.insert(res.begin(), (char)49);
                carry = 1;
            }
            else
            {
                // temp
                res.insert(res.begin(), (char)(temp + 48));
                carry = 0;
            }
            index1--;
            index2--;
        }
        if (carry)
        {
            // 1

            res.insert(res.begin(), (char)49);
        }

        return res;
    }
};
// @lc code=end
int main()
{
    Solution s;
    string res = s.addBinary("11", "1");
    cout<<res<<endl;
}
