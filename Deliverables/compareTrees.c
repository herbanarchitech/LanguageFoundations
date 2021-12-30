/* As you cross a forest you can't help but admire the nature around you including the many species of trees. Despite tour interest , you are very unskilled botanist and have a lot of trouble identifying different tress. A friend gives you some guidance and you decide to write a program that will give you the name of the tree based on its charactereistics.
 *
 * There are four type of trees:
	* The "Tinuviel" is 5 meters high or less and its leaves composed of 8 or more leaflets 
	* The "Calaelen" is 10 meters high or more and its leaves are composed of 10 or more leaflets 
	* The "Falarion" is 8 meters high or less and its leave are composed of 5 or fewer leaflets 
	* The "Dorthronion" is 12 meters tall or more and its leaves are composed of 7 or fewer leaflets 
	*
Your program should read the height and the number of leaflets of a given tree (both integers) , and should be able to determine and display the name of corresponding tree. If the height and number of leaflets does not match any of the tree types descriptions , your program should display "Uncertain"

*/
#include <stdio.h>
void main() {
	int height, number; // height will be used for to measure for tress and number will represent the number of leaflefts 



	printf("Enter the height of the tree and and number of leaflets ");

	scanf("%d %d",&height, &number);

	if(height <= 5  && number >=8) {
		printf("Tinuviel");


		// this will represent the beginning iflelse statement
		// anyithing other than less than five meters and more than 8 leaflets will fall in these categories
		} else{
			// in this series of a nested if else statments will use be used to identify the characteristics of trees based on user inputs
			// in this elseif statemt  if the tree is at most eight meters and leaflets are at least 10 
			if(height <=8 && number <=5){

				printf("Falarion\n");
			} else {
				if(height >=10 && number >=10) {
					printf("Calaelen");
				} else {
					if(height >=12 && number >=7) {
						printf("Dorthronion");
					} else {

						printf("Uncertain");
					}
				}

			}
		}


}






		







		





		



