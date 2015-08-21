#include <bits/stdc++.h>

using namespace std;
pair<int,int>arr[22];
int row,col;
int pn;
int x,y;
int sx,sy;
int dx,dy;
int solve(int i,int j){
    if(j==dx && i==dy){
            return 0;

    }
    int up=0,d=0,l=0,r=0;
    if(j!=sx)
    l=1+solve(i,j-1);
    if(j!=dx)
        r=1+solve(i,j+1);
    if(i!=sy  && i-1!=sy &&j!=sx)
        up=1+solve(i-1,j);
    if(i!=dy)
        d=1+solve(i+1,j);


    return min(up,min(d,min(l,r)));

}

int main()
{
    int tc;
    cin >>tc;
    while(tc--){

            cin >>col>>row;
            cin >>sx>>sy;
            cin>>pn;
            for(int i=0;i<pn;i++){
                    cin >>x>>y;
                    arr[i].first=y;
                    arr[i].second=x;

            }
            sort(arr,arr+pn);
            int sum=0;
            for(int i=0;i<pn;i++)
                {
                    dx=arr[i].second;
                    dy=arr[i].first;
                    int getmin=solve(sy,sx);
                    sum=sum+getmin;
                    cout <<sum<<endl;
                    sx=dx;
                    sy=dy;

                }

                cout <<sum<<endl;





    }

    return 0;
}
