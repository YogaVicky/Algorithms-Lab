#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll n,i;
	map<ll,ll>m;
	cin>>n,i;
	vector<ll>a(n);
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		if(m.find(a[i])==m.end()){
			m[a[i]] = i;
		}
		else{
			if(m[a[i]]>i)
				m[a[i]] = i;		
		}
	}
	cout<<m[-1]<<endl;
	return 0;
}