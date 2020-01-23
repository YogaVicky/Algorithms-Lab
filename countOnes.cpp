#include<bits/stdc++.h>
using namespace std;
int countOnes(int a[100],int l,int r){
	if(l<r){
		int m = (l+r)/2;
		return countOnes(a,l,m) + countOnes(a,m+1,r);
	}
	else 
		return a[l];
}
int main(){
	int a[100],n,i;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<countOnes(a,0,n-1)<<endl;
	return 0;
}