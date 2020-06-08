#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n, i,q,b;
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cin>>q;
  while(q--)
  {

      cin>>b;
      int count=0;
      for(i=0;i<n;i++)
      {
          if(b!=arr[i]);
          else
            count++;
      }
      if(count==0)
      cout<<"NOT PRESENT"<<endl;
      else
      cout<<count<<endl;
  }
}
