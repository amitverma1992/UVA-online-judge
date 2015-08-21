#include <bits/stdc++.h>

using namespace std;
int n,d;
int a[30][10];
int dp[30][10];
int issafe(int x,int index){
    for(int i=0;i<d;i++)
}

int solve(int ind){
    for(int i=0;i<n;i++){
        for(int j=0;j<d;j++){
            if(issafe(a[i][j],ind))
        }
    }
}
int main()
{
    while(scanf("%d%d",&n,&d)){


        for(int i=0;i<n;i++){
            for(int j=0;j<d;j++)
                scanf("%d", &a[i][j]);
        }
        memset(dp,-1,sizeof dp);

            solve(0);


    }

    return 0;
}
