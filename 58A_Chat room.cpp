#include<bits/stdc++.h>
using namespace std;
int main()
{
	char arr[]={"hello"};
	string s;
	int i,j,c=0;
	cin>>s;
	for(i=0,j=0;i<s.size();i++)
	{
		if(arr[j]==s[i])
		{
			c++;
			j++;
		}
	}
	if(c==5)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
