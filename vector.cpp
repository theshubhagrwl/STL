#include <bits/stdc++.h>
using namespace std;

int main()
{
	//vector is a dynamic array
	vector<int> v;
	//To add elements we use .push_back()
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	for (auto i : v)
	{
		cout << i << ", ";
	}
	cout << endl;

	//inplace of push_back, emplace_back() is also used
	// main difference between push_back and emplace_back is that
	// push_back stores a copy of pair in the vector
	// emplace_back stores the pair directly in the vector
	// Thus, sometimes emplace_back is more time efficient

	vector<int> v2;
	v2.push_back(2);
	v2.push_back(20);
	v2.erase(v2.begin());
	for (auto i : v2)
	{
		cout << i << ", ";
	}
	cout << endl;

	vector<int> v3;
	v3 = {500, 700, 200, 200, 200};
	v3.erase(v3.begin() + 1, v3.begin() + 3);
	//in this the first value is included but the second value is excluded
	for (auto i : v3)
	{
		cout << i << ", ";
	}
	cout << endl;

	//2D Vectors
	vector<vector<int>> v4;
	v4.push_back({1, 2, 3, 4});
	v4.push_back({11, 12, 13, 14});
	for (auto i : v4)
	{
		for (auto j : i)
		{
			cout << j << ", ";
		}
	}
}
