#include <bits/stdc++.h>

using namespace std;
bool a[1048577];
inline int power(int n,int b)
{
    int ret=1;
    for(int i=1; i<=b; i++)ret*=n;
    return ret;
}

int main()
{
    int tc;
    int tt,th;
    int totnode;
    cin  >>tc;
    while(tc--)
    {
        cin >>th>>tt;

        totnode=power(2,th)-1;



        memset(a,0,(totnode+1)*sizeof(bool));
        int r;
        int x;
        for(int i=1; i<=tt; i++)
        {
            x=1;
            while(x<=totnode)
            {
                if(a[x]==0 && 2*x<=totnode)
                {
                    a[x]=1;
                    x=2*x;
                }
                else if(a[x]==1 && 2*x+1<=totnode)
                {
                    a[x]=0;
                    x=2*x+1;
                }
                else
                {
                    r=x;
                    break;
                }


            }
        }
        cout << r;

        if(tc)
            cout <<endl;
    }
    //cin.ignore();

    return 0;
}
