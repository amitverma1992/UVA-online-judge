#include <bits/stdc++.h>

using namespace std;
int n;
int nt;
int arr[21];
vector <int>sel(21,0);
vector <int>fsel(21,0);
int minleft=10000000;
int chose(int track,int sum){
    if(sel[track]==0 && sum-arr[track]>=0)
        return 1;
    return 0;
}

int solve(int sum,int i){
    if(sum<=0)
    return 1;
    if(chose(i,sum)){
            sel[i]=1;
            sum=sum-arr[i];
            if(minleft > sum && sum>=0){
                    minleft=sum;
                    fsel=sel;
            }

            if(solve(sum,i+1)==1)
                return 1;
            sel[i]=0;
            sum=sum+arr[i];
        }
        else{
            if(solve(sum,i+1)==1)
                return 1;
        }

    return 0;
}

int main()
{
    while(scanf("%d",&n)){

            cin >>nt;
            minleft=1000000;

            for(int i=0;i<nt;i++){
                cin>>arr[i];
                sel[i]=0;
                }
            solve(n,0);
                  int tot=0;
                    for(int j=0;j<nt;j++){
                        if(fsel[j]==1){
                            tot=tot+arr[j];
                            cout <<arr[j]<<" ";
                        }
                    }
                    printf("sum:%d\n",tot);}



    return 0;
}
