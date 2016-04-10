/*
统计双字符序列出现的次数：ff、fl以及fi
*/
#include<iostream>
using namespace std;
int main()
{
	char currCh,preCh='\0';
	int ffCnt=0,flCnt=0,fiCnt=0;
	while(cin<<currCh)
	{
		if(preCh='f')
		{
			swith(currCh)
			{
				case 'f':
					++ffCnt;
					break;
				case 'l':
					++flCnt;
					break;
				case 'i':
					++fiCnt;
					break;
			}
		preCh=currCh;
		}
	}
	cout<<ffCnt<<flCnt<<fiCnt;
}