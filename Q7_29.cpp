// Write a program to find the sum of digits of a number until it becomes a single-
// digit number.

#include <iostream>
using namespace std;

int main(){
    int n,z,x,sum=0;
    cout<<"Enter the Number:";
    cin>>n;
    start:
    if(n>0){
        z=n%10;
        x=n/10;
        sum=x+z;
        if(sum>10){
            n=sum;
            goto start;
        }
        cout << "The final single-digit sum is: " << sum << endl;
    }
    return 0;
}
