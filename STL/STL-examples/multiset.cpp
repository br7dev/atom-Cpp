// CPP program to demonstrate working of Multiset
#include <bits/stdc++.h>
using namespace std;

int main()
{
	multiset<int> ms; 

	ms.insert(1);
	ms.insert(3);
	ms.insert(4);
	ms.insert(2);
	ms.insert(2);

	cout << "Elements in Multiset:\n";
	for (auto it : ms)
		cout << it << " ";

	return 0;
}
// Elements in Multiset:
// 1 2 2 3 4
