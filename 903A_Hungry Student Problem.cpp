#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, x, flag, temp;
    cin>>n;
    while(n--)
    {
        flag=0;
        cin>>x;
        for(i=0;i<=(x/7);i++)//i<=(x/7) karon large portion e 7 chunks thake, x/7 diye korle run time kombe
        {
            temp=x-(i*7);
            if(temp%3==0)
            {
                flag=1;
                break;
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}