#include <bits/stdc++.h>

using namespace std;
int arr[17];
int n;

int isprime(int x){
    if(x==2)
        return 1;
    for(int i=2;i<x;i++){
        if(x%i==0)
            return 0;
    }
    return 1;
}
int notused(int y,int pos1){
    for(int i=1;i<=pos1-1;i++){
        if(arr[i]==y)
            return 0;
    }
    return 1;
}
int check(int pos,int i){
    if(pos==n)
    {
        if(isprime(arr[1]+i) &&isprime(arr[pos-1]+i)&& notused(i,pos))
            return 1;
    }
    if(isprime(arr[pos-1]+i) && notused(i,pos) && pos!=n)
        return 1;
    return 0;
}

int solve(int pos){
    //memset(arr,0,sizeof(arr));
    for(int i=2;i<=n;i++){
            if(check(pos,i)){
                arr[pos]=i;
                //notused[i]=1;

                if(pos==n){
                    for(int i=1;i<=n;i++){
                        cout <<arr[i]<<" ";
                    }
                    cout <<endl;
                   // pos=2;
                   return 1;
                }

                else
                    solve(pos+1);
            }

    }
}

int main()
{
    int tc=1;
    while(scanf("%d", &n)){

        memset(arr,0,sizeof(arr));
        //memset(notused,0,sizeof(notused));
        arr[1]=1;
        //notused[1]=1;
        printf("Case %d:\n",tc);
        solve(2);
        printf("\n");

        tc++;
    }

    return 0;
}
