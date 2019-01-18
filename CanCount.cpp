#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll T,i,N,j,x,sum;
    scanf("%lld",&T);
    for(i=1;i<=T;i++){
        scanf("%lld",&N);
        ll a[N+1];
        for(j=0;j<N;j++)
            scanf("%lld",&a[j]);
        sort(a,a+N);
        x = a[0];
        if(N >= 1)
            sum = 1;
        else
            sum =0;
        for(j=1;j<N;j++){
            if(a[j] != x){
                sum++; x = a[j];
            }
        }
        printf("Case %lld: %lld\n",i,sum);
    }
    return 0;
}
