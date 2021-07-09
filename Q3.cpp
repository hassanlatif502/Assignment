#include <bits/stdc++.h>
#define CHARACTERS 200
using namespace std;

int longestSub(string str)
{
	int n=str.size();
	int result=0;

	vector<int> lastIndex(CHARACTERS, -1);
	int i=0;
	for (int j=0; j<n; j++) 
	{	
		i = max(i, lastIndex[str[j]]+1);
		result = max(result, j-i+1);
		lastIndex[str[j]]=j;
	}
	return result;
}

int main()
{
	string str="abceejasda";
	cout<<"Input string: "<<str<<endl;
	int length=longestSub(str);
	cout<<"Length of longest substring: "<<length;
	return 0;
}
