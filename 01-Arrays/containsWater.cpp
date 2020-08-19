#include<bits/stdc++.h>
using namespace std;
int maxArea(int *arr,int n);
long long maxArea(long long a[], int n){
	int i=0;
	int j=n-1;
	int res=0;
	while(i<j){
			int curr=0;
			if(a[i]<=a[j]){
				curr= (j-i)*a[i];
				i++;
		}
		else{
			curr= (j-i)*a[j];
			j--;
		}
		if(curr>res){
			res= curr;
		}
		if(i==j){
			break;
		}
	}
	return res;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		cout<<maxArea(arr,n)<<endl;
	}
	return 0;
}