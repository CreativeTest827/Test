# include<iostream>
using namespace std;


void RecBubbleSort(int arr[],int n){
	if(n==1)
		return;

	int count=0;
	for(int i=0;i<n-1;i++){
		if(arr[i]>arr[i+1]){
			int temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
			count++;
		}

	}

	if(count==0)
		return;
	RecBubbleSort(arr,n-1);

}

void printArray(int arr[],int n){

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

}
int main(){
	int arr[]={5,4,1,2,3};
	RecBubbleSort(arr,5);
	printArray(arr,5);
	return 0;
}
