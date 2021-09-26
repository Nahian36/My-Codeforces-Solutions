#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,c,maxx;
    cin>>n;
    string arr;
    while(n--)
    {
        maxx=0;
        c=0;
        cin>>arr;
        for(i=0;i<arr.size();i++)
        {
            if(arr[i]=='L')
            {
                c++;
                if(c>maxx)
                    maxx=c;
            }
            else
            {
                c=0;
            }
        }
        cout<<maxx+1<<endl;
    }
    return 0;
}
