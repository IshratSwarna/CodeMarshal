#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,i;
    scanf("%d",&T);
    string s;
    getchar();
    for(i=1;i<=T;i++){
        getline(cin,s);
        transform(s.begin(),s.end(),s.begin(), :: toupper);
        printf("Case %d: ",i);
        cout<<s<<endl;

    }
    return 0;
}
