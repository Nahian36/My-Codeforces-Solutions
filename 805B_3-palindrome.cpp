#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    char arr[n];
    for(i=0;i<n;i++)
    {
        if(i%4==0 || i%4==1)
        {
            arr[i]='a';
        }
        else
            arr[i]='b';
    }
    arr[n]='\0';
    cout<<arr<<endl;
    return 0;
}
