#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int t,x=0;
    cin>>t;
    while(t--)
    {
        long int n,m,s=0,d=0,y;
        cin>>n>>m;
        long long int c[n];
        for(int i=0;i<n;i++){
            cin>>c[i];
        }
        for(int i=0;i<n;i++){
            s=s+c[i];
        }
        d=s/m;
        y=s-(m*d);
        x++;
        printf("Case #%d: %d\n",x,y);
    }
}
