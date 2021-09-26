#include<bits/stdc++.h>
using namespace std;

int main()
{
    char arr[1000];
    cin>>arr;
    int i;
    char minn='a';
    for(i=0;i<strlen(arr);i++)
    {
        if(arr[i]==minn)
            minn++;
        else if(arr[i]>minn)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
