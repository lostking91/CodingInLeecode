/*
Given a positive integer, return its corresponding column title as appear in an Excel sheet.
For example:
    1 -> A
    2 -> B
    3 -> C
    ...
    26 -> Z
    27 -> AA
    28 -> AB 
*/
//solution1
class Solution {
public:
    string convertToTitle(int n) {
        string str,out="";
        int temp;
        while(n>0)
        {
            n=n-1;
            temp=n%26+65;
            str=str+(char)temp;
            n=n/26;
        }
        int slen=str.size()-1;
        for(;slen>=0;slen--) out=out+str[slen];
        return out;
    }
};
//solution2
https://leetcode.com/discuss/19024/simple-c-code