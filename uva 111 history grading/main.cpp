#include <bits/stdc++.h>

using namespace std;
int dp[21];
int a[21];
int n;
int c[21];

int main()
{

    scanf("%d",&n);
    for(int i=0;i<n;i++)
        cin >>c[i];


            for(int i=0;i<n;i++)
                scanf("%d",&a[i]);

        for(int i=0;i<n;i++)
            dp[i]=1;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(c[j]==a[j] && dp[j]+1 > dp[i])
                    dp[i]=dp[j]+1;
            }
        }
        int sum=0;
        for(int i=0;i<n;i++){
            if(c[i]==a[i])
                sum++;
        }
        cout << sum<<endl;
        cout << *max_element(dp,dp+n)<<endl;

    return 0;
}
