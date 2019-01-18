#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,z;
    while(scanf("%d%d%d",&x,&y,&z)!=EOF)
    {
        int ans = x + y - z;
        printf("%d\n",ans);
    }
    return 0;
}
