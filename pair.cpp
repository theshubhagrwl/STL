#include <bits/stdc++.h>
using namespace std;

//function template
template <typename T>
T addition(T x, T y)
{
	return x + y;
}

// class template
template <typename T, typename U>
class Pair
{
public:
	T first;
	U second;
	Pair(){};
	Pair(T x, U y)
	{
		first = x;
		second = y;
	}
};

int main()
{
	int a = 10, b = 20;
	cout << addition(a, b) << endl;

	Pair<int, string> p;
	p.first = 10;
	p.second = "abx";
	cout << p.first << ", " << p.second << endl;

	//pair using stl
	pair<int, string> pair1;
	pair1 = make_pair(1, "Shubh");
	cout << pair1.second << endl;
	pair1.second = "Shubh agrawal";
	cout << pair1.second << endl;

	//pair inside a pair
	pair<int, pair<int, string> > p2;
	p2.first = 20;
	p2.second = make_pair(100, "delhi");
	cout << p2.first << ", " << p2.second.first << "," << p2.second.second << endl;
}
