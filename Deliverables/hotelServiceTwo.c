/*The hostel in which you stop for the night changes its prices according to the age of the customer and the weight of their luggage. The rules are not very clear, so you decide to write a small program that will easily allow you and your travel companions to know the price of one night.

One room costs nothing if you are 60 (the age of the innkeeper), or 5 dollars if you are less than 10 years old. For everyone else, the cost is 30 dollars plus an additional 10 dollars if you bring more than 20 pounds of luggage. Your program should read the customer's age first, then the weight of their luggage, then output the price they have to pay.

*/
#include <stdio.h>

  void main() {

	int age, normal_fee , extra_fee, children_fee, sixty_year_old_fee;
	normal_fee = 30, extra_fee =10, sixty_year_old_fee = 0; children_fee = 5;

	printf("Enter your age\n");

	scanf("%d",&age);

	printf("Enter the amount of luggage\n");

	int luggage;

	scanf("%d",&luggage);



	if(age == 60) 
		printf("%d\n",sixty_year_old_fee);

	if (age >= 1 && age < 10)
		printf("%d\n", children_fee);

	if(age >10 && age < 60) {

		if(luggage < 20){

			printf("%d",normal_fee);
		}else{
			printf("%d",normal_fee+=extra_fee);
		}


	}

	if(age > 60) {
		if(luggage < 20) {
			printf("%d",normal_fee);

		} else {
			printf("%d",normal_fee+=extra_fee);

		}

	}

		
}




