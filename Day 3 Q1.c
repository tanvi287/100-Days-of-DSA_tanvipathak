#include <stdio.h>
int main(){
	int i,n,k,arr[50],c=0;
	printf("Enter the no. of elements of array:");
	scanf("%d", &n);
	
	printf("Enter the elements of an array:");
	for(i=0;i<n;i++)
	scanf("%d", &arr[i]);
	
	printf("Enter the elementv to be searched:");
	scanf("%d", &k);
	
	for(i=0;i<n;i++){
		c++;
		if(arr[i]==k){
			printf("Found at index %d\n", i);
			printf("Comparisons = %d", c);
			return 0;
		}
	}
	printf("Not Found\n");
	printf("Comparison = %d", c);
	return 0;
}
