#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll n,temp,i,j,k;
	cin>>n;
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=1;i<n;i++){
		temp = a[i];
		for(j=i-1;j>=0;j--){
			if(temp<a[j])
				a[j+1] = a[j];
			else
				break;
		}
		a[j+1]=temp;
	}
	for(k=0;k<n;k++)
		cout<<a[k]<<" ";
	cout<<endl;	
	return 0;
}