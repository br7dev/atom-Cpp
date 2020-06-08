#include<bits/stdc++.h>
using namespace std;
int main()
{
   int i,j,n,t;
   cin>>n>>t;
   int a[n];
   for(int i=0;i<n;i++)
      cin>>a[i];
   for( i=0;i<n;i++)
   {
      for( j=0;j<n;j++)
      {
         int sum=0;
         sum=a[i]+a[j];
         if(sum==t)
         {
            cout<<i<<' '<<j<<endl;
            exit(0);
         }
      }
   }

}



class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         vector<int> result;
        auto i=0,j=0;

   for( i=0;i<nums.size();++i)
   {
      for( j=0;j<nums.size();++j)
      {
         int sum=0;
         sum=nums[i]+nums[j];

         if(sum==target )
         {

             vector<int> result;
             result={i,j};
        //    return result;
            //exit(0);
         }
      }
   }
        return result;
    }
};
