/*Given an array(0-based indexing), you have to find the max sum of i*A[i] where A[i] is the element 
at index i in the array. The only operation allowed is to rotate(clock-wise or counter clock-wise) 
the array any number of times.


Input
1
4
8 3 1 2
Output
29*/


#include<bits/stdc++.h>
using namespace std;
int maxSumArray(int *arr, int n){
	int csum=0;
	for(int i=0;i<n;i++){
		csum+=arr[i];
	}
	int cval=0;
	for(int i=0;i<n;i++){
		cval+=i*arr[i];
	}
	int res= cval;
	for(int i=1;i<n;i++){
		int nextval= cval-(csum-arr[i-1]) + arr[i-1]*(n-1);
		cval= nextval;
		res= max(cval,nextval);
	}
	return res;
}
int main(){
	int t,n;
	cin>>t;
    while(t--){
    	cin>>n;
    	int *arr= new int[n];
    	for(int i=0;i<n;i++){
    		cin>>arr[i];
    	}
    	cout<<maxSumArray(arr,n)<<endl;
    }
}