/*
����һ���ı���vector����ÿ�����ʴ洢Ϊvector�е�һ��Ԫ�أ���vectorÿ������ת���ɴ�д��ĸ�����vector
ת�����Ԫ�أ�ÿ8������Ϊһ�����
*/
#include<iostream>
#include<string>
#include<vector>
#inlcude<cctype>
using namespace std;
int main()
{
	vector <string> svec;
	string str;
	cout<<"end with ctrl+Z"<<endl;
	while(cin>>str)
		svec.push_back(str);
	if svec.size()==0
		return 0;
	vector<string>::size_type ix,index;
	for(ix=0;ix< svec.size();ix++)
	{
		for(index;index<svec[ix].size;index++)
			if(islower(svec[ix][index]))
				svec[ix][index]=toupper(svec[ix][index]);
	}
	getchar();
}