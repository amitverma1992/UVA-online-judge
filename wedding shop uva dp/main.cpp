#include <bits/stdc++.h>

using namespace std;
int M,C;
int a[25][25];
int dp[205][25];

int solve(int ml,int gid){

    if(ml<0)
        return -10;
    if(gid==C)
        return M-ml;
        if(dp[ml][gid]!=-1)
            return dp[ml][gid];
            int max1=-20;
        for(int i=1;i<=a[gid][0];i++)
            max1=max(solve(ml-a[gid][i],gid+1),max1);
            return dp[ml][gid]=max1;
}

int main()
{
    int tc,spend,k;
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
        memset(dp,-1,sizeof dp);
        spend=solve(M,0);
        if(spend <0)
            printf("no solution\n");
        else
            printf("%d\n",spend);
    }
    return 0;
}
