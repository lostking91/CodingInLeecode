//Write a function to find the longest common prefix string amongst an array of strings.
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0) return "";
        string temp=strs[0];
        for(int i=0;i<strs.size();i++)
        {
            if(temp.size()==0 || strs[i].size() == 0)
                return "";
            int minL=0;int j;
            if(temp.size()<=strs[i].size()) minL=temp.size();
            else minL=strs[i].size();
            for(j=0;j<minL;j++)
            {
                if(temp[j]!=strs[i][j])
                    break;
            }
            temp=temp.substr(0,j);
        }
        return temp;
    }
};