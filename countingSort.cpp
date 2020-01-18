#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll n,temp,i,j,k;
	cin>>n;
	vector<ll>a(n);
	vector<ll>a0,a1,a2;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++){
		if(a[i]==0)
			a0.push_back(a[i]);
		else if(a[i]==1)
			a1.push_back(a[i]);
		else
			a2.push_back(a[i]);
	}
	i=0;
	for(auto it = a0.begin();it!=a0.end();it++){
		a[i]=*it;
		// cout<<*it<<" "<<a[i]<<endl;
		i++;
	}
	for(auto it = a1.begin();it!=a1.end();it++){
		a[i]=*it;
		// cout<<*it<<" "<<a[i]<<endl;
		i++;
	}
	for(auto it = a2.begin();it!=a2.end();it++){
		a[i]=*it;
		// cout<<*it<<" "<<a[i]<<endl;
		i++;
	}
	// cout<<endl;
	for(k=0;k<n;k++)
		cout<<a[k]<<" ";
	cout<<endl;	
	return 0;
}