/*
Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last 
word in the string.
If the last word does not exist, return 0.
Note: A word is defined as a character sequence consists of non-space characters only.
For example, 
Given s = "Hello World",
return 5.
*/
class Solution {
public:
    int lengthOfLastWord(string s) {
        int len;int i=0;int temp=0;
        if(s[0]=='\0') return 0;
        while(s[i]!='\0')
        {
            while(s[i]==' ') i++;
            len=temp;
            temp=0;
            while(s[i]!=' '&& s[i]!='\0' )
            {
                temp++;
                i++;
            }
        }
        return (temp==0?len:temp);


/*      int i=s.size()-1;
        int j=0;
        if(!s.size()) return 0;
        while(s[i]==' ') i--;
        for(;s[i]!=' '&&i>=0;i--)
        {
            j++;
        }
        return j;
*/
    }
};