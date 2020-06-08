#include<bits/stdc++.h>
using namespace std;

template <class X>
void swap(X &a, X &b)
{
   X tp;
   tp=a;
   a=b;
   b=tp;
   cout<<"updated values of a and b are:"<<a<<' '<<b<<endl;
}

int main()
{
   int p, q;
   float c, d;
   p=2;q=5;
   c=3.4;d=9.1;
   swap(p,q);
   //swap(c,d);

}
