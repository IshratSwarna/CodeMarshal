#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int T,cx,cy,r,px,py,cal,ans;
    scanf("%lld",&T);
    for(long long int i=1;i<=T;i++){
        scanf("%lld%lld%lld%lld%lld",&cx,&cy,&r,&px,&py);
        cal = (cx-px)*(cx-px) + (cy-py)*(cy-py);
        ans = sqrt(cal);
        if(ans<r)
            printf("Case %lld: yes\n",i);
        else
            printf("Case %lld: no\n",i);
    }
    return 0;
}
