// learning.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <iostream>
using namespace std;  
#define N 25

void min_multiple(int m)
{
	//ProjectEuler Problem5
	//Smallest multiple
    //2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
    //What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
	int multiple=1;
	int array[N];
	for(int i=2;i<=m;i++)
	{
		array[i]=i;
		for(int j=1;j<i;j++)
		{
			if(array[i]%array[j]==0)
				array[i]=array[i]/array[j];			
		}
		multiple=multiple*array[i];		
	}
	printf("the min multiple of %d is: %d",m,multiple);

}

int _tmain(int argc, _TCHAR* argv[])
{

	int m=2;
	min_multiple(m);

	getchar();
	return 0;
}

