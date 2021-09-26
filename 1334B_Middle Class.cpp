#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,a,b,i,c,s;
    cin>>n;
    while(n--)
    {
        c=0;
        s=0;
        cin>>a>>b;
        int arr[a];
        for(i=0;i<a;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+a,greater<int>());
        for(i=0;i<a;i++)
        {
            if(arr[i]>=b)
            {
                s+=arr[i]-b;
                arr[i]=b;
                c++;
            }
            else
            {
                if(b-arr[i]<=s)
                {
                    s-=b-arr[i];
                    arr[i]=b;
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
