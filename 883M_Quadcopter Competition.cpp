#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1,y1,x2,y2,x,y;
    cin>>x1>>y1>>x2>>y2;
    x=abs(x1-x2)+1;
    y=abs(y1-y2)+1;
    if(x1==x2)
        x++;
    if(y1==y2)
        y++;
    cout<<(2*x)+(2*y)<<endl;
    return 0;
}
