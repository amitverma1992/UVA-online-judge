#include <bits/stdc++.h>

using namespace std;
int m,k;
vector<int> a(501,0);
int getlb(){
    int lo=*max_element(a.begin(),a.begin()+m);
    int h=accumulate(a.begin(),a.begin()+m,0);
    cout <<k<<endl;

    while(lo<h){
            int x= (lo+h)/2;

            int req=1,cl=0;

        for(int i=0;i<m;i++){
            if(cl+a[i]<=x)
                cl+=a[i];
                else{
                    req++;
                    cl=a[i];
                }

        }
        if(req<=k)
            h=x;
        else
            lo=x+1;
    }
    return lo;

}
int main()
{
    int tc;
    cin >>tc;
    while(tc--){
        cin >>m>>k;
        for(int i=0;i<m;i++)
            cin >>a[i];
        int low=getlb();
        cout <<low<<endl;
        int sum=0;
        for(int i=0;i<m;i++){
            if(sum+a[i]<=low){sum+=a[i];
                cout <<a[i]<<" ";}
                else{
                        sum=0;
                        i--;
                        cout <<"/ ";



                }
        }
        cout <<endl;


    }
    return 0;
}
