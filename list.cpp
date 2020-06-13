#include <bits/stdc++.h>
using namespace std;

int main()
{
	//LISTS
	//List in stl is the Linked List
	list<int> ls;
	ls.push_back(10);
	ls.push_back(20);

	for (auto i : ls)
	{
		cout << i << ", ";
	}
	cout << endl;

	ls.push_front(15);

	for (auto i : ls)
	{
		cout << i << ", ";
	}
}
