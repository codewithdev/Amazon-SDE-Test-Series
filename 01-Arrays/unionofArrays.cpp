#include<bits/stdc++.h>
using namespace std;

vector<int>findUnion(int arr1[], int arr2[], int n, int m){
	vector<int>v;
  int i=0;
  int j=0;
  while(i<n and j<m){
  	while(i+1<n and arr1[i]== arr1[i+1]){
  		i++;
  	}
  	while(j+1<m and arr2[j]== arr2[j+1]){
  		j++;
  	}
  	if(arr1[i]<arr2[j]){
  		v.push_back(arr1[i++]);
  	}
  	else if(arr2[j]<arr1[i]){
  		v.push_back(arr2[j++]);
  	}
  	else{
  		 v.push_back(arr2[j++]);
  		 i++;
  	}
  }
  while(i<n){
  	while(  i+1<n  &&  arr1[i]==arr1[i+1]  )
            i++;
        v.push_back(arr1[i++]);
  }
  while(j < m)
    {
        while(  j+1<m  &&  arr2[j]==arr2[j+1]  )
            j++;
        v.push_back(arr2[j++]);
    }
    return v;
}
int main(){
	int n,m;
	cin>>n>>m;
	int arr1[n],arr2[m];
	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}
	for(int i=0;i<m;i++){
		cin>>arr2[m];
	}
	vector<int>ans= findUnion(arr1,arr2,n,m);
	for(int x:ans){
		cout<<x<<" ";
	}
	cout<<endl;
	return 0;
}