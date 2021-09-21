#include<iostream>
using namespace std;

class letterA
{  
  public:
  int i,j,s;
	  
  void print()
  { 
  
   	if(j==1 || j==2)  //top to left
	{
	 cout<<"*"; 
	} 	  
	
	else if(j==(2*i-1) || j==(2*i-2))  //top to right
	{
	 cout<<"*"; 
	}
	
	else if(i==12) 	//horizontal line
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
    for(i=3;i<=20;i++)
    {
      for(s=i;s<20;s++)
      {
	    cout<<" ";
	  }
	 
      for(j=1;j<=(2*i-1);j++)
      {		   
	   print();
	  } 	 
	  	  
	 cout<<endl;	
    }   
  }
  
};


int main()
{

 letterA obj;
 obj.assemble();
 
}


