#include<bits/stdc++.h>
using namespace std;
void iterative_bin_search(vector<int> arr,int n,int key){
	int low=0;
	int high=n-1;
	while(low<high){
		int mid=(high-low)/2;
		if(arr[mid]==key){
			cout<<"Element Found ";
			return;
		}
		else if(arr[mid]<key){
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	cout<<"Element Not Found	";
	return;
}
int main(){
	int n,key;
	cout<<"Enter The Number of Terms in an Array";
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++){
		cout<<"Enter Elements of an array	";
		cin>>arr[i];
	}
	cout<<"Enter The Element Which Is To Be Searched For	";
	cin>>key;
	sort(arr.begin(),arr.end());
	iterative_bin_search(arr,n,key);
	return 0;
}
