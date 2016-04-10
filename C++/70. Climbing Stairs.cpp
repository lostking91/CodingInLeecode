/*
You are climbing a stair case. It takes n steps to reach to the top.
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
Subscribe to see which companies asked this question
*/
class Solution {
public:
    int climbStairs(int n) {
        if(n<=2)    return n;
        int a=1,b=2,ans=0;
        for(int i=2;i<n;i++)
        {
            ans=a+b;
            a=b;
            b=ans;
        }
        return ans;
    }
};