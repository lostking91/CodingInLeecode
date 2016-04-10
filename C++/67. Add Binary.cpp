/*
Given two binary strings, return their sum (also a binary string).
For example,
a = "11"
b = "1"
Return "100".
*/
class Solution {
public:
    string addBinary(string a, string b) {
        string result="";
        int ia=a.size()-1;
        int ib=b.size()-1;
        int sum=0;
        for(;ia>=0||ib>=0;ia--,ib--)
        {
            int va=0,vb=0;
            if(ia>=0) va=a[ia]-'0';
            if(ib>=0) vb=b[ib]-'0';
            sum=va+vb+sum;
            if(sum%2==0) {result="0"+result;}
            else    {result="1"+result;}
            sum=sum/2;
        }
        if(sum>0) result="1"+result;
        return result;
    }
};