/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 多数元素
 *
 * https://leetcode-cn.com/problems/majority-element/description/
 *
 * algorithms
 * Easy (66.64%)
 * Likes:    1420
 * Dislikes: 0
 * Total Accepted:    511.2K
 * Total Submissions: 766.4K
 * Testcase Example:  '[3,2,3]'
 *
 * 给定一个大小为 n 的数组 nums ，返回其中的多数元素。多数元素是指在数组中出现次数 大于 ⌊ n/2 ⌋ 的元素。
 *
 * 你可以假设数组是非空的，并且给定的数组总是存在多数元素。
 *
 *
 *
 * 示例 1：
 *
 *
 * 输入：nums = [3,2,3]
 * 输出：3
 *
 * 示例 2：
 *
 *
 * 输入：nums = [2,2,1,1,1,2,2]
 * 输出：2
 *
 *
 *
 * 提示：
 *
 *
 * n == nums.length
 * 1 <= n <= 5 * 10^4
 * -10^9 <= nums[i] <= 10^9
 *
 *
 *
 *
 * 进阶：尝试设计时间复杂度为 O(n)、空间复杂度为 O(1) 的算法解决此问题。
 *
 */
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <map>
using namespace std;
// @lc code=start
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        // map<int, int> m;
        // for (int i = 0; i < nums.size(); i++)
        // {
        //     pair<map<int, int>::iterator, bool> p = m.insert(make_pair(nums[i], 1));
        //     if (!p.second)
        //     {
        //         (p.first->second)++;
        //     }
        // }
        // map<int, int>::iterator res = m.begin();
        // for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
        // {
        //     if (it->second > res->second)
        //         res = it;
        // }
        // return res->first;


        // int max=0;
        // int res=0;
        // map<int,int>m;
        // for(int num : nums)
        // {
        //      m[num]++;
        //      if(m[num]>max)
        //      {
        //          res=num;
        //          max=m[num];
        //      }
        // }
        // return res;
        

        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
    }
};
// @lc code=end
int main()
{

}
