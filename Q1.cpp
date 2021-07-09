#include<iostream>
using namespace std;

void Activities(int s[],int f[],int n)
{
	int i,j;
	cout<<"Activities that are selected are:"<<endl;
	i=0;
	cout<<i;
	for (j=1;j<n;j++)
	{
	if (s[j]>=f[i])
	{
		cout<<" "<<j;
		i=j;
	}
	}
}

int main()
{
	int s[]={1,5,4,8,1,11};
	int f[]={2,7,5,10,3,19};
	int n=sizeof(s)/sizeof(s[0]);
	Activities(s,f,n);
	return 0;
}
