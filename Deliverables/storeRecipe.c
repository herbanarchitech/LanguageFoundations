#define ARRAY_LEN 6
#include <stdio.h>


void main() {

	int a[6] = {1, 4, 5, 6 , 0, 8};
	int pos = 3;
	 


	for( int i=0; i < ARRAY_LEN; i++) {
		printf("%d\n",a[i]);

	}


	printf("Here is the %d  is element: %d ",pos, a[pos]);

}



	
