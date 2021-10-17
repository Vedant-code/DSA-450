//Find the maximum and minimum element in an array
#include<bits/stdc++.h>
using namespace std;

void maxofArray(int arr[], int size)
{
   int max=arr[0];
   for(int i=0; i<size; i++)
   {
      if(max<arr[i]){
          max=arr[i];
      }
      
   }
   cout<< max;
}

void minofArray(int arr[], int size)
{
   int min=arr[0];
   for(int i=0; i<size; i++)
   {
      if(min>arr[i]){
          min=arr[i];
      }
      
   }
   cout<< min;
}
int main()
{
	int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout<< "maximum element of the array:";
    maxofArray(arr, n);
    cout<<endl;
   cout<< "minimum element of the array:";
   minofArray(arr, n);
return 0;
}