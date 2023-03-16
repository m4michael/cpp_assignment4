#include<iostream>
using namespace std;
int main(){
int r;
    cout<<"Enter the no. of rows=";

cin>>r;

int temp;int number=3;

for(int i=1;i<=r;i++){

    for(int j=1;j<=r-i;j++){
        cout<<" ";

    }

if(i==1){
    cout<<"2";

}

else{

    for(int k=1;k<=i;){

        temp=0;

        for(int l=2;l<number;l++){

            if(number%l==0){

                temp++;
            }

        }

        if(temp==0){

            k++;
            cout<<number<<" ";
        }

        number++;

    }
}

cout<<endl;

}

return 0;

}



    
