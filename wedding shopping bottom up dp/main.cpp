#include <bits/stdc++.h>

using namespace std;
int C,M;
bool can_reach[201][25];
int a[25][25];

int main()
{
    int tc,k;
    cin>>tc;
    while(tc--){
        scanf("%d",&M);
        scanf("%d",&C);
        for(int i=0;i<C;i++){
            scanf("%d",&k);
            a[i][0]=k;
            for(int j=1;j<=k;j++)
                scanf("%d",&a[i][j]);
        }
        memset(can_reach,false,sizeof can_reach);
        for(int i=1;i<=a[0][0];i++)
            can_reach[M-a[0][i]][0]=true;
        for(int j=1;j<C;j++)
            for(int i=0;i<M;i++)
            if(can_reach[i][j-1])
            for(int l=1;l<=a[j][0];l++)
            if(i-a[j][l]>=0)
            can_reach[i-a[j][l]][j]=true;
        int i;
        for ( i = 0; i <= M && !can_reach[i][C - 1]; i++);
        if(i==M+1)
            cout <<"no solution"<<endl;
        else
            cout << M-i<<endl;

    }
    return 0;
}
