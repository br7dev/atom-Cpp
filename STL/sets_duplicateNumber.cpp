/*
    Program to print the duplicate integers in an array using a set;
*/

#include<bits/stdc++.h>
using namespace std;

void printDuplicates(int arr[], int n) {
    unordered_set <int> intSet;
    unordered_set <int> duplicate;
    for(int i=0; i<n; i++){
        if(intSet.find(arr[i]) == intSet.end())
            intSet.insert(arr[i]);
        else
            duplicate.insert(arr[i]);
    }
    cout<<"Duplicate elements are:\n";
    for(auto itr = duplicate.begin(); itr != duplicate.end(); ++itr)
        cout<<*itr<< " ";

}
main(){
    int arr[] = {3,2,1,5,7,5,2,1,9,0};
    int n = sizeof(arr)/ sizeof(int);
    printDuplicates(arr, n);


}
