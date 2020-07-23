/*Given an array A of N positive numbers. The task is to find the first Equilibium Point in the array. 
Equilibrium Point in an array is a position such that the sum of elements before it is equal to the sum of elements after it.

Expected Time Complexity: O(n) 

/*Input:2
1
1
5
1 3 5 2 2

Sample Output:
1
3
*/

#include<iostream>
using namespace std;
#define ll long long int 
int findEquilb(int *arr, ll n){
	int lsum=0, sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	for(ll i=0;i<n;i++){
		sum-=arr[i];
		if(lsum==sum)
		return i+1;
	lsum+=arr[i];
	}
	return -1;
}
int main()
{
	ll t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int *arr= new int[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		findEquilb(arr,n);
	}
}