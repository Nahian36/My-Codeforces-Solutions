#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c=0,flag;
    cin>>a>>b;
    if(a<=b)
        flag=1;
    else
        flag=2;
    if(a==1 && b==1)
        cout<<c<<endl;
    else
    {
        while(a>=1 && b>=1)
        {
            if(flag==1)
            {
                a++;
                b-=2;
            }
            else
            {
                b++;
                a-=2;
            }
            if(a<=b)
                flag=1;
            else
                flag=2;
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
