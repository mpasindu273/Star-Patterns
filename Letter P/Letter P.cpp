#include<iostream>
using namespace std;
int main()
{

 for(int i=1;i<=12;i++)
 {
	for(int j=1;j<=15;j++)
	{
	  if((i>=4 && i<=9) && (j>=4 && j<=12))	 
	  {	     
	    cout<<"  ";	      
	  }
	  	    	
      else
	  {
	   cout<<" *";
	  } 
	  
 	}
   cout<<endl;	
 }   

     
	for(int i=1;i<=11;i++)
	{
	  for(int j=1;j<=3;j++)
	  {	   	   
		cout<<" *";
	  }
		cout<<endl;	
    }   

}

	

