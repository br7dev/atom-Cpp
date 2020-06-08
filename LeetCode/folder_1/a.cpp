#include<bits/stdc++.h>
using namespace std;
int main()
{
   int L,R;
   cin>>L>>R;
//   int b[100];

   for(int n=L;n<=R;n++)
   {
      int j=n;
      vector<int>v;
   while(j>0)
   {
      v.push_back(j%2);
      j=j/2;
   }
   for(auto i=v.end()-1;i>=v.begin();i--)
   {
   cout<<*i;
   }
   int freq=count(v.begin(), v.end(),1);
   cout<<'\n'<<freq<<endl;
   v.clear();
}
}
