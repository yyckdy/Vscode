/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根
 *
 * https://leetcode-cn.com/problems/sqrtx/description/
 *
 * algorithms
 * Easy (38.86%)
 * Likes:    968
 * Dislikes: 0
 * Total Accepted:    507.4K
 * Total Submissions: 1.3M
 * Testcase Example:  '4'
 *
 * 给你一个非负整数 x ，计算并返回 x 的 算术平方根 。
 *
 * 由于返回类型是整数，结果只保留 整数部分 ，小数部分将被 舍去 。
 *
 * 注意：不允许使用任何内置指数函数和算符，例如 pow(x, 0.5) 或者 x ** 0.5 。
 *
 *
 *
 * 示例 1：
 *
 *
 * 输入：x = 4
 * 输出：2
 *
 *
 * 示例 2：
 *
 *
 * 输入：x = 8
 * 输出：2
 * 解释：8 的算术平方根是 2.82842..., 由于返回类型是整数，小数部分将被舍去。
 *
 *
 *
 *
 * 提示：
 *
 *
 * 0 <= x <= 2^31 - 1
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
    long res(long begin, long end, long x)
    {
        long mid = (begin + end) / 2;
        long temp = mid * mid;
        if (temp == x || (temp > x && (mid - 1) * (mid - 1) < x))
            return mid - !!(temp ^ x);
        if (temp < x)
            return res(mid, end, x);
        if (temp > x)
            return res(begin, mid, x);
        return 0;
    }

public:
    long mySqrt(long x)
    {
        long len = to_string(x).size();
        len += len % 2;
        len /= 2;
        long begin = 10;
        if (len == 1 || len == 0)
        {
            begin = 0;
        }
        for (long i = 0; i < len - 2; i++)
        {
            begin *= 10;
        }
        long end = begin * 10 + !(begin ^ 0) * 10;
        return res(begin, end, x);
    }
};
// @lc code=end
long main()
{
    long res = mySqrt(5);
    cout << res << endl;
}