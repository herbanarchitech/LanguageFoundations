/* Your grandparents gave you a fantastic cooking recipe bu you never remeber ho much of each ingredient you have to use! There are 10 ingredients in the recipe and quantities neeed for each them are given as input (in gram) . Your program must read 10 integers ( the quantities needed for each of the ingredients, in order ) and store them in an array. It shoud then radan integer which represents an ingredient's 	ID ( between 0 and 9) , and out the corresponding quantity */
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



	
