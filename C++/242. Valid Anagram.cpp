/*
Given two strings s and t, write a function to determine if t is an anagram of s.
For example,
s = "anagram", t = "nagaram", return true.
s = "rat", t = "car", return false.
Note:You may assume the string contains only lowercase alphabets.
Follow up:What if the inputs contain unicode characters? How would you adapt your solution to such case?
*/
//solution1
class Solution {
public:
    bool isAnagram(string s, string t) {
        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());
        return s==t;
    }
};
//solution2
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
           return false;

        int count[26] = {0};    

        for(int i=0;i<s.length();i++)
        {
            count[(s[i]-'a')%26]++;
            count[(t[i]-'a')%26]--;
        }

        for(int i=0;i<26;i++)
            if(count[i] != 0)
                return false;

        return true;        
    }
};