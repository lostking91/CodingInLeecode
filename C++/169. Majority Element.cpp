/*
Given an array of size n, find the majority element. The majority element is the element that 
appears more than ? n/2 ? times.
You may assume that the array is non-empty and the majority element always exist in the array.
*/
//https://leetcode.com/discuss/42929/6-suggested-solutions-in-c-with-explanations
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> counts; 
        int n = nums.size();
        for (int i = 0; i < n; i++)
            if (++counts[nums[i]] > n / 2)
                return nums[i];    
    }
};