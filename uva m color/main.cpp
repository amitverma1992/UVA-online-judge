#include <bits/stdc++.h>

using namespace std;

int graph[101][101];
int n1,n2;
int t,n,e;
vector <int> color(101);
vector <int> color2(101);
//int color[101];
int issafe(int v,int c)
{
    for(int  i=0; i<n; i++)
    {
        if(graph[v][i] && c==color[i])
            return 0;
    }
    return 1;
}

int solve(int v)
{
    if(v==n)
        return 1;

    if(issafe(v,1))
    {
        // cout << v<<endl;

        color[v]=1;

        if(solve(v+1))
            return 1;

        color[v]=0;

    }
    else
    {
        color[v]=2;

        if(solve(v+1))
            return 1;

        color[v]=0;
    }

    return 0;
}

int main()
{
    int count1=0;
    int cnt=0;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        memset(graph,0,sizeof(graph));

        cin >>n>>e;

        for(int j=0; j<e; j++)
        {
            cin >>n1>>n2;
            graph[n1-1][n2-1]=1;
            graph[n2-1][n1-1]=1;
        }
        for(int l=0; l<n; l++)
        {
            for(int x=0; x<n; x++)
                color[x]=2;
            solve(l);
            cnt=count(color.begin(),color.begin()+n,1);
            if(count1 < cnt)
            {
                count1=cnt;
                color2=color;
            }
        }
        cout << count1<<endl;
        for(int i=0; i<n; i++)
        {
            if(color2[i]==1)
                cout<<i+1<<" ";
        }
        cout <<endl;
        count1=0;
        cnt=0;
}
return 0;
}
