/*  5
*       *       *               *       *       *
*       *                               *       *
*                                               *
*       *                               *       *
*       *       *               *       *       *


*/

// n must be odd
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;  
    
    if(n>=1 && n<=100 && (n%2!=0) ) {
        for(int i=0; i<=n/2; i++){   
            for(int k=n/2; k>=i; k--){ 
                cout<<"*\t";
            }
            
            for(int j=0; j<=2*i-1 ; j++) 
                cout<<"\t";
            cout<<"\t";
                
            for(int k=n/2; k>=i; k--){ 
                cout<<"*\t";
            }
            cout<<endl;
            
        }
        
        for(int i=n/2-1; i>=0; i--){   
            for(int k=n/2; k>=i; k--) 
                cout<<"*\t";
            
            for(int j=2*i-1; j>=0 ; j--) 
                cout<<"\t";
            
            cout<<"\t";
                
            for(int k=n/2; k>=i; k--) 
                cout<<"*\t";
            cout<<endl;
        }
    }
    return 0;
}

