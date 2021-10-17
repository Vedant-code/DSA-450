/*#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int str, int end)
{
    while (str < end)
    {
        int temp;
        temp = arr[str];
        arr[str] = arr[end];
        arr[end] = temp;
        str++;
        end--;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout<<"Enter the size of array :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<arr;
    reverseArray(arr, 0, n);
    cout<<arr;
}*/
// Iterative C++ program to reverse an array
#include <bits/stdc++.h>
using namespace std;

/* Function to reverse arr[] from start to end*/
void reverseArray(int arr[], int start, int end)
{
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}	

/* Utility function to print an array */
void printArray(int arr[], int size)
{
for (int i = 0; i < size; i++)
cout << arr[i] << " ";

cout << endl;
}

/* Driver function to test above functions */
int main()
{
	int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    reverseArray(arr, 0, n-1);
    printArray(arr, n);
	return 0;
}
