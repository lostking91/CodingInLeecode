#include<iostream>
#include<math.h>
#include<time.h>

using namespace std;
void showNum(int *arr,int num)
{
	for (int i = 0; i <= num; i++)
		cout << *arr++ << "\t";
	cout << endl;
}
void randinput(int *arr,int num, int maxnum)
{
	for (int i = 0; i <= num; i++)
	{
		*arr ++ = (rand() % maxnum) + 1;
	}
	
}
void quicksort(int *a, int low, int high)
{
	int i, j, pivot;
	if (low < high)
	{
		pivot = a[low];
		i = low;
		j = high;
		while (i < j)
		{
			while (i < j && a[j] >= pivot)
				j--;
			if (i < j)
				a[i++] = a[j];
			while (i < j && a[i] <= pivot)
				i++;
			if (i < j)
				a[j--] = a[i];
		}
		a[i] = pivot;
		quicksort(a, low, i - 1);
		quicksort(a, i + 1, high);
	}
}
void main()
{
	srand(time(NULL));		//time是一个函数，获取时间保存结果于ts中
	clock_t start, finish;	//计算运行时间
	double  duration;
	start = clock();
	int num, maxnum;
	cin >> num;
	maxnum = num * 4;
	int *arr = new int[num + 1];
	randinput(arr, num, maxnum);
	showNum(arr, num);
	quicksort(arr, 0, num);
	showNum(arr, num);
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	cout << duration << " seconds\n";
	//printf("%f seconds\n", duration);
	system("pause");
}