# include<iostream>
using namespace std;

int largest(int arr[],int n){

	int max=arr[0];
	for(int i=0;i<n;i++){

		if(max<arr[i]){
		      max=arr[i];
		}
		
	}
	return max;
}
int main(){
	int arr[]={8,10,5,7,9};

	int result=largest(arr,5);

	cout<<"Max is: "<<result<<endl;
	return 0;
}
