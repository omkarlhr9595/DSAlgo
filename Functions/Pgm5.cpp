#include<iostream>
using namespace std;
int fact(int num){
    int f=1;
    for(int i=2;i<=num;i++){
        f*=i;
    }
    return f;
}
int nCr(int n,int r){
    int nCr=fact(n)/(fact(r)*fact(n-r));
    return nCr;
}
int main(){
    int n;
    cin>>n;
    
    for(int i=0;i<=5;i++){
        for(int j=0;j<=i;j++){
            cout<<nCr(i,j)<<" ";
        }
        cout<<endl;
    }

    return 0;
}