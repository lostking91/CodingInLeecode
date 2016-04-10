/*
Given a non-negative number represented as an array of digits, plus one to the number.
The digits are stored such that the most significant digit is at the head of the list.
*/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i;
        for(i=digits.size()-1;i>=0&&digits[i]==9;i--)
        {
            digits[i]=0;
        }
        if(i==-1) 
        {
            digits[0]=1;
            digits.push_back(0);
        }
        else digits[i]++;
        return digits;
    }
};