#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int f,i;
	int c=1;
	cout<<"Enter a number: ";
	cin>>f;
	for(i=2;i<f-1;i++)
	{
		if(f%i!=0)
		{
			continue;
		}
		else
		{
			c=0;
		}
    }
    if (c==0)
    {
    	cout<<"Number is not prime";
    	
	}
	else
	{
		cout<<"Number is prime";
	}
	return 0;
	}
