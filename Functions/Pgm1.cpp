//Program to find prime number within a range of two number
#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(int num){
	for(int i=2;i<=sqrt(num);i++){
		if(num%i==0)
			return false;
	}
	return true;
}
int main(){
	int a,b;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		if(isPrime(i)){
			cout<<"\n"<<i;
		}
	}

	return 0;
}