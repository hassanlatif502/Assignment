#include <iostream>
using namespace std;

int Equilibrium_Point(int arr[], int n)
{
	int i,j;
	int l_sum, r_sum;
	for (i=0; i<n; ++i)
	{	
		l_sum=0;
		for (j=0; j<i; j++)
			l_sum = l_sum+arr[j];
		r_sum=0;
		for (j=i+1; j<n; j++)
			r_sum = r_sum+arr[j];

		if (l_sum==r_sum)
			return i;
	}
	return -1;
}

int main()
{
	int arr[]={1,3,5,2,2};
	int arr_size=sizeof(arr)/sizeof(arr[0]);
	cout<<Equilibrium_Point(arr, arr_size);
	return 0;
}
