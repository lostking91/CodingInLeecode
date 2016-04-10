/*
Given an index k, return the kth row of the Pascal's triangle.
For example, given k = 3,
Return [1,3,3,1].
*/
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ret(rowIndex+1,0);
        ret[0]=1;
        for(int i=1;i<=rowIndex;i++)
        {
            for(int j=i;j>=1;j--)
            {
                ret[j]=ret[j]+ret[j-1];
            }
        }
        return ret;
    }
};