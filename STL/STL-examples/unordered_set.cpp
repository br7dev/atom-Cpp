// CPP program to demonstrate working of Unordered_set
#include <bits/stdc++.h>
using namespace std;

int main()
{
	unordered_set<int> us;

	us.insert(1); 
	us.insert(3);
	us.insert(4);
	us.insert(2);
	us.insert(2);

	cout << "Elements in unordered_set:\n";
	for (auto it : us)
		cout << it << " "; // Sorted

	return 0;
}

// Elements in unordered_set:
// 2 4 1 3
