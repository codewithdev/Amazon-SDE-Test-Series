/*Given two sorted arrays A and B, such that the arrays may have some common elements. 
*/

/*1 <= T <= 100
1 <= M,N <= 105
1 <= A[i], B[i] <= 106

Example:
Sample Input:
2
5 4
2 3 7 10 12
1 5 7 8 
3 3
1 2 4
1 2 7

Sample Output:
35 
10
*/

#include<bits/stdc++.h>
using namespace std;
int maxSumPath(int *arr1, int*arr2, int m, int n){
	int res=0, s1=0,s2=0;
	int i=0,j=0;
	while(i<m and j<n){
			if(arr1[i]<arr2[j]){
				s1+=arr1[i];
			}
			else if(arr1[i]>arr2[j]){
				s2+=arr2[j];
			}
			else{
				res+= max(s1,s2);
				s1=0, s2=0;
				while(i<m and j<n and arr1[i]==arr2[j]){
					res= res+ arr1[i++];
					j++;
				}
			}
		}
		while(i<m)
			s1+= arr1[i++];
		while(j<n)
			s2+= arr2[j++];
		res+= max(s1,s2);
		return res;
	}
	
int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>m>>n;
		int *arr1= new int[m];
		int *arr2= new int[n];
		for(int i=0;i<m;i++){
			cin>>arr1[i];
		}
		for(int i=0;i<n;i++){
			cin>>arr2[i];
		}
		cout<<maxSumPath(arr1,arr2,m,n);
	}
}
