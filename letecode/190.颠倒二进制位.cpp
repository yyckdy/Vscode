/*
 * @lc app=leetcode.cn id=190 lang=cpp
 *
 * [190] 颠倒二进制位
 *
 * https://leetcode-cn.com/problems/reverse-bits/description/
 *
 * algorithms
 * Easy (70.83%)
 * Likes:    526
 * Dislikes: 0
 * Total Accepted:    166.6K
 * Total Submissions: 234.9K
 * Testcase Example:  '00000010100101000001111010011100'
 *
 * 颠倒给定的 32 位无符号整数的二进制位。
 *
 * 提示：
 *
 *
 * 请注意，在某些语言（如
 * Java）中，没有无符号整数类型。在这种情况下，输入和输出都将被指定为有符号整数类型，并且不应影响您的实现，因为无论整数是有符号的还是无符号的，其内部的二进制表示形式都是相同的。
 * 在 Java 中，编译器使用二进制补码记法来表示有符号整数。因此，在 示例 2 中，输入表示有符号整数 -3，输出表示有符号整数
 * -1073741825。
 *
 *
 *
 *
 * 示例 1：
 *
 *
 * 输入：n = 00000010100101000001111010011100
 * 输出：964176192 (00111001011110000010100101000000)
 * 解释：输入的二进制串 00000010100101000001111010011100 表示无符号整数 43261596，
 * ⁠    因此返回 964176192，其二进制表示形式为 00111001011110000010100101000000。
 *
 * 示例 2：
 *
 *
 * 输入：n = 11111111111111111111111111111101
 * 输出：3221225471 (10111111111111111111111111111111)
 * 解释：输入的二进制串 11111111111111111111111111111101 表示无符号整数 4294967293，
 * ⁠    因此返回 3221225471 其二进制表示形式为 10111111111111111111111111111111 。
 *
 *
 *
 * 提示：
 *
 *
 * 输入是一个长度为 32 的二进制字符串
 *
 *
 *
 *
 * 进阶: 如果多次调用这个函数，你将如何优化你的算法？
 *
 */
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <cmath>
using namespace std;
// @lc code=start
class Solution
{
public:
    uint32_t reverseBits(uint32_t n)
    {
        int a[32];
        for (int i = 0; i <= 31; i++)
        {
            if ((n << 31) != 0)
                a[i] = 1;
            else
                a[i] = 0;
            n >>= 1;
        }
        uint32_t sum = 0;
        for (int i = 31; i >= 0; i--)
        {
            sum += pow(2, i) * a[31-i];
        }
        return sum;
    }
};
// @lc code=end
