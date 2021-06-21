#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int is used so that our function needs to return some integer at the end of the execution
// main() is a method
//int main()
//{
//
//
//	char characterName[] = "John";
//	int characterAge = 35;
//
//	// Print output to terminal!
//	printf("There once was a man named &s\n", characterName);
//	printf("he was %d years old.\n", characterAge);
//
//	characterAge = 30;
//
//	printf("He really liked the name %s\n", characterName);
//	printf("but did not like being %d.\n", characterAge);
//
//	// return an integar for int main()
//	return 0;
//}


//void main()
//{
//
//	// Print Hello World in terminal!
//
//	printf("Hello World with void!\n");
//
//}

//int main()
//{
//	int i = (double)floor(2.1);
//
//	printf("%d", i);
//
//	return 0;
//}	

//int main()
//{
//	printf("Comments are fun");
//
//	return 0;
//
//}

/* Constant*/
//int main()
//{
//	int const FAV_NUM = 5;
//	printf("%d\n", FAV_NUM);
//	//num = 8;
//	printf("%d\n", FAV_NUM);
//
//	printf("%d", 90);
//
//
//}


//int main()
//{
//
//	//double gpa;
//	//printf("Enter your gpa: ");
//	//scanf_s("%lf", &gpa); // &age the & is a pointer..
//	//printf("your gpa is %f", gpa);
//
//
//	//char grade;
//	//printf("Enter your grade: ");
//	//scanf_s("%c", &grade);
//	//printf("Your grade is %c", grade);
//
////	char name[10];
////	printf("Enter your name: ");
////	fgets(name, 10, stdin);
////	printf("Your name is %s", name);
////
////	return 0;
//
//
//	double num1;
//	double num2; 
//	printf("Enter First number: ");
//	scanf_s("%lf", &num1);
//	printf("Enter Second number: ");
//	scanf_s("%lf", &num2);
//
//	printf("Answer: %d", num1 + num2);
//
//	return 0;
//
//}

//int main()
//{
//
//	char color[20];
//	char pluralNoun[20];
//	char celebrityF[20];
//	char celebrityL[20];
//
//	printf("Enter a color: ");
//	scanf_s("%s", color, 20);	
//	printf("Enter a plural noun: ");
//	scanf_s("%s", pluralNoun, 20);
//	printf("Enter a celebrity name: ");
//	scanf_s("%s%s", celebrityF, celebrityL, 20, 20);
//
//
//	printf("Roses are %s\n", color);
//	printf("%s are blue\n", pluralNoun);
//	printf("I love %s %s\n", celebrityF, celebrityL);
//
//}


//int main()
//{
//	
//	//int luckyNumbers[] = {4, 8, 15, 15, 23};
//	//printf("%d\n", luckyNumbers[1]);
//	//luckyNumbers[1] = 200;
//	//printf("%d", luckyNumbers[1]);
//
//	char pharse[] = "Array";
//
//	printf("%s", pharse);
//
//
//	return 0;
//}



//int main()
//{
//	sayHi(); 
//	return 0;
//}
//
//int sayHi()
//{
//	printf("Hello User");
//
//	return 0;
//}


//void sayHi();
//
//int main()
//{
//	sayHi();
//	return 0;
//}
//
//void sayHi()
//{
//	printf("Hello User");
//
//	return 0;
//}

//void sayHi(char Name[], int age)
//{
//	printf("Hello %s, you are %d\n", Name, age);
//}
//
//
//int main()
//{
//
//	sayHi("Mike", 99);
//	sayHi("Tom",96 );
//	sayHi("Jake", 1);
//
//	return 0;
//}



////Prototyping
//double cube(double num);
//
//int main() {
//
//	printf("Answer: %f", cube(7.0));
//	return 0;
//}
//
//double cube(double num)
//{
//	double result = num * num * num;
//	return result;
//}


//Logical Statements



//int maxx(int num1, int num2, int num3) {
//
//	int result;
//
//	if (num1 >= num2 && num1 >= num3) {
//
//		result = num1;
//	}
//	else if (num2 >= num1 && num2 >= num3) {
//
//		result = num2;
//	}
//	else {
//		result = num3;
//	}
//
//
//	return result;
//
//}
//
//
//
//int main()
//{
//	printf("%d", max(23, 44, 21));
//
//	return 0;
//}


//int main() {
//
//	// Negation Operator
//	if (!(3 < 2)) {
//		printf("True");
//	}
//	else {
//		printf("False");
//	}
//		return 0;
//}



// Calculator


/*
In C and in C++ single quotes identify a single character, 
while double quotes create a string literal. 
'a' is a single a character literal, while "a" is a string literal containing an 'a' 
and a null terminator (that is a 2 char array).
*/


//int main()
//{
//	double num1;
//	double num2;
//	char op;
//	
//
//	
//	printf("Enter a number: ");
//	scanf_s("%lf", &num1);
//	printf("Enter operator: ");
//	scanf_s(" %c", &op);
//	printf("Enter a number: ");
//	scanf_s("%lf", &num2);
//
//
//	if (op == '+') {
//		printf("%f", num1 + num2);
//	}
//	else if (op == '-') {
//		printf("%f", num1 - num2);
//	}
//	else if (op == '/') {
//		printf("%f", num1 / num2);
//	}
//	else if (op == '*') {
//		printf("%f", num1 * num2);
//	}
//	else {
//		printf("Invalid Operator");
//	}
//
//	return 0;
//}





//// switch is the shortcut of if-else statements 
//int main() {
//
//	char grade = 'v';
//
//
//	switch (grade) {
//
//
//	case 'A':
//		printf("you did great!");
//		break;
//
//	case 'B':
//		printf("you did alright!");
//		break;
//
//	case 'C':
//		printf("you did poorly!");
//		break;
//
//	case 'D' || 'F' :
//		printf("you did badly!");
//		break;
//
//	default :
//		printf("Invalid grade!");
//
//
//	}
//
//
//
//
//	return 0;
//}


// struct

//Student data type

//struct Student {
//
//	char name[50];
//	char major[50];
//	int age;
//	double gpa;
//
//};
//
//
//
//int main() {
//
//	// Created a container for student1
//	struct Student student1;
//
//	student1.age = 22;
//	student1.gpa = 3.2;
//	strcpy( student1.name, "Jim");
//	strcpy( student1.major, "ComputerScience");
//
//
//	struct Student student2;
//
//	student2.age = 22;
//	student2.gpa = 3.2;
//	strcpy(student2.name, "Jane");
//	strcpy(student2.major, "Business");
//
//	// we cannot do the following 
//	// As we cannot store strings in an array
//	//student1.name = "fjwofjpofwff"
//
//	printf("%f\n", student1.gpa);
//	printf("%s\n", student1.name);
//	printf("%s", student2.name);
//
//
//	return 0;
//}


//// Pointers 
//int main()
//{
//    int *ptr, q;
//    q = 50;
//    /* address of q is assigned to ptr */
//    ptr = &q;
//    /* display q's value using ptr variable */
//    printf("%d", *ptr);
//    return 0;
//}



// Implicit type casting --> Type Promotion

//int main() {
//	short a = 10; //initializing variable of short data type	
//	int b; //declaring int variable
//	b = a; //implicit type casting
//	printf("%d\n", a);
//	printf("%d\n", b);
//}

// Explicit type casting 

//int main()
//{
//	float a = 1.2;
//	//int b  = a; //Compiler will throw an error for this
//	double b = (double)a + 1;
//	printf("Value of a is %f\n", a);
//	printf("Value of b is %lF\n", b);
//	return 0;
//}





// while loop
//int main() {
//
//	int index = 1;
//
//	while (index <= 5) {
//
//		printf("%d\n", index);
//		index++;
//	}
//	return 0;
//}


// Do while loop

//int main() {
//
//	int index = 6;
//
//	do {
//		printf("%d\n", index);
//		index++;
//	} while (index <= 6);
//
//
//	return 0;
//
//}


// Guessing game
//int main() {
//
//	int secretNumber = 5;
//	int guess = 1;
//	int guessCount = 0;
//	int guessLimit = 3;
//	int outOfGuesses = 0;
//
//	while (guess != secretNumber && outOfGuesses ==0) {
//		if (guessCount < guessLimit) {
//			printf("Enter a number: ");
//			scanf_s("%d", &guess);
//			guessCount++;
//		}
//		else {
//			outOfGuesses = 1;
//		}
//
//	}
//
//	if (outOfGuesses == 1) {
//
//		printf("Out of guesses");
//
//	} else {
//		printf("You win!");
//	}
//
//	return 0;
//}


// while loop
//int main() {
//
//
//	int i = 1;
//	while (i <= 5) {
//
//		printf("%d\n", i);
//		i++;
//	}
//
//
//	// for loop
//
//	int a;
//	for (a = 1; a <= 5; a++) {
//
//		printf("%d\n", a);
//
//	}
//	return 0;
//}


//// For looping an array
//int main() {
//	
//	int luckyNumbers[] = { 4, 8, 15, 16, 23, 42 };
//
//	int i;
//
//	for (i = 0; i <= 5; i++) {
//
//		printf("%d\n", luckyNumbers[i]);
//
//	}
//	return 0;
//}

// Double for loop
//int main() {
//
//	int nums[5][2] = {
//
//		{1,2},
//		{3,4},
//		{5,6},
//		{7,8},
//		{9,10}
//
//	};
//
//	int i, j;
//
//	for (i = 0; i < 5; i++) {
//
//		for (j = 0; j < 2; j++) {
//			printf("%d,", nums[i][j]);
//		}
//
//		printf("\n");
//	}
//	return 0;
//}


// Accessng memory addresses (RAM)-- Pointers

//int main() {
//
//	int age = 30;
//
//	// * means address of a variable, in this case pAge is refering to a memory location
//	// when i am storing a memory of a int variable , i do int allowed by * and name of variable =
//	int* pAge = &age;
//
//	double gpa = 3.4;
//	double* pGpa = &gpa;
//	
//	char grade = 'A';
//	char* pGrade = &grade;
//
//	printf("age: %p\n", pGpa);
//
//	return 0;
//}



// Dereferencing Pointers
/*
Dereferencing a pointer means getting the value that is stored in the memory location pointed by the pointer.
The operator * is used to do this, and is called the dereferencing operator.


so dereferencing a pointer means that pAge will be the value that is stored in the memory! 

*/

//int main() {
//
//	int age = 30;
//	int* pAge = &age;
//
//	printf("%d", *&*&age);
//
//	return 0;
//
//}



// Write a file
//#pragma warning(disable:4996)
//
//int main() {
//	
//	//FILE is like a data type
//	//fpointer is a pointer to a physical file to the file "employees.txt".
//
//	
//	//errno_t fopen_s(
//	//   FILE** pFile,
//	//   const char *filename,
//	//   const char *mode
//	//);
//
//	FILE* fpointer = fopen("employees.txt", "w");
//
//	// fprintf() works like printf function, but it writes information to a file
//	fprintf(fpointer,"Jim, Salesman\nPam, Receptionist\n");
//
//	fclose(fpointer);
//
//	return 0;
//}



//// read a file
//#pragma warning(disable:4996)
//int main() {
//
//	char line[255];
//
//	FILE* fpointer = fopen("employees.txt", "r");
//
//	// fget reads the first line of the file and store into variable line
//	fgets(line, 255, fpointer);
//	printf("%s", line);
//
//
//	return 0;
//}











