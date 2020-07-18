/*Given an array of distinct elements. Find the third largest element in it. 

Sample Input:
2
5
2 4 1 3 5
2
10 2

Sample Output:
3
-1*/

#include<bits/stdc++.h>
using namespace std;
void findThirdLArgest(vector<int>&v,int n){
	  int ans;
	  if(v.size()<3){
	  	ans=-1;
	  	cout<<ans<<endl;

	  }
	  else{
	  	sort(v.begin(),v.end(),std::greater<int>());
	  	ans= v[2];
	  	cout<<ans<<endl;
	  }
	}
int main()
{
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		vector<int>v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
        //nth_element(v.begin(),v.begin()+2,v.end(),std::greater<int>());  Valid only for n>2 
        //cout<<v[2]<<endl;
        findThirdLArgest(v,n);
 }
 return 0;
}