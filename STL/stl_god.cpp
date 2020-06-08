#include <bits/stdc++.h>
using namespace std ;

//function to count the no of a particular character in a string.
void count_character()
{
  map<char,int> A;
  string x="ababaabiiiiabbbbbbabsxcnmzj";
  for(char c : x)
    A[c]++;
  cout<<A['a']<<' '<<A['i']<<endl;
}




int main()
{

//count_character();

}
