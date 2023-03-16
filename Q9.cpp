#include<iostream>
using namespace std;



bool prime(int m){
		
		if(m<1)
			return false;
		
		for(int l=2;l<=m/2;l++){
			
			if(m%l==0){
				return false;
			}
			
			
		}
		
	
			return true;
		
		
	}


    

	
	int main(){
		
		int num;
		cout<<"Enter a number=";
		cin>>num;
		bool flag=false;

		for(int i=2;i<=num/2;i++){

			if(prime(i)){

				int j=num-i;
				if(prime(j)){

					flag=true;

					cout<<num<<"="<<i<<"+"<<j<<endl;
				}

			}

		}

		if(!flag){
			cout<<num<<" cannot be expressed as sum of two prime numbers";
		}
		
		return 0;
		

    }
		
		
		
	

	
     



			
			
		