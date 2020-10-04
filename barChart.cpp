/*     
5
3
1
0
7
5
                        *
                        *
                        *       *
                        *       *
*                       *       *
*                       *       *
*       *               *       *

*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n]={0};
    if(n>=1 && n<=30){
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]<0 || a[i]>10){
                return 0;
            }
        }
        int max=a[0];
        for(int i=1; i<n; i++){
            if(a[i]>max){
                max=a[i];
            }
        }
        
        for(int i=max; i>0; i--){
            for(int j=0; j<n; j++){
                if(a[j]>=i){
                    cout<<"*\t";
                }else{
                    cout<<"\t";
                }
            }
            cout<<"\n";
        }   
    }
    return 0;
}


