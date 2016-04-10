/*
Write an algorithm to determine if a number is "happy".
A happy number is a number defined by the following process: Starting with any positive integer, 
replace the number by the sum of the squares of its digits, and repeat the process until the number 
equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those 
numbers for which this process ends in 1 are happy numbers.
Example: 19 is a happy number
*/
class Solution {
public:
    bool isHappy(int n) {
        while(n>6){
            int next = 0;
            while(n){next+=(n%10)*(n%10); n/=10;}
            n = next;
        }
        return n==1;
    }
};

//solution2
class Solution {
public:
	int next(int n)
    {
        int res=0;
        while (n)
        {
            int t = n % 10;
            res += t*t;
            n/=10;
        }
        return res;
    }
    bool isHappy(int n)
    {
        int i1=n, i2=next(n);
        while ( i2 != i1)
        {
            i1 = next(i1);
            i2 = next(next(i2));
        }
        return i1==1;
    }
};