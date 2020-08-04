#include<iostream>
using namespace std;
int maxSubarraySum(int *arr,int n){
	int cs=0,ms=0;
	for(int i=0;i<n;i++){
		cs+=arr[i];
		if(cs<0){
			cs=0;
		}
		ms= max(cs,ms);
	}
	return ms;
}
int main()
{
	int n;
	cin>>n;
	int *arr= new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<maxSubarraySum(arr,n)<<endl;
}