#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll recur(ll a,ll b,ll mn){
	if(a%mn==0 && b%mn==0)
		return mn;
	return recur(a,b,mn-1);
}
int main(){
	ll a,b,mn;
	cin>>a>>b;
	mn = min(a,b);
	cout<<"Iterative"<<endl;
	if(mn==1){
		cout<<mn<<endl;
	}
	while(mn!=1){
		if(a%mn==0 && b%mn==0){
			cout<<mn<<endl;
			break;
		}
		mn--;
	}
	cout<<"Recursive"<<endl<<recur(a,b,mn)<<endl;
	return 0;
}