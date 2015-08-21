#include <bits/stdc++.h>

using namespace std;

int main()
{
int s1,s2,t1,t2;
int n,d;
int a,b;
while(1){
        scanf("%d%d",&a,&b);
        s1=0,s2=1,t1=1,t2=0;
        if(a==1 && b==1)
            break;
        while(1){
                n=s1+t1;d=s2+t2;
            if(n==a && d==b)
                break;
            if(a*d<n*b){
                printf("L");
                t1=s1+t1;
                t2=s2+t2;
            }
            else{
                printf("R");
                s1=s1+t1;
                s2=s2+t2;
            }
        }
        cout <<endl;


}

    return 0;
}
