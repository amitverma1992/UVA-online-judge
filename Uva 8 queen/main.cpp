#include <bits/stdc++.h>

using namespace std;

int tc,x,y;
int col[9];
int lc =0;

int safe(int queen,int row)
{
    for(int  i=1; i<=queen-1; i++)
    {

        if(col[i]==row || abs(col[i]-row)==abs(i-queen))
            return 0;
    }
    return 1;
}

void solve(int queen)
{
    for(int i=1; i<=8; i++)
        if(safe(queen,i))
        {
            col[queen]=i;
            if(queen==8 && col[y]==x)
            {

                printf("%2d %d", ++lc, col[1]);
                for (int j = 2; j <= 8; j++) printf(" %d", col[j]);
                printf("\n");

            }
            else
                solve(queen+1);

        }
}
int main()
{
    scanf("%d",&tc);
    while(tc--)
    {
        memset(col,0,sizeof(col));
        fflush(stdin);
        cin.get();
        fflush(stdin);
        cin >>x>>y;
        lc=0;
        printf("SOLN COLUMN\n");
        printf(" # 1 2 3 4 5 6 7 8\n\n");
        solve(1);
        if (tc) printf("\n");


    }

    return 0;
}
