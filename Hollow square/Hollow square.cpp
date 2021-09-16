#include<iostream>
using namespace std;
int main(){

for(int i=0;i<8;i++){
	for(int j=0;j<8;j++){	 
	    if((i>=2 && i<=5) && (j>=2 && j<=5))
		{
		cout<<"  ";
		}	 
		
		else
		{	 	 
		cout<<"* ";
		}
	 }
		cout<<endl;	
   }   
}

