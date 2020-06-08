#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
    string n,j;
    cout<<"enter the number:"<<endl;
    cin>>n;


    for(int i=n.length()-1; i>=0;i--)
    {
        cout<<n[i];
    }
    if(j==n)
        cout<<"yes\n";
      else cout<<"no"<<endl;



}
