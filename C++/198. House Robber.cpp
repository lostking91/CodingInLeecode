/*
You are a professional robber planning to rob houses along a street. Each house has a certain amount 
of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses 
have security system connected and it will automatically contact the police if two adjacent houses 
were broken into on the same night.
Given a list of non-negative integers representing the amount of money of each house, determine the 
maximum amount of money you can rob tonight without alerting the police.
*/
class Solution {
public:
    int rob(vector<int>& nums) {
        int cur=0;
        int per=0;
        int temp;
        for(int i=0;i<nums.size();i++)
        {
            temp=max(per+nums[i],cur);
            per=cur;
            cur=temp;
        }
        return cur;
    }
};
//solution2
#define max(a, b) ((a)>(b)?(a):(b))
int rob(int num[], int n) {
    int a = 0;
    int b = 0;

    for (int i=0; i<n; i++)
    {
        if (i%2==0)
        {
            a = max(a+num[i], b);
        }
        else
        {
            b = max(a, b+num[i]);
        }
    }

    return max(a, b);
}