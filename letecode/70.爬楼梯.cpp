/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 *
 * https://leetcode-cn.com/problems/climbing-stairs/description/
 *
 * algorithms
 * Easy (53.59%)
 * Likes:    2396
 * Dislikes: 0
 * Total Accepted:    809.8K
 * Total Submissions: 1.5M
 * Testcase Example:  '2'
 *
 * 假设你正在爬楼梯。需要 n 阶你才能到达楼顶。
 *
 * 每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？
 *
 *
 *
 * 示例 1：
 *
 *
 * 输入：n = 2
 * 输出：2
 * 解释：有两种方法可以爬到楼顶。
 * 1. 1 阶 + 1 阶
 * 2. 2 阶
 *
 * 示例 2：
 *
 *
 * 输入：n = 3
 * 输出：3
 * 解释：有三种方法可以爬到楼顶。
 * 1. 1 阶 + 1 阶 + 1 阶
 * 2. 1 阶 + 2 阶
 * 3. 2 阶 + 1 阶
 *
 *
 *
 *
 * 提示：
 *
 *
 * 1 <= n <= 45
 *
 *
 */

// @lc code=start
class Solution
{
public:
    long double C(long double sub, long double top)
    {
        long double res = 1;
        if (sub == top)
            return 1;
        else
        {
            long double i = 0;
            while (i < top)
            {
                res *= (sub--);
                i++;
            }
            i = 1;
            while (i <= top)
            {
                res /= i;
                i++;
            }
            return res;
        }
    }

public:
    long double climbStairs(long double n)
    {
        long double sum = 0;
        for (long double i = 0; i <= n / 2; i++)
        {
            sum += C(n - i, i);
        }
        return sum;
    }
};
// @lc code=end
