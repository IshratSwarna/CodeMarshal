#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll T,i,n,ans,x;
    double d,a;
    scanf("%lld",&T);
    for(i=1;i<=T;i++){
        scanf("%lld",&n);
        if((n%180 != 0) || (n<180))
            printf("Case %lld: Impossible\n",i);
        else{
            x = (n/180) + 2;
            a = n/x;
            d = (double)n/(double)x;
            if((a+1 - d) < (d - a ))
                ans = (ll)a+1;
            else
                ans = (ll)a;
            printf("Case %lld: %lld %lld\n",i,x,ans);
        }
    }
    return 0;
}
