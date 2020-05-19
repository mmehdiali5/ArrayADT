#include<iostream>
using namespace std;
#include"Array.h"

template<typename R>
void input(Array<R>&a,int size)
{
	a.reSize(size);
	for (int i = 0; i < size; i = i + 1)
	{
		cin >> a[i];
	}
}

template<typename T>
void output(const Array<T>&a, int size)
{
	for (int i = 0; i < size; i = i + 1)
	{
		cout<< a[i]<<":";
	}
}


int main()
{
	Array<Array<Array<int>>>a;
	a.reSize(2);
	int val = 1;
	for (int i = 0; i < a.getCapacity(); i = i + 1)
	{
		a[i].reSize(3);
	}
	
	for (int i = 0; i < a.getCapacity(); i = i + 1)
	{
		for (int j = 0; j < a[i].getCapacity(); j = j + 1)
		{
			a[i][j].reSize(2);
		}
	}

/*	for (int i = 0; i < a.getCapacity(); i = i + 1)
	{
		for (int j = 0; j < a[i].getCapacity(); j = j + 1)
		{
			for (int k = 0; k < a[i][j].getCapacity(); k = k + 1)
			{
				a[i][j][k] = val;
				val++;
			}
		}
	}

	for (int i = 0; i < a.getCapacity(); i = i + 1)
	{
		for (int j = 0; j < a[i].getCapacity(); j = j + 1)
		{
			for (int k = 0; k < a[i][j].getCapacity(); k = k + 1)
			{
				cout<< a[i][j][k]<<" ";
			}
			cout << "\n";
		}
		cout << "\n";
	}*/

	//Array<Array<int>>a;
	//a.reSize(3);
	//for (int i = 0; i < 3; i = i + 1)
	//{
	//	a[i].reSize(3);
	//}
	//for (int i = 0; i < 3; i = i + 1)
	//{
	//	for (int j = 0; j < 3; j = j + 1)
	//	{
	//		cin >> a[i][j];
	//	}
	//}

	//for (int i = 0; i < 3; i = i + 1)
	//{
	//	for (int j = 0; j < 3; j = j + 1)
	//	{
	//		cout<< a[i][j]<<" ";
	//	}
	//	cout << "\n";
	//}
	/*Array<Array<int>>a;
	a.reSize(3);
	for (int i = 0; i < a.getCapacity(); i++)
	{
		a[i].reSize(5);
	}*/
	cout << "\n\n\n\n\n\n\n";
	return 0;
}