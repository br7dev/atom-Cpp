#include<bits/stdc++.h>
using namespace std;

main()
{
   string s;
   int n;
   cin>>n;
   for(int i =0 ;i<n;i++){
   cin>>s;
      int length = s.length();
      if(length>10) cout<<s[0]<<length-2<<s[length-1]<<endl;
      else cout<<s<<endl;
   }
}
