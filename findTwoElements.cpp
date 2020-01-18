#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	map<ll,ll>m;
	ll n,i,st,ed,r;
	cin>>n;
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	sort(a.begin(),a.end());
	cin>>r;
	st = 0;
	ed = n-1;
	while(st!=ed){
		if(a[st] + a[ed] == r){
			cout<<"YES"<<endl;
			cout<<a[st]<<" "<<a[ed]<<endl;
			break;
		}
		else if(a[st] + a[ed] < r)
			st++;
		else
			ed--;
	}
	if(st>=ed)
		cout<<"NO"<<endl;
	return 0;
}