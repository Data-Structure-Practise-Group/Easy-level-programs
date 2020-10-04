//program to find max-min in array
//input- 6
//15
//30
//40
//4
//11
//9
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,a[10000],i;
   cin>>n;
    if(n>=1 && n<=10000){
        for(i=0; i<n; i++){
            cin>>a[i];
            if(a[i]<0 && a[i]>1000000000){
                return 0;
            }
        }
        
        std::sort(a+1,a+i);
        
        int span = a[i-1]-a[1];
        cout<<span;
    }
    
    
    return 0;
}



