#include <bits/stdc++.h>

using namespace std;

string list1[101];
int n;
int r;
string rules;
int sr;
string dig[]={"0","1","2","3","4","5","6","7","8","9"};
void generate(int v,string s){
    if(v==sr){
        cout<<s<<endl;
        return ;
    }
    switch(rules[v]){
    case '#':
        for(int i=0;i<n;i++){
            generate(v+1,s+list1[i]);
        }
        break;
    case '0':
        for(int i=0;i<10;i++){
            generate(v+1, s+dig[i]);
        }
        break;
    }
}
int main()
{

    while(scanf("%d", &n)==1){
    for(int i=0;i<n;i++)
        cin >> list1[i];
        cin >> r;
        for(int i=0;i<r;i++){
            cin >>rules;
            sr=rules.size();
            cout <<"--"<<endl;
            generate(0,"");
            //rules.clear();

    }
    }


    return 0;
}
