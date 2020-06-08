#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,t;
	cin>>n;
	int arr[100001]={0};
	for(int i=0;i<n;i++)
	{
		cin>>x;
		arr[x]++;
    }
	//	for(int i=0;i<n;i++)
	//	cout<<arr[i];
    cin>>t;
    while(t--)
    {
       cin>>x;
	   if(arr[x])
	   {
	   	cout<<arr[x]<<endl;
		   }
		   else
		   {
		   	cout<<"NOT PRESENT"<<endl;
		   }
	}
	return 0;
}
