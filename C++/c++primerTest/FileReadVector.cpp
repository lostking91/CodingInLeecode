/*
��д�������ļ������ļ����ݶ���string���͵�vector������ÿһ�д洢Ϊ�����������һ��Ԫ��
����fileToVector���ļ���������
*/
#include<iostream>
#include<string>
#include<vector>
#inlcude<fstream>
using namespace std;
int fileToVector(string fileName,vector<string>& svec)
{
	//����ifstream����inFile���󶨵����β�fileNameָ�����ļ�
	ifstream inFile(fileName.c_str());
	if(!inFile)
		return 1;
	//���ļ����ݶ���string���͵�vector������ÿһ�д洢Ϊ�����������һ��Ԫ��
	string s;
	while(getline(inFile, s))
		svec.push_back(s);
	if (inFile.eof())
		return 4;
	if (inFile.bad())
		return 2;
	if (inFile.fail())
		return 3;
}
int main()
{
	vector <string> svec;
	string fileName,s;
	cout<<"Enter fileName:" <<endl;
	cin>>fileName;
	out=fileToVector(fileName, svec);
	for(vectr<string>::iterator iter=svec.begin();iter!=svec.end();iter++)
		cout<<*iter;
	return 0;
}
/*
���ļ��е�ÿ�����ʴ洢Ϊ������һ��Ԫ��
*/
#include<iostream>
#include<string>
#include<vector>
#inlcude<fstream>
using namespace std;
int fileToVector(string fileName,vector<string>& svec)
{
	//����ifstream����inFile���󶨵����β�fileNameָ�����ļ�
	ifstream inFile(fileName.c_str());
	if(!inFile)
		return 1;
	//���ļ����ݶ���string���͵�vector������ÿһ�д洢Ϊ�����������һ��Ԫ��
	string s;
	while(inFile>>s)
		svec.push_back(s);
	if (inFile.eof())
		return 4;
	if (inFile.bad())
		return 2;
	if (inFile.fail())
		return 3;
}
int main()
{
	vector <string> svec;
	string fileName,s;
	cout<<"Enter fileName:" <<endl;
	cin>>fileName;
	out=fileToVector(fileName, svec);
	for(vectr<string>::iterator iter=svec.begin();iter!=svec.end();iter++)
		cout<<*iter;
	return 0;
}