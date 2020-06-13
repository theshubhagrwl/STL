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
	
	//Common Functions in LIST, STACK, QUEUE
	cout << ls.size() << endl;
	cout << ls.empty() << endl; 
	
	list<int> ls2;
	ls2.swap(ls);
	
	for (auto i : ls2)
	{
		cout << i << ", ";
	}
	
}
