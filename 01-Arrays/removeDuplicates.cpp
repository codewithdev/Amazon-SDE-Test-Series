/*Remove the Deuplicate from the Vector*/
/*
Standard Input:

2
4 
2 2 4 5
8
1 2 1 1 4 5 5 8

Standard Output:

2 4 5
1 2 4 5*/


#include <iostream>
#include <vector>
#include <algorithm>

void remove(std::vector<int> &v){
	auto end = v.end();
	for (auto i = v.begin(); i != end; ++i) {
		end = std::remove(i + 1, end, *i);
	}
	v.erase(end, v.end());
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
	remove(v);
	for (auto i = v.cbegin(); i != v.cend(); ++i)
		std::cout << *i << ' ';
}
	return 0;
}