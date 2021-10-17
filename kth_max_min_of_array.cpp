#include<bits/stdc++.h>
using namespace std;

void kthmaxinArray(int arr[], int size, int k){
     cout<<arr[size-k];
}
void kthmininArray(int arr[], int size, int k){
     cout<< arr[k-1];
}
void inputarray(int arr[], int size){
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
}
int main(){
 int n;
 int k;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cin>>k;
    sort(arr, arr+n);
    cout<<"Kth max of array:";
    kthmaxinArray(arr, n, k);
    cout<<endl;
    cout<<"Kth min of array:";
    kthmininArray(arr, n, k);

    return 0;
}