#include <bits/stdc++.h>

using namespace std;
int M,C;
vector <int> a[20];

int shop(int ml,int gid){
    int max=0;
    if(ml<0)
        return -10;
    if(ml >=0 && gid==C)
        return M-ml;
    for(int i=0;i<a[gid].size();i++){
        int mx=shop(ml-a[gid][i],gid+1);
        if(max<mx)
            max=mx;

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
    cout <<shop(M,0)<<endl;
    return 0;
}
