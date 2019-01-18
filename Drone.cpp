#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,i,x1,x2,y1,y2,flag;
    scanf("%d",&T);
    string s;
    for(i=1;i<=T;i++){
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        cin>>s;
        flag = 0;
        for(int j=0;j<s.size();j++){
            if(j%2 == 0){
                if(s[j] == 'L' && x1>0)
                    x1--;
                if(s[j] == 'R' && x1<7)
                    x1++;
                if(s[j] == 'U' && y1<7)
                    y1++;
                if(s[j] == 'D' && y1>0)
                    y1--;
            }
            else{
                if(s[j] == 'L' && x2>0)
                    x2--;
                if(s[j] == 'R' && x2<7)
                    x2++;
                if(s[j] == 'U' && y2<7)
                    y2++;
                if(s[j] == 'D' && y2>0)
                    y2--;
            }
            if((x1==x2) && (y1==y2)){
                flag = 1; break;
            }

        }
        if(flag==0)
            printf("Case %d: SAFE\n",i);
        else
            printf("Case %d: COLLISION\n",i);
    }
    return 0;
}
