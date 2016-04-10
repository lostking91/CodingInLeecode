/*
Determine whether an integer is a palindrome. Do this without extra space.
*/
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return 0;
        int pan=0;int ori=x;
        while(x>0)
        {
            pan=pan*10+x%10;
            x=x/10;
        }
        return pan==ori;
    }
};