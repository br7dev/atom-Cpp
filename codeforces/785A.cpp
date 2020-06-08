#include<bits/stdc++.h>
using namespace std;
main()
{
   int n;
   ios_base::sync_with_stdio(false);
   map<string, int> value;
   value["Tetrahedron"] = 4;
   value["Cube"] = 6;
   value["Octahedron"] = 8;
   value["Dodecahedron"] = 12;
   value["Icosahedron"] = 20;
   cin>>n;
   int result = 0;
   for(int i=0;i<n;i++)
   {
      string s; cin>>s;
      result+=value[s];

   }
   cout<<result;
}
