#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int n;
    cin >>n;
    for(int i=0;i<n;i++){
        cin >>str;
        int siz=str.size();
        int flag=0;
        int totsc=0;
        int sc=0;
        if(str[0]=='O')
            sc++;
        else
            sc=0;
        totsc+=sc;
        for(int j=1; j<siz;j++){

        if(str[j]=='O' && str[j-1])
            sc++;
        else
            sc=0;
        totsc+=sc;
        }
        cout <<totsc<<endl;
    }
    return 0;
}
