/*
Given a sorted integer array without duplicates, return the summary of its ranges.
For example, given [0,1,2,4,5,7], return ["0->2","4->5","7"].
*/
//https://leetcode.com/discuss/42229/10-line-c-easy-understand
//https://leetcode.com/discuss/42204/7-9-lines-in-c
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        int i=0;
        string com;
        while(i<nums.size())
        {
            int temp=nums[i];
            while(nums[i]+1==nums[i+1]&&i<nums.size()&&nums[i+1]!='\0')
            {
                i++;
            }
            if(temp!=nums[i])
            {
                com=to_string(temp)+"->"+to_string(nums[i]);
            }
            else
            {
                com=to_string(temp);
            }
            res.push_back(com);
            i++;
        }
        return res;
    }
};