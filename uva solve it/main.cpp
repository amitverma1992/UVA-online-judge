#include <bits/stdc++.h>

using namespace std;
int p,q,r,s,t,u;
double e(double x){
    return (p*exp(-x)+q*sin(x)+r*cos(x)+s*tan(x)+t*x*x+u);
}

int main()
{
    while(scanf("%d%d%d%d%d%d",&p,&q,&r,&s,&t,&u)){
        double s=0.0f,f=1.0f;
        double mid,lb,ub;

        while(f-s>0.0001f){
            mid=(s+f)/2;
            lb=e(mid);ub=e(f);
            if((ub < 0 && lb > 0) || (ub >= 0 && lb > ub) || (ub <= 0 && ub > lb)) {
                s = mid;
            } else {
                f = mid;
            }
        }
        if(abs(lb)<=1.0001f)
         printf("%1.4f\n", mid);
        else
            printf("No solution\n");
    }

    return 0;
}
