#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll recur(ll a,ll b){
	if(a==b)
		return a;
	if(a>b)
		a=a-b;
	else
		b=b-a;
	return recur(a,b);
}
int main(){
	ll a,b,m;
	cin>>a>>b;
	cout<<"Recursive"<<endl<<recur(a,b)<<endl;
	cout<<"Iterative"<<endl;
	while(a!=b){
		if(a>b)
			a = a-b;
		else
			b = b-a;
	}
	cout<<a<<endl;
	return 0;
}