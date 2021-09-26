#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,i,j,c=0;
    cin>>a>>b;
    long long int arr[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=a-1;i>=0;i--)
    {
        for(j=b-1;j>=0;j--)
        {
            if(arr[i][j]==0)
            {
                if(arr[i][j+1]-1<arr[i+1][j])
                    arr[i][j]=arr[i][j+1]-1;
                else
                    arr[i][j]=arr[i+1][j]-1;
            }
            if(i>=1 && j>=1)
            {
                if(arr[i][j]<=arr[i-1][j] || arr[i][j]<=arr[i][j-1])
                {
                    cout<<-1<<endl;
                    return 0;
                }
            }
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            c+=arr[i][j];
        }
    }
    cout<<c<<endl;
    return 0;
}
