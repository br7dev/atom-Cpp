#include <bits/stdc++.h>
using namespace std;

int main()
{
   vector<int> v;
   v.push_back(4);
   v.push_back(8);

      v.push_back(5);
      v.push_back(9);
      v.push_back(1);
      for(auto i=v.begin();i!=v.end();++i)
         cout<<*i<<' ';
      auto x=v.front()+2;
      cout<<x;

}
