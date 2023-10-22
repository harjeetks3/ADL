/*
Disclaimer: The following functions are just some examples and gimmicks from the lecture.
The functions and the structure of the program do not fully meet the requirements of the
programming guideline. For example, comments, error handling, etc. may be missing.
The following functions are kept quite small, so that they can be clearly
and completely displayed over the beamer in the lecture hall.
If we tried some things live in the lecture, it is even possible
that some program fragments do not compile.
Also some of the functions are not programmed optimally for demonstration purposes.

In our EMIL room you will find the programming guideline and a program
that demonstrates the adherence the programming guideline.
Please adhere to the programming guideline in all your programs
(e.g., for the laboratorys, the exam, etc.).
*/

#include "Lab1_StackList_Lib.h"

void push(sCar* stack[]) {

}

void pop(sCar* stack[]) {
	
}

int isEmpty(sCar* stack[]) {
	
}

int countElements(sCar* stack[]) {
	
}

void printStack(sCar* stack[]) {
	int number = countElements(stack);
	if (number == 0)
		printf("Stack is empty.\n");
	number--;
	while ((number >= 0) && (stack[number] != NULL)) {
		printf("The car %d is:\n", number + 1);
		printf("Brand: %s\n", stack[number]->brand);
		printf("License Plate: %s\n\n", stack[number]->licensePlate);
		number--;
	}
}
