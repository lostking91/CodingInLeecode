/*
Given an integer n, return the number of trailing zeroes in n!.
*/
class Solution {
public:
    int trailingZeroes(int n) {
        int nums=0;
        while(n>4) 
        {
            n/=5;
            nums=nums+n;
        }
        return nums;
    }
};