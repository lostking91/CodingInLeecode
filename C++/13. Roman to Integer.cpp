/*
Given a roman numeral, convert it to an integer.
Input is guaranteed to be within the range from 1 to 3999.
*/
class Solution {
public:
    int romanToInt(string s) {
        unordered_map <char,int> mp={ { 'I', 1 }, { 'V', 5 }, { 'X', 10 }, { 'L', 50 }, { 'C', 100 }, { 'D', 500 }, { 'M', 1000 } };
        int res=0;
        int i;
        for(i=0;i<s[i+1];i++){
            if(mp[s[i]]>=mp[s[i+1]]) res+=mp[s[i]];
            else res-=mp[s[i]];
        }
        res+=mp[s[i]];
        return res;

    }
};
