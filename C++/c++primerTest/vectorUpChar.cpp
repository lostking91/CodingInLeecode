/*
读入一个文本到vector对象，每个单词存储为vector中的一个元素，把vector每个单词转换成大写字母，输出vector
转化后的元素，每8个单词为一行输出
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