// AdressSort.cpp: определяет точку входа для приложения.
//

#include "AdressSort.h"
#include <vector>
using namespace std;

int main()
{
	int arr[10] ;

	int n = sizeof(arr) / sizeof(arr[0]);

	for (size_t i = 0; i < n; i++)
	{
		arr[i] = rand()%200;
	}
	cout << "Generated unsorted array: " << endl;
	for (size_t i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << " \n";

	int max, min;
	max = min = arr[0];

	for (size_t i = 1; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
		else if (arr[i] < min) min = arr[i];
	}
	vector<int> b;

	for (size_t i = 0; i <= max; i++)
	{
		b.push_back(max + 1);
	}
	for (size_t i = 0; i < n; i++)
	{
		b.at(arr[i]) = arr[i];
	}

	int k = 0; 

	for (size_t i = min; i <= max; i++)
	{
		if (b.at(i) != max+1)
		{
			arr[k] = b.at(i);
			k++;
		}
	}

	cout << "Sorted array is: " << endl;
	for (size_t i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}
