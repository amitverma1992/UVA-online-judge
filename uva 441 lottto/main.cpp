#include <iostream>

using namespace std;

int main()
{
    int countr=0;
    int arr[14];
    int k;

    while(1){
        cin >> k;
        if(k==0)
            break;
        for(int i=0;i<k;i++)
            cin >>arr[i];
            if(countr!=0)
                cout <<endl;
            countr=1;

    for(int a=0;a<k;a++){
        for(int b=a+1;b<k;b++){
            for(int c=b+1;c<k;c++){
                for(int d=c+1;d<k;d++){
                    for(int e=d+1;e<k;e++){
                        for(int f=e+1;f<k;f++){
                            cout <<arr[a]<<" "<<arr[b]<<" "<<arr[c]<<" "<<arr[d]<<" "<<arr[e]<<" "<<arr[f]<<endl;
                        }
                    }
                }
            }
        }
    }

    }


    return 0;
}
