#include<bits/stdc++.h>
using namespace std;
int main()
{
    string J,S; int c=0;
    cout<<"Input: J: ";
    cin>>J;
    cout<<"S: ";
    cin>>S;
    for(int i=0;i<J.length();i++)
    {
      for(int j=0;j<S.length();j++)
      {
        if(J[i]==S[j])
        {
            c++;
        }
      }
    }
    cout<<c<<endl;
    return 0;
}
