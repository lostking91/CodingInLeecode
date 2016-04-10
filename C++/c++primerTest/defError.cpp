/*
定义一组名为error的重载函数，使之与下面调用匹配：
int index,upperBound;
char selectVal;
error("Subscript out of bounds: ", index, upperBound);
error("Division by zero");
error("Invalid selection", selectVal)
*/

void error(cibst string &s, int index, int upperBound)
{
	cout<<s<<index<<upperBound;
}
void error(const string &s)
{
	cout<<s<<endl;
}
void error(const string &s,char selectVal)
{
	cout<< s<< selectVal<<endl;
}