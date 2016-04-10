/*
编写一个程序， 从标准输入读取多个string，将他们连接一起存放在更大的string中。
改写程序，将连接后相邻string对性爱那个以空格隔开
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string result_str,str,space_str;
	cout<<"Enter string(ctrl+z to end):"<<endl;
	while(cin>>str)
	{
		result_str=result_str+str;
		space_str=space_str+' '+str;
	}
}