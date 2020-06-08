//1304. Find N Unique Integers Sum up to Zero
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,sum=0;
   vector<int> v;
   vector<int> result;
   cout<<"enter number"<<endl;
   cin>>n;
   if(n==1)
   result.push_back(0);
   for(int i=0;i<n-1;i++)
   {
      result.push_back(i+1);
      sum+=i+1;
   }
   result.push_back(-sum);
   for(auto it=result.begin();it!=result.end();it++)
   cout<< *it<<" ";
}
