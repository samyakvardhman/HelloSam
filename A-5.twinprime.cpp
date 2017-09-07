#include<iostream>
using namespace std;
int prime(int n)
{
	int i,f=1;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			f=0;
			break;	
		}
	}
	if(f&&n!=1)
	return 1;
	else
	return 0;
}
//Changeed
int main()
{
	int f,s;
	cout<<"Enter the two prime numbers";
	cin>>f>>s;
	if(s-f==2)
	{
		if(prime(s)&&prime(f))
		cout<<"pair is Twin Prime"<<endl;
		else
		cout<<"Pair is not Twin Prime"<<endl;
	}
	else
	cout<<"Pair is not Twin Prime"<<endl;
}
