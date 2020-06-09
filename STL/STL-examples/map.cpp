
// CPP program to demonstrate working of map

#include <bits/stdc++.h>
using namespace std;

int main()
{
	map<int, int> m;

	m[1] = 2; // Insertion by indexing
	m.insert({ 4, 5 });  // Direct pair insertion
	m.insert(make_pair(8, 5));  // Insertion of pair by make_pair
   m.insert(pair<int,int>(9,2));  //using pair function

	cout << "Elements in map:\n";
	for (auto it : m)
		cout << "[ " << it.first << ", "
			<< it.second << "]\n"; // Sorted

	return 0;
}

// Output:
// Elements in map:
// [ 1, 2]
// [ 4, 5]
// [ 8, 5]
