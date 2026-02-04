#include <stdio.h>

int main(){
	int n,i,a[100];
	printf("Enter the no. of elements:");
	scanf("%d",&n);
	
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("Reversed array is:");
	for(i=n-1;i>=0;i--)
	printf("%d ", a[i]);
	
	return 0;
}
