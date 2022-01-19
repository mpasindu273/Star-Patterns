#include<iostream>
using namespace std;

class letterS
{  
  public:
  int i,j,s;
	  
  void print()
  { 
  
   	if(i<=2) 
	{
	 cout<<"*"; 
	} 	  
	
	else if(j<=2 && i<8) 
	{
	 cout<<"*"; 
	}
	
	else if(i==3 && j<=2 )  
	{
	 cout<<"*"; 
	}
	
	else if(i==8 || i==9) 	
	{
	 cout<<"*"; 
	}
	
    else if((i>=9 && i<=15) && (j==19 || j==20))	
	{
	 cout<<"*"; 
	}
	
    else if(i==15 || i==16) 	
	{
	 cout<<"*"; 
	}
   
	else
	{
	 cout<<" "; 
	}
	
  }

  void assemble()
  {
    for(i=1;i<=16;i++)
    {
      for(j=1;j<=20;j++)
      {		   
	   print();    
      } 	 
	  	  
	 cout<<endl;	
    }   
  }
  
};


int main()
{

 letterS obj;
 obj.assemble();
 
}


