#include<stdio.h>
void main() {
	int a[20], i, j, n, key, flag = 0, low, high, mid, temp;
	printf("Enter value of n : ");
	scanf("%d", &n);
	for (int i=0;i<=n-1;i++){
		printf("Enter element for a[%d] : ",i);
		scanf("%d",&a[i]);
		}
	// Write the code to read an array of elements

	printf("Enter key element : ");
	scanf("%d", &key);

	// Write the code to sort the elements using any sorting technique
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("After sorting the elements in the array are\n");
	// Write the code to display the elements
	for(int i=0;i<n;i++){
		printf("Value of a[%d] = %d\n",i,a[i]);
	}
	low =0 ; // Complete the statement
	high =n-1 ; // Complete the statement
	
	// Write the code to search an element using  binary search process
	while(low<=high){
		mid=(low+high)/2;
	if ( a[mid]==key) { // Write the condition part
