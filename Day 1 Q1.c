#include <stdio.h>
int main(){
	int n,arr[100],i,e,p;
	printf("Enter the no. of elements:");
	scanf("%d", &n);
	
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	scanf("%d", &arr[i]);
	
	printf("Enter element to insert:");
	scanf("%d", &e);
	
	printf("Enter position:");
	scanf("%d", &p);
	
	for(i=n;i>=p;i--){
		arr[i]=arr[i-1];
	}
	arr[p-1]=e;
	n++;
	
	printf("Array elements after inserting is:");
	for(i=0;i<n;i++)
	printf("%d",arr[i]);
	return 0;
}
