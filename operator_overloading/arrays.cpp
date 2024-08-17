//arrays
#include<iostream>
using namespace std;
int main(){
	//	declaring an array
// 	int arr[6]={10,23,34,56,67,88};
//    // 	printing elements of array:
//    for (int i=0; i<6; i++){
//    	cout<<arr[i]<<" ";
//	}
//    // sum of all elements of array:
//    int i=0,sum=0;
//		while(i<6){
//			sum=sum+arr[i];
//			i++;
//		}
//		cout<<sum;
//		
//	//----------	linear search   -----------
//	int ar[6]={1,2,3,4,5,6};
//	int element=6;
//	for (i=0;i<6;i++){
//		if(element==ar[i]){
//			cout<<"element found at index: "<<i;
//		}
//		
//	}
//	cout<<"---------------------------------------------"<<endl;
//	
//	--------------  insertion sort    ---------------------
int a[5]={43,32,78,0,1};
cout<<"unsorted original array:";
for (int k=0;k<5;k++){
	cout<<a[k]<<" ";
}
for (int i=1; i<5;i++){
	int current=a[i];
	int j=i-1;
	while(j>=0 && a[j]>current ){
		a[j+1]=a[j];   
		j--;
	}
	a[j+1]=current; 
}
cout<<"sorted original array:";
		for (int k=0;k<5;k++){
	cout<<a[k]<<" ";}
}
	


