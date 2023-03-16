#include <iostream>
using namespace std;

int main(){

    int r=5;int a=64;
		
		for(int i=1;i<=r;i++){
			
			for(int j=1;j<=r-i;j++){
				cout<<" ";
			}
			for(int k=1;k<=2*i-1;k++){
				cout<<(char)(a+k);
			}
			cout<<endl;
		}                                                
		
		 r--; int num=1;
		
		for(int l=1;l<=r;l++){
			for(int m=1;m<=l;m++){
				cout<<" ";
			}
			for(int n=2*r-l;n>=l;n--){
				cout<<(char)(a+num++);
			}
			num=1;                              
			cout<<endl;
		}
	



    return 0;
}
