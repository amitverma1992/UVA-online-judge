#include <bits/stdc++.h>

using namespace std;
int M,C;
vector <int> a[20];
vector <int> sol[20];
int safe(int i,int j){
    if(M-a[i][j]>=0)
        return 1;
    return 0;
}

int shop(int ml,int gid){
    int max;
    if(ml<0)
        return 0;
        if(gid==C && ml>=0)
        {
            return M-ml;
        }
    for(int i=0;i<a[gid].size();i++){
        if(safe(gid,i)){
            sol[gid][i]=1;
            int mx;
            shop(mx=ml-a[gid][i],gid+1)

            sol[gid][i]=0;

        }
    }
    return max;

}

int main()
{
    int n;
    int p;
    scanf("%d",&M);
    scanf("%d",&C);
    for(int i=0;i<C;i++)
    {
        cin >>n;
        for(int j=0;j<n;j++){
            cin >>p;
            a[i].push_back(p);
        }

    }
    shop(M,0);

    return 0;
}
