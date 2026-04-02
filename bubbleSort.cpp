# include<iostream>
using namespace std;


void bubbleSort(int arr[],int n){

	for(int i=0;i<n;i++){

		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){

	int arr[]={5,3,2,4,1};
	bubbleSort(arr,5);
	return 0;
}
