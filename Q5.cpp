#include <iostream>
using namespace std;

int main(){

    int r=5;int c=5;
    for(int i=1;i<=r;i++){

        for(int j=1;j<=c;j++){

            if(i==j||i+j==6){

                cout<<"*";
            
            }

            else{
                cout<<" ";
            }
        }

        cout<<endl;
    }


    return 0;
}