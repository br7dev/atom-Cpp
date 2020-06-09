// CPP program to demonstrate working of Multimap
#include <bits/stdc++.h>
using namespace std;

int main()
{
	multimap<int, int> m;

	m.insert({ 1, 2 });
	m.insert({ 2, 3 });
	m.insert({ 4, 5 });
	m.insert({ 2, 3 });
	m.insert({ 1, 2 }); 

	cout << "Elements in Multimap:\n";
	for (auto it : m)
		cout << "[ " << it.first << ", "
			<< it.second << "]\n"; // Sorted

	return 0;
}

// Elements in Multimap:
// [ 1, 2]
// [ 1, 2]
// [ 2, 3]
// [ 2, 3]
// [ 4, 5]
