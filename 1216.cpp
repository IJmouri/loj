#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    double volume,r1,r2,p,h,r;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf%lf%lf%lf",&r1,&r2,&h,&p);
        r=(2*r1+2*r2)*h+2*r1*p-2*r2*p-2*r1*h;
        r=r/(2*h);
        volume= 2*acos(0.0)*p*(r2*r2+r*r+r*r2)/3;
        printf("Case %d: %lf\n",i,volume);
    }
    return 0;
}
