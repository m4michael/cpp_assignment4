#include <iostream>

using namespace std;
#include <cmath>


int main(){
    int n,rem;

    cout<<"Armstrong numbers between 100 and 500 are:"<<endl;

    for(int i=100;i<=500;i++){

         n=i;int orig=i; int arm=0;int count=0;

        while(n>0){

           n=n/10;
            count++;
        }

        n=orig;

        while(n>0){

             rem=n%10;

            int power=1;
            for(int j=1;j<=count;j++){
                power=power*rem;
            }

            arm=arm+power;

            n=n/10;
            

        }

        if(arm==orig){

            cout<<i<<endl;
        }
    }


    return 0;
}