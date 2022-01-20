#include<iostream>
using namespace std;
class letterD
{
  private:
  int i,j,s;
  
  public:
  void printStars(int amount)
  {
    for(j=1; j<=amount; j++)
  	{
	  cout<<"*";
	}
  }
  
  void printSpaces(int amount)
  {
    for(s=1; s<=amount; s++)
  	{
	  cout<<" ";
	}
  }
  
  void topRect()
  {
    for(i=1; i<=2; i++)
	{
	  printStars(15);
	  cout<<endl;
	}
  }
  
  void middleRect()
  {
    for(i=1; i<=10; i++)
	{
	  printSpaces(3);
	  printStars(3);
	  printSpaces(6);
	  printStars(3);
	  cout<<endl;
	}
  }
  
  void bottomRect()
  {
    for(i=1; i<=2; i++)
	{
	  printStars(15);
	  cout<<endl;
	}
  }
};

int main()
{
  letterD obj;
  
  obj.topRect();
  obj.middleRect();
  obj.bottomRect();
}

