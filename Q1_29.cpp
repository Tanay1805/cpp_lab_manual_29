// Write a program to find the roots of a quadratic equation.

#include <iostream>
#include <cmath>
using namespace std;

double discr(double a,double b,double c,double d){
    double x1,x2;
    d= b*b - 4 * a *c;
    cout<<"Discriminant:"<<d<<endl;
    if(d>1){
        x1= -b + sqrt(d);
        x2= -b - sqrt(d);
        cout<<"Root 1:"<<x1/2*a<<endl;
        cout<<"Root 2:"<<x2/2*a<<endl;
        cout<<"Unequal & Real Roots";
    }
    else if(d==1){
        x1= -b + sqrt(d);
        x2= -b - sqrt(d);
        cout<<"Root 1:"<<x1/2*a<<endl;
        cout<<"Root 2:"<<x2/2*a<<endl;
        cout<<"Equal & Real Roots";
    }
    else{
        x1= -b + sqrt(abs(d));
        x2= -b - sqrt(abs(d));
        cout<<"Root 1:"<<x1/2*a<<endl;
        cout<<"Root 2:"<<x2/2*a<<endl;
        cout<<"Unequal & Imaginary Roots";
    }
    return 0;
    }

int main(){
    double a,b,c,d;
    cout<<"Enter the Quadratic Equation in the Form:\n ax^2+bx+c=0"<<endl;
    cout<<"Enter the Value of a:";
    cin>>a;
    cout<<"Enter the Value of b:";
    cin>>b;
    cout<<"Enter the Value of c:";
    cin>>c;
    discr(a,b,c,d);
    return 0;
}