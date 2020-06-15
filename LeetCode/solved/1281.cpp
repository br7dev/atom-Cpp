#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,r, sum=1,add=0, res;
   vector<int> v;
   cin>>n;
   while(n>=1)
   {
      r=n%10;
      v.push_back(r);
      n=n/10;
   }
   for(auto i=0;i<v.size();i++)
   {
      sum*=v[i];
      add+=v[i];
   }
   res=sum-add;
   cout<<res;
}


// Given an integer number n, return the difference between the product of its digits and the sum of its digits.
//
//
// Example 1:

// Input: n = 234
// Output: 15
// Explanation:
// Product of digits = 2 * 3 * 4 = 24
// Sum of digits = 2 + 3 + 4 = 9
// Result = 24 - 9 = 15

//Example 2:

// Input: n = 4421
// Output: 21
// Explanation:
// Product of digits = 4 * 4 * 2 * 1 = 32
// Sum of digits = 4 + 4 + 2 + 1 = 11
// Result = 32 - 11 = 21

// Constraints:
// 1 <= n <= 10^5
