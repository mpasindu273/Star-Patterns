#include<iostream>
using namespace std;
int main()
{

for(int i=1;i<=22;i++)
{
	for(int j=1;j<=22;j++)
	{
	
		if(i==11|| i==12 || j==11|| j==12 || i==j)
		{
		 cout<<"  ";
		}
		
		else if(j==(23-i))
		{
	 	 cout<<"  ";
		}

		else
		{	 	 
		cout<<" *";
		} 
	
	 }//j
		cout<<endl;
}//i
	

}

