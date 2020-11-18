//Write a program to find the binary coefficient (nCr)
//nCr=fact(n)/(fact(r)*fact(n-r));
#include<iostream>
using namespace std;
int fact(int num){
    int f=1;
    for(int i=2;i<=num;i++){
        f*=i;
    }
    return f;
}
int main(){
    int n,r;
    cin>>n>>r;
    int nCr=fact(n)/(fact(r)*fact(n-r));
    cout<<nCr;
    return 0;
}