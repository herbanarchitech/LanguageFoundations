#include <stdio.h>


void main() {

	int a[10];
	int pos, integers;


	printf("Enter elements for array \n");


	for( int i=0; i < 10; i++) {
		scanf("%d",&a[i]);

	}

	printf("Enter the position to see the element\n");
	scanf("%d",&pos);


	printf("Here are the elements\n");

	for( int i=0; i < 10;i++) {
		printf(" %d ",a[i]);

	}




	
	printf("Here is the %d  is element: %d\n",pos, a[pos]);

}



	
