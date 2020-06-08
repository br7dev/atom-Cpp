#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,d;
   cin>>n>>d;
   int arr[n], a[n];
   for(int i=0;i<n;i++)
      cin>>arr[i];
for(int j=0;j<d;j++)
{
   for(int i=1;i<n;i++)
   {
      a[i-1]=arr[i];
   }
         a[n-1]=arr[0];
         for(int i=0;i<n;i++)
         {
         cout<<a[i]<<' ';
      }
      cout<<endl;
}


}
