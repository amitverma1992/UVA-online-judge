#include <bits/stdc++.h>

using namespace std;
int size;
char arr[5][5];
int sol[5][5];



int main()
{
    memset(sol,0,sizeof(sol));

    while(1){
        cin >>size;
        if(size==0)
            break;
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++)
                cin >> arr[i][j];
        }
        int k;
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                if(sol[i][j]==0 && a[i][j]=='.'){
                        sol[i][j]=1;
                    for(k=0;a[i][k]!='#';k++){
                        if(sol[i][k]=='1'){
                            sol[i][j]=0;
                            break;
                        }

                    }

                    for(int l=k+1;l<n;l++)
                }
            }
        }

    }
    return 0;
}
