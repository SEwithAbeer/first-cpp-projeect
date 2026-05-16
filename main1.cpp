#include<iostream>
using namespace std;

int main(){
    int num;

    cout<<"Enter 3-digit number: ";
    cin>>num;

    int d1 = num % 10;
    int d2 = (num / 10) % 10;
    int d3 = num / 100;

    cout<<"Sum = "<<d1 + d2 + d3<<endl;

    return 0;
}
