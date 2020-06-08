#include <bits/stdc++.h>
using namespace std;

int main()
{
  int num,x,t;
  cin>>num;
  int arr[100]={0};
  for(int i=0;i<num;i++)
    cin>>arr[i];

    cin>>t;

    while(t--)
    {
      int count=0;
       cin>>x;
       for(int i=0;i<num;i++)
        {
           if(arr[i]==x)
             count++;
           }
           if(count==0)
           cout<<"NOT PRESENT";
           else
           cout<<count;
         }

    return 0;
    }
