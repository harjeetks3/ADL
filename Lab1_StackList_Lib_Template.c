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

sElement* push(sElement* last) {
	
}

sElement* pop(sElement* last) {
	
}

int isEmpty(sElement* last) {
	
}

int countElements(sElement* last) {
	if (isEmpty(last) == 0)
		return 0;
	sElement* temp = last;
	int number = 0;
	while (temp != NULL) {
		number++;
		temp = temp->prev;
	}
	return number;
}

void printStack(sElement* last) {
	if (isEmpty(last) == 0)
		printf("Stack is empty.\n");
	sElement* temp = last;
	int number = countElements(last);
	while (temp != NULL) {
		printf("The car %d is:\n", number);
		printf("Brand: %s\n", temp->car->brand);
		printf("License Plate: %s\n\n", temp->car->licensePlate);
		temp = temp->prev;
		number--;
	}
}
