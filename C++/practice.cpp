#include<bits/stdc++.h>
using namespace std;
// counter();
void insert(int arr[], int n, int b)
{

   int a;
   cout<<"How many numbers do you want to insert:\n";
   cin>>a;
   int length= counter(arr);
   if((length+a) >= n)
   {
      cout<<"Stack overflow\n";
      return;
   }
   else
   {
   cout<<"enter the numbers to add to stack:\n";
   for(int i=0;i<a;i++)
   {
      cin>>arr[i];
   }
   cout<<"Added successfully\n";
}

}
int counter(int arr[])
{
   int length= arr.length();
   return length;
}
void show(int arr[], int n,int b)
{
   cout<<"The stack at this moment contains:\n";
   for(int i=0;i<n;i++)
      cout<<arr[i]<<"\t"<<endl;
}

int main()
{
   int n,b;
   cout<<"enter the capacity of stack:\n";
   cin>>n;
   int arr[n];
   insert(arr, n,b);
   show(arr, n,b);

}
