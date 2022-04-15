/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */
#include <iostream>
#include <unordered_map>
#include <string>
#include <stack>
using namespace std;
// @lc code=start
class Solution
{
public:
    bool isValid(string s)
    {
        unordered_map<char, char> m;
        m.insert(make_pair(')', '('));
        m.insert(make_pair(']', '['));
        m.insert(make_pair('}', '{'));

        stack<char> s1;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
                s1.push(s[i]);
            else
            {
                if (s1.empty())
                    return false;
                if (m.find(s[i])->second != s1.top())
                    return false;
                else
                    s1.pop();
            }
        }
        if (s1.empty())
            return true;
        else
            return false;
    }
};
// @lc code=end

int main()
{
    Solution s;
    string str = "()";
    cout << s.isValid(str) << endl;
}
