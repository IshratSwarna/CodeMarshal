#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    double a,b,c,s,ans,x;
    scanf("%d",&T);
    for(int i=1;i<=T;i++){
        scanf("%lf%lf%lf",&a,&b,&c);
        s = (a+b+c)/2.0;
        x = s*(s-a)*(s-b)*(s-c) ;
        ans = sqrt(x);
        printf("Case %d: %.10f\n",i,ans);
    }
    return 0;
}
