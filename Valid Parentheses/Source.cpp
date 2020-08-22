// Bismillahir Rahmanir Rahim
// Nafis Khan Chowdhury
// LeetCode - 20 - Valid Parentheses
// Problem Statement - https://leetcode.com/problems/valid-parentheses/
// Main.cpp



class Solution {
public:
    bool isValid(string s) {
        stack <char> bracket;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[0] == ')' || s[0] == '}' || s[0] == ']')
                return false;
            else if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                bracket.push(s[i]);
            else if (bracket.empty() && (s[i] == ')' || s[i] == '}' || s[i] == ']'))
                return false;
            else if (!bracket.empty() && (s[i] == ')' || s[i] == '}' || s[i] == ']'))
            {
                if (s[i] == ')' && bracket.top() == '(')
                    bracket.pop();
                else if (s[i] == ')' && bracket.top() != '(')
                    return false;
                else if (s[i] == '}' && bracket.top() == '{')
                    bracket.pop();
                else if (s[i] == '}' && bracket.top() != '{')
                    return false;
                else if (s[i] == ']' && bracket.top() == '[')
                    bracket.pop();
                else if (s[i] == ']' && bracket.top() != '[')
                    return false;
            }
        }

        if (!bracket.empty())
            return false;
        else
            return true;
    }
};