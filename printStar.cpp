#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,n;
    scanf("%d",&T);
    for(int i=1;i<=T;i++){
        scanf("%d",&n);
        printf("Case %d:\n",i);
        for(int row = 1;row<=n;row++){
            for(int cl = 1;cl<=row;cl++)
                printf("*");
            printf("\n");
        }
        for(int row = n-1;row>=1;row--){
            for(int cl = 1;cl<=row;cl++)
                printf("*");
            printf("\n");
        }
    }
    return 0;
}
