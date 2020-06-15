/*
189. Rotate array
This is one of the solutions based on reversing the array in parts
The algorithm works as below:
1. Key should not be larger than length of array, if it is then take modulo of key and array length;
2. Now we take (length-key) as key, since its based on rotation so we need it;
3. now that we have the new key, we divide the array into 2 parts. one is less than key and other part is greater than key;
4. now we reversing part:
      1. reverse the first part of array divided by key;
      2. reverse the second part of array divided by key;
      3. Now we have an array in which both parts are divided;
      4. Reverse the whole array;
5. the final reversed array is the solution
*/

#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>&nums, int key){

   int length = nums.size();
   key %= length;
   key = length - key;

   cout<<"\nGiven array is:-\n";
   for(int i =0; i< length; i++)
   cout<<nums[i]<<" ";              //The array that we need to rotate;

   if(key < 0) return;

         reverse(nums.begin(),nums.begin()+key);  //reversing from beginning to beginning+key
         cout<<"\nRotated array 1st time  is :-\n";
         for(int i =0; i< length; i++)
         cout<<nums[i]<<" ";              //Array after rotating first half;

        reverse(nums.begin()+key,nums.end());  // reversing from beginning+key to end;
        cout<<"\nRotated array 2nd time  is :-\n";
        for(int i =0; i< length; i++)
        cout<<nums[i]<<" ";               //Array after rotating second half;

        reverse(nums.begin(),nums.end());

        cout<<"\nRotated array is :-\n";
        for(int i =0; i< length; i++)
        cout<<nums[i]<<" ";               //Final array after rotating the whole array;
}

main(){
   vector<int> nums = {1,2,3,4,5,6,7};
   int key =  1;
   rotate(nums, key);

}
