#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;int bal=0, ans=0;
   cin>>s;
   for(auto &n:s)
   {
      if (n == 'L') {
               bal ++;
           }
      else {
               bal --;
           }
           if (bal == 0) {
               ans ++;
           }
   }
      cout<<ans;



}
