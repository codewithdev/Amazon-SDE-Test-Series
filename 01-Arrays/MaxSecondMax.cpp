/*Given an array arr[] of size N of positive integers which may have duplicates.
The task is to find the maximum and second maximum from the array, 
and both of them should be distinct, so If no second max exists, then the second max will be -1.

Constraints:
1 <= T <= 100
1 <= N <= 106
1 <= arr[i] <= 106

Example:
Input:
3
5
1 2 3 4 5
3
2 1 2
2
5 5

Output:
5 4
2 1
5 -1*/

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void findLargest(vector<int>&v,int n){
	ll max= INT_MIN;
	ll smax= INT_MIN;
	if(v.size()<2)
	{
		max= v[0];
		smax =-1;
	}
	else{
		for(int i=0;i<n;i++){
			if(max<=v[i]){
				smax= max;
				max= v[i];
			}
            else if(v[i]>smax){
            	smax= v[i];
            }
            else{
               smax= -1;
               max= v[i];
            }
			}
		}
		cout<<max<<" "<<smax<<endl;
	}

int main()
{
    int t;
    ll n;
    cin>>t;
    while(t--){
       cin>>n;
       vector<int>v(n);
       for(ll i=0;i<n;i++){
       	cin>>v[i];
       }
       findLargest(v,n);       
    }

}