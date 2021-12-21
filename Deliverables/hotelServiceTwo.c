#include <stdio.h>

void main() {

	int age;

	printf("Enter your age\n");

	scanf("%d",&age);

	if(age == 60)
		printf("free of charge\n");

	if (age >= 1 && age < 10)
		printf("you owe five dollars\n");

	if((age >10 && age < 60) || (age > 60 ))
		printf("you owe me 30\n");
}




