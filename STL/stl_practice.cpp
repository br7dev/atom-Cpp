#include <bits/stdc++.h>
using namespace std ;
int main()
{
   //cheching if the given point lies in betweeen the intervals given
   // we represent the intervals by 'pairs' in 'sets' using STL
   // a point will be given and we return the interval in which it lies
   set < pair <int, int>> S;

   S.insert({10,20});
   S.insert({400,450});
   S.insert({30,50});
   S.insert({2,3});
   S.insert({451,600});
   //since it is a set, it will automatically arrange(or sort) the pairs in the ascending order
   //how the sorting works in pairs as follows:
   //{a,b}{c,d} if a<c then set{a,b} comes first, but if a==c, then b and d are checked
   //and if b<d, then set{a,b} comes first, and vice-versa
   //thus now we have the pairs sorted as {2,3}{10,20}{30,50}{400,450}{451,600}
   //now w

   int point=2;
   auto it = S.upper_bound({point, INT_MAX});
   it--;
   pair<int, int>current = *it;
   if(it==S.begin())
   {
     cout<<"given point doesn't lie in any interval";
     return 0;
   }
   if(current.first<=point && point<=current.second)//the values in pairX{a,b} can be accessed using X.first and X.second
   {
     cout<<"Yes, its present:\n"<<current.first<<' '<<current.second<<endl;
   }
   else
   {
    cout<<"given point doesn't lie in any interval";
  }


}
