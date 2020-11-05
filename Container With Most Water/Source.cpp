// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// LeetCode - 11 - Container With Most Water
// Problem Statement - https://leetcode.com/problems/container-with-most-water/
// Main.cpp





class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area = 0;
        int a_pointer = 0;
        int b_pointer = height.size() - 1;

        while (a_pointer < b_pointer)
        {
            if (height[a_pointer] < height[b_pointer])
            {
                max_area = max(max_area, height[a_pointer] * (b_pointer - a_pointer));
                a_pointer++;
            }
            else
            {
                max_area = max(max_area, height[b_pointer] * (b_pointer - a_pointer));
                b_pointer--;
            }
        }

        return max_area;
    }
};