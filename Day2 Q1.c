#include <stdio.h>
int main(){
	int n,d,i,j,arr[50];
	printf("Enter the no. of elements of the array:");
	scanf("%d",&n);
	
	printf("Enter the elements of the array:");
	for(i=0;i<n;i++)
	scanf("%d", &arr[i]);
	
	printf("Enter the element to be deleted:");
	scanf("%d", &d);
	
	for(i=0;i<n;i++){
		if(arr[i]==d){
			for(j=i;j<n-1;j++){
					arr[j]=arr[j+1];
			}
		}
	}
	n--;
	i--;
	
	printf("The array after deletion is:");
	for(i=0;i<n;i++)
	printf("%d ", arr[i]);
	return 0;
}
	

