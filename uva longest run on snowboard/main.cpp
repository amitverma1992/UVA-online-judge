#include <bits/stdc++.h>

using namespace std;
#define MIN_LEN -1000000

int arr[101][101];
int sol[101][101];
int row,col;

int generate(int i,int j){
    if(sol[i][j]!=-1)
        return sol[i][j];
        int up=0,down=0,left=0,right=0;
        if(i!=0 && arr[i-1][j]<arr[i][j])
            up=1+generate(i-1,j);
        if(i!=row-1 && arr[i+1][j]<arr[i][j])
            down=1+generate(i+1,j);
        if(j!=0 && arr[i][j-1]<arr[i][j])
            left=1+generate(i,j-1);
        if(j!=col-1 && arr[i][j+1]<arr[i][j])
            right=1+generate(i,j+1);
        return sol[i][j]=max(up,max(down, max(left,right)));

}


int main()
{
    int x,y;
    int tc;
    string name;

    cin >>tc;
    while(tc--){
            memset(arr,0,sizeof(arr));
            memset(sol,-1,sizeof(sol));

            cin >>name>>row>>col;
            for(int i=0;i<row;i++){
                for(int j=0;j<col;j++){
                    cin >>arr[i][j];
                }
            }
            int maxlen=MIN_LEN;
            for(int i=0;i<row;i++){
                for(int j=0;j<col;j++){
                        int len=generate(i,j);
                        if(maxlen<len)
                            maxlen=len;
                }
            }

            cout <<name<<": "<<maxlen+1<<endl;


    }


    return 0;
}
