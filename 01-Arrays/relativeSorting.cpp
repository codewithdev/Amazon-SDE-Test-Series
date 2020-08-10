#include<bits/stdc++.h>
using namespace std;
int first(int *arr, int low, int high, int x, int n){
	if(high>=low){
		int mid= low+(high-low)/2;
		if((mid==0 or x>arr[mid-1]) and arr[mid]==x)
			return mid;
		if(x>arr[mid])
			return first(arr,(mid+1),high, x,n);
		return first(arr,low,(mid-1),x,n);
	}
	return -1;
}
void SortedArray(int *arr1, int *arr2, int n1, int n2){
	int temp[n1], visited[n1];
	for(int i=0;i<n1;i++){
		temp[i]= arr1[i];
		visited[i]=0;
	}
	sort(temp, temp+n1);
	int index=0;
	for(int i=0;i<n2;i++){
          int f= first(temp,0,n1-1,arr2[i],n1);
          if(f==-1){
          	continue;
          }
          for(int j=f;(j<n1 and temp[j]==arr2[i]);j++){
          	arr1[index++]= temp[j];
          	visited[j]=1;
          }
	}
	for(int i=0;i<n1;i++){
		if(visited[i]==0){
			arr1[index++]= temp[i];
		}
	}
}
void printArray(int *arr, int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n1,n2;
	    cin>>n1>>n2;
	    int *arr1= new int[n1];
	    int *arr2= new int[n2];
	    for(int i=0;i<n1;i++){
	    	cin>>arr1[i];
	    }
	    for(int i=0;i<n2;i++){
	    	cin>>arr2[i];
	    }
       
       SortedArray(arr1,arr2,n1,n2);
       printArray(arr1,n1);

	}
	return 0;
}