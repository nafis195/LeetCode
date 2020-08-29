// Bismillahir Rahmanir Rahim
// Nafis Khan Chowdhury
// LeetCode - 14 - Longest Common Prefix
// Problem Statement - https://leetcode.com/problems/longest-common-prefix/
// Main.cpp



class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        char temp1;
        char temp2;

        if (strs.size() == 0)
            return prefix;

        for (int i = 0; i < strs[0].length(); i++)
        {
            temp1 = strs[0][i];

            for (int j = 1; j < strs.size(); j++)
            {
                temp2 = strs[j][i];

                if (temp1 != temp2)
                    return prefix;
            }

            prefix = prefix + temp1;
        }

        return prefix;
    }
};