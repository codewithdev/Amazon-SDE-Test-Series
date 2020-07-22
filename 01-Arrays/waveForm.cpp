/*Sort the Array in the Wave Form*/


/*Input:
2
5
1 2 3 4 5
6
2 4 7 8 9 10

Output:
2 1 4 3 5
4 2 8 7 10 9*/

#include<iostream>
using namespace std;
void convertoWave(int *arr, int n){
	for(int i=0;i<n;i+=2){
		if(i>0 and a[i-1]>a[i]){
			swap(a[i],a[i-1]);
		}
		if(i<n-2 and a[i+1]>a[i]){
			swap(a[i+1],a[i]);
		}
	}
}
int main()
{
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int *arr= new int[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		convertoWave(arr,n);
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
	}
}