#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll recur(ll a,ll b){
	if(a>b){
		if(a%b==0){
			return b;
		}
		a=a%b;
		return recur(a,b);
	}
	else{
		if(b%a==0){
			return a;
		}
		b=b%a;
		return recur(a,b);	
	}
}
int main(){
	ll a,b;
	cin>>a>>b;
	if(a<0)
		a = -a;
	if(b<0)
		b = -b;
	cout<<"Recursive"<<endl<<recur(a,b)<<endl;
	cout<<"Iterative"<<endl;
	while(1){
		if(a>b){
			if(a%b==0){
				cout<<b<<endl;
				break;
			}
			a=a%b;
		}
		else{
			if(b%a==0){
				cout<<a<<endl;
				break;	
			}
			b=b%a;
		}
	}
	return 0;
}