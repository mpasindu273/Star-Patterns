#include<iostream>
using namespace std;
int main()
{
  int i,j=1;
 //top rectangle
  for(i=1; i<=3; i++)
  {
    for(j=1; j<=9; j++)
   	{
      cout<<"*";  
  	}
	cout<<endl;
  }

  //middle rectangle
  for(i=1; i<=8; i++)
  {
    for(j=1; j<=3; j++)
   	{	  
	  if(j==1)
	  {
      cout<<"   *";
	  }
	  else
	  {
      cout<<"*";
	  }
  	}
	cout<<endl;
  }
  
  //bottom rectangle
  for(i=1; i<=3; i++)
  {
    for(j=1; j<=9; j++)
   	{
      cout<<"*";  
  	}
	cout<<endl;
  }
}

