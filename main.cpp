#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include <fstream>

using namespace std;

void main()
{
	system("chcp 1251 > NUL");
	int N = 100, i = 0, j = 0, q = 0, size = 0;
	int *Arr = new int[100];
	int max = Arr[0], cmax = 0, rmax = 0;
	ifstream fin("masiv.txt");
	for (int q = 0; q < 100; q++) 
	{
	fin >> Arr[q];
	if (Arr[q] < 0) 
     {
	  break;
	 }
	size++;
	cout << Arr[q] << " ";
	}
	
	for (int i = 0; i < N; i++) 
	{
		if (cmax > rmax) 
		{
			rmax = cmax;
			max = Arr[i - 1];
		}
		cmax = 0;

		for (int j = i; j < size; j++)
			if (Arr[j] == Arr[i])
				cmax++;
	}

	cout << "\nMode of these elements: " << max << endl;
	
	system("pause");
}
