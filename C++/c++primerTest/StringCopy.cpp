/*
��дһ������ �ӱ�׼�����ȡ���string������������һ�����ڸ����string�С�
��д���򣬽����Ӻ�����string���԰��Ǹ��Կո����
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