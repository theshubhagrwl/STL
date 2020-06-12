#include <bits/stdc++.h>
using namespace std;

int main()
{
	array<int, 10> arr1 = {1, 2, 3, 4, 5, 6};
	for (int i = 0; i < 5; i++)
	{
		cout << arr1[i] << ", ";
	}
	cout << endl;

	//Iterator
	array<int, 10>::iterator it1;
	for (auto it1 = arr1.begin(); it1 < arr1.end(); it1++)
	{
		cout << *it1 << ", ";
	}
	cout << endl;
	for (auto x : arr1) //foreach loop
	{
		cout << x << ", ";
	}
}
