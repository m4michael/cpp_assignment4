#include <iostream>
using namespace std;

int main(){

int n;int sum=0;
    cout<<"Enter nth value=";
    cin>>n;

    cout<<"\nThe sum of n natural numbers is=";

    for (int i=1;i<=n;i++){

        sum=sum+i;

    }
    cout<<sum;


}