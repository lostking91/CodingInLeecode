/*
编写函数打开文件，将文件内容读入string类型的vector容器，每一行存储为该容器对象的一个元素
函数fileToVector打开文件用于输入
*/
#include<iostream>
#include<string>
#include<vector>
#inlcude<fstream>
using namespace std;
int fileToVector(string fileName,vector<string>& svec)
{
	//创建ifstream对象inFile并绑定到由形参fileName指定的文件
	ifstream inFile(fileName.c_str());
	if(!inFile)
		return 1;
	//将文件内容读入string类型的vector容器，每一行存储为该容器对象的一个元素
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
把文件中的每个单词存储为容器的一个元素
*/
#include<iostream>
#include<string>
#include<vector>
#inlcude<fstream>
using namespace std;
int fileToVector(string fileName,vector<string>& svec)
{
	//创建ifstream对象inFile并绑定到由形参fileName指定的文件
	ifstream inFile(fileName.c_str());
	if(!inFile)
		return 1;
	//将文件内容读入string类型的vector容器，每一行存储为该容器对象的一个元素
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