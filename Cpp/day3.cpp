#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
      if(N%2!=0)
      {
        cout<<"weird"<<endl;
      }
      else{
        if(N>=6 && N<=20)
          cout<<"weird\n";
        else
        {
          cout<<"not weird\n";
        }

      }
    return 0;
}
