// CPP program to demonstrate working of Unordered_map
#include <bits/stdc++.h>
using namespace std;

int main()
{
	unordered_map<int, int> um;

	um[1] = 2;
	um[4] = 5; 
	um[2] = 3;
	um[8] = 5;
	um[3] = 6;

	cout << "Elements in unordered_map:\n";
	for (auto it : um)
		cout << "[ " << it.first << ", " << it.second << "]\n";

	return 0;
}

// Elements in unordered_map:
// [ 3, 6]
// [ 2, 3]
// [ 8, 5]
// [ 1, 2]
// [ 4, 5]
