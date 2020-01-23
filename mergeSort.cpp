#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
void merge(ll a[100],ll l,ll m,ll r){
	ll i,j,k;
	ll n1 = m-l+1;
	ll n2 = r-m;
	ll t1[n1],t2[n2];
	for(i=0;i<n1;i++)
		t1[i] = a[i+l];
	for(i=0;i<n2;i++)
		t2[i] = a[i+m+1];
	i=0;
	j=0;
	k=0;
	while(i<n1 && j<n2){
		if(t1[i]<=t2[j]){
			a[k] = t1[i];
			i++;
		}
		else{
			a[k] = t2[j];
			j++;	
		}
		k++;
	}
	while(i<n1){
		a[k]=t1[i];
		i++;
		k++;
	}
	while(j<n2){
		a[k]=t2[j];
		j++;
		k++;
	}
}
void mergeTwo(ll a[100],ll l, ll r){
	if(l<r){
		ll m = (l+r)/2;
		mergeTwo(a,l,m);
		mergeTwo(a,m+1,r);
		merge(a,l,m,r);
	}
}
int main(){
	ll n,i;
	cin>>n;
	ll a[n],b[n],c[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		b[i] = a[i];
	mergeTwo(b,0,n-1);
	for(i=0;i<n;i++)
		cout<<b[i]<<" ";
	cout<<endl;
	for(i=0;i<n;i++)
		c[i] = a[i];
	// megreThree(b);
	// for(i=0;i<n;i++)
	// 	cout<<c[i]<<" ";
	// cout<<endl;
	return 0;
}
// 1. Given 'n' numbers, compute GCD using DC.   Similarly, LCD
// 2. Count the number of 1's in a binary array using DC
// 3. Count the number of negative numbers in an integer array using DC
// 4. Implement Towers of Hanoi.
// 5. Implement 2-way, 3-way merge sort.    Trace the code to understand how the stack is updated.