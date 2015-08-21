#include <bits/stdc++.h>

using namespace std;
int N[50001];
int Q;
int n;
int q;

int main()
{
    scanf("%d",&n);
    for(int i=0; i<n; i++)
        scanf("%d",&N[i]);
    scanf("%d",&q);
    for(int i=0; i<q; i++)
    {
        scanf("%d",&Q);
        int lo=0;
        int hi=n;
        int mid;
        while(lo<hi)
        {
            mid=(lo+hi)/2;
            if(N[mid]==Q)
                break;
            else if(N[mid]<Q)
                lo=mid+1;
            else
                hi=mid;
        }


        if(N[mid]==Q)
        {


            if ( mid - 1 >= 0 ) printf ("%d", N [mid - 1]);
            else printf ("X");
            if ( mid + 1 < n ) printf (" %d", N[mid + 1]);
            else printf (" X");
            printf ("\n");
        }
        else
        {
            if ( N[mid] < Q ) printf ("%d", N[mid]);
            else if ( mid - 1 >= 0 ) printf ("%d", N[mid - 1]);
            else printf ("X");
            if ( N[mid] > Q ) printf (" %d",N[mid]);
            else if ( mid + 1 < n ) printf (" %d", N[mid + 1]);
            else printf (" X");
            printf ("\n");
        }
    }


    return 0;
}
