#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll n,i;
	cin>>n;
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++){
		if(a[i]==-1){
			cout<<i<<endl;
			break;
		}
	}
	return 0;
}