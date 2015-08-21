#include <bits/stdc++.h>

using namespace std;
int n;
int h;



int main()
{
    int tc;
    cin >>tc;
    while(tc--){
        cin.get();
        cin >>n>>h;
        string s="";
        s.append(n,'0');
        for(int i=0;i<h;i++){
            s[n-i-1]='1';
        }
        cout <<s<<endl;
        while(next_permutation(s.begin(),s.begin()+n)){
            cout << s<<endl;
        }
        if(tc)
            cout <<endl;


    }

    return 0;
}
