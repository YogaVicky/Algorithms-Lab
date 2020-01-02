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
	ll n,i,res;
	cin>>n;
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	res = a[0];
	for(i=1;i<n;i++){
		res = recur(res,a[i]);	
	}
	cout<<res<<endl;
	return 0;
}
