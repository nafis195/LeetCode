// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Leetcode - 167 - Two Sum II
// Problem Statement - https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
// Main.cpp


class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector <int> answer;

        int startIdx, endIdx, sum = 0;

        startIdx = 0;
        endIdx = numbers.size() - 1;

        while (startIdx < endIdx)
        {
            if (numbers[startIdx] + numbers[endIdx] == target)
            {
                answer.push_back(startIdx + 1);
                answer.push_back(endIdx + 1);
                break;
            }
            else if (numbers[startIdx] + numbers[endIdx] < target)
            {
                startIdx++;
            }
            else
                endIdx--;
        }
        return answer;
    }
};