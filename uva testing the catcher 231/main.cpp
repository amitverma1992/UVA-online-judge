#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> a;

    int x,y;
    int i=1;
    while(i){
            scanf("%d",&y);
    if(y==-1)
        break;
        a.push_back(y);
    while(1){
        scanf("%d",&x);
        if(x==-1)
            break;
        a.push_back(x);
    }
    int lds[a.size()];
    for(int i=0;i!=a.size();i++)
        lds[i]=1;
    for(int i=1;i!=a.size();i++){
        for(int j=0;j<=i;j++){
            if(lds[i]<lds[j]+1 && a[i]<a[j])
                lds[i]=lds[j]+1;
        }
    }
    printf("Test #%d:\n",i);
    printf("  maximum possible interceptions: %d\n", *max_element(lds,lds+a.size()));
    i++;
    a.clear();


    }
printf("\n");

    return 0;
}
