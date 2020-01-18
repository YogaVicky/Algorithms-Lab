#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	clock_t start = clock();
	ll n,mid,beg,end;
	int ans = INT_MAX;
	cin>>n;
	ll a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	beg = 0;
	end = n-1;
	while(beg<=end){
		mid = (beg+end)/2;
		if(a[mid]>0 && a[mid+1]<0){
			cout<<mid+1<<endl;
			break;
		}
		else if(a[mid]<0 && a[mid-1]>0){
			cout<<mid<<endl;
			break;	
		}
		else if(a[mid]==-1){
			end = mid-1;
			ans = mid;
		}
		else
			beg = mid+1;
	}
	clock_t end = clock();
  	double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	cout<<cpu_time_used<<endl;
	return 0;
}