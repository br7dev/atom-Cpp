//1295. Find Numbers with Even Number of Digits
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,input,a,digit,count=0,counter=0;

   cin>>n;
   vector<int> v;
   for(int i=0;i<n;i++)
   {
      cin>>input;
      v.push_back(input);

   }
   for(int i=0;i<n;i++)
   {
      cout<<v[i]<<" ";
      cout<<endl;
      a=v[i];
      while(a!=0)
      {
         a=a/10;
         count++;
      }
      cout<<"count is "<<count<<endl;
      if(count%2==0)
      counter++;
      count=0;

   }
   cout<<"counter is "<<counter<<endl;

}
