#include<iostream>
#include<string>
#include<cstring>
using namespace std;

char reVal(int num) 
{ 
    if (num >= 0 && num <= 9) 
        return (char)(num + '0'); 
    else
        return (char)(num - 10 + 'A'); 
} 

void revRem(char * a){
    int len=0;
    len=strlen(a);
    for(int i=len-1; i>=0; i--){
        cout<<a[i];
    }
}
void convert(char a[],int d,int b){
    
    int i=0;
    while(d>0){
        a[i++]=reVal(d%b);    
        d=d/b;
    }
    
    a[i]='\0';
    revRem(a);
}

int main(){
    int deci,base;
    char a[100];
    
    cin>>deci;
    cin>>base;
    
    if((deci>=0 && deci<=512) && (base>=2 && base<=10)){
        convert(a,deci,base);
    }
    
    return 0;
}
