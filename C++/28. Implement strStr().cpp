/*
Implement strStr().
Returns the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
*/
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n1=haystack.size()-1;
        int n2=needle.size()-1;
        if(n2<0) return 0;
        for(int i=0;i<=n1-n2;i++)
        {
            int j=0;
            for(;j<=n2;j++)
            {
                if(haystack[i+j]!=needle[j])
                    break;
                if(j==n2) 
                    return i;
            }
            
        }
        return -1;
    }
};