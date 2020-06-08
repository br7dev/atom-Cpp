//1266. Minimum Time Visiting All Points
#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<vector<int> > points;
   vector<int> v;
   //cout<<"enter total number of points: "<<endl;
   int n,a;
   for(int i=0;i<5;i++){
   cin>>n>>a;
   v.push_back(n);
   v.push_back(a);

}
   points.push_back(v);
   // cout<<"enter the points: "<<endl;
   // for(int i=0;i<n;i++)
   // {
   //    cin>>a;
   //    points.push_back(a);
   // }
   // cout<<"the points are\n";
   // for(int i=0;i<n;i++)
   // cout<<points[i];

   for (int i = 0; i < points.size(); i++)       // loops through each row of vy
     {  for (int j = 0; j < points[i].size(); j++) // loops through each element of each row
            cout << " " << points[i][j]<<;           // prints the jth element of the ith row
        cout << endl;
     }
}
