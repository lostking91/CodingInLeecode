/*
Related to question Excel Sheet Column Title
Given a column title as appear in an Excel sheet, return its corresponding column number.
For example:
    A -> 1
    B -> 2
    C -> 3
    ...
    Z -> 26
    AA -> 27
    AB -> 28 
*/
class Solution {
public:
    int titleToNumber(string s) {
        int res=0;
        for(int i=0;s[i]!='\0';i++)
            res=res*26+s[i]-'A'+1;
        return res;
    }
};
https://leetcode.com/discuss/74042/my-simple-c-solution
https://leetcode.com/discuss/42674/a-8ms-c-solution