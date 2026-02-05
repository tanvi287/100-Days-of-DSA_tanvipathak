#include <stdio.h>
int main(){
	int i,j,a1,a2,k,temp;
	int x[50],y[50],z[50];

	
	printf("Enter the no. of elements of array 1:");
	scanf("%d", &a1);
	
	printf("Enter the elements array 1:");
	for(i=0;i<a1;i++)
	scanf("%d", &x[i]);
	
	printf("Enter the no. of elements of array 2:");
	scanf("%d", &a2);
	
	printf("Enter the elements array 2:");
	for(i=0;i<a2;i++)
	scanf("%d", &y[i]);
	
	for(i=0;i<a1;i++)
	z[i]=x[i];
	
	for(i=0;i<a2;i++)
	z[a1+i]=y[i];
	
		k=a1+a2;
		
		for(i=0;i<k-1;i++){
			for(j=i+1;j<k;j++){
				if(z[i]>z[j]){
					temp=z[i];
					z[i]=z[j];
					z[j]=temp;
				}
			}
		}
	printf("Mereged array is:\n");
	for(i=0;i<k;i++)
	printf("%d ",z[i]);
	
	return 0;
}
