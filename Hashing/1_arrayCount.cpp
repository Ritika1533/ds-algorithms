#include<iostream>
using namespace std;
void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int arr[10]={1,2,5,7,4,7,7,3,2,1};
	int n;
	printArray(arr,10);
	cout<<"enter the number count to be checked : ";
	cin>>n;
    //depending upon the maximum element of array declare the array
	int hash[8]={0};
	for(int i=0;i<10;i++){
		hash[arr[i]]=hash[arr[i]]+1;
	}
	int count=hash[n];
	cout<<count<<endl;
}