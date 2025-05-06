#include<stdio.h>
#include<string.h>
void main() {
	char a[20][20];
	int i, n, j;
	char temp[20];
	printf("Enter value of n : ");
	scanf("%d", &n);
	//Write the code to read n strings.
	for (int i=0;i<n;i++){
		printf("Enter string for a[%d] : ",i);
		scanf("%s",a[i]);
	}
	printf("Before sorting the strings in the array are\n");
	//Write the code to print the strings before sorting
	for(int i=0;i<n;i++){
		printf("String at a[%d] = %s\n",i,a[i]);
	}
	
	//Write the code to sort the strings using bubble sort technique
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(strcmp(a[i],a[j])>0){
				strcpy(temp,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],temp);
			}
		}
	}
	printf("After sorting the strings in the array are\n");
	//Write the code to print the strings after sorting
	for(int i=0;i<n;i++){
		printf("String at a[%d] = %s\n",i,a[i]);
	}
	
}
