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

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "Lab1_StackList_Lib.h"

int main() {
	sElement* last = NULL;

	int choice;
	int number = 0;

	printf("Welcome to our stack program!\n\n");

	while (1) {
		printf("What would you like to do next?\n");
		printf("\t1: Push new element on the stack\n");
		printf("\t2: Pop element from the stack\n");
		printf("\t3: Count elements in the stack\n");
		printf("\t4: Print stack\n");
		printf("Press any other key to exit this program.\n");

		if (scanf("%d", &choice) != 1)
			return 0;

		switch (choice) {
		case 1:
			last = push(last);
			break;
		case 2:
			last = pop(last);
			break;
		case 3:
			number = countElements(last);
			printf("The stack has %d elements.\n\n", number);
			break;
		case 4:
			printStack(last);
			break;
		default:
			return 0;
		}
	}
	return 0;
}
