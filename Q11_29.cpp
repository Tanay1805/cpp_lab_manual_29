// Write a program that checks if an array is sorted in ascending order.

#include <iostream>
using namespace std;

int main(){
    int size;
    int arr[size];
    cout<<"Enter the Number of Elements in Array:";
    cin>>size;
    for (int i=1;i<=size;i++){
        cout<<"Enter the Elements:";
        cin>>arr[i];
    }
    for(int i=1;i<=size;i++){
        cout<<arr[i];
    }
    return 0;
}