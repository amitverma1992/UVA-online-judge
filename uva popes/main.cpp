#include <bits/stdc++.h>

using namespace std;

int main()
{
    int y;
    int p;
    while(scanf("%d",&y)){
        cin >>p;
        int a[p];


        int count=0;
        for(int i=0;i<p;i++)
            cin >>a[i];
            int s,f;
            int j;
            for(int i=0;i<p;i++){
                int cnt=1;
                int sum=1;
                for( j=i;sum<=y;j++){
                        sum=sum+a[j+1]-a[j];
                    if(sum<=y){

                        cnt++;
                    }
                }
                if(count<cnt){
                    count=cnt;
                    s=i;
                    f=j-1;
                    }
            }
            cin.ignore();
            cout <<count<<" "<<a[s]<<" "<<a[f];


    }

    return 0;
}
