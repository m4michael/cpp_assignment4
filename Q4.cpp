#include <iostream>
using namespace std;

int main(){
    int n;int rev=0;
    cout<<"Enter a number=";
    cin>>n;

    while(n>0){

       int  rem=n%10;

        rev=rev*10+rem;

        n=n/10;

    }

    cout<<"\nReverse of number="<<rev;


    return 0;
}