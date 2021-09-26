#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                if(i==0 && j==b-1)
                    cout<<'W'<<endl;
                else if(j==b-1)
                    cout<<'B'<<endl;
                else
                    cout<<'B';
            }
        }
    }
    return 0;
}
