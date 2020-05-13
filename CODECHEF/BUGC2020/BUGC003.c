#include<stdio.h>

// Declare a global structure since we need to pass
// it to a function
struct exam
{
	int roll;
	int marks;
	char name[20];
};

// array of structure object
struct exam obj[2];

// declaration of the function
void structfun(struct exam *obj);

// function to print structure elements switch
// two different objects
void structfun(struct exam *obj)
{
	//Values using the object 1
	printf("\nName is : %s", obj[0].name);
	printf("\nRoll No. is : %d", obj[0].roll);
	printf("\nMarks are : %d", obj[0].marks);

	printf("\n");

	// Values using the object 2
	printf("\nName is : %s", obj[1].name);
	printf("\nRoll No. is : %d", obj[1].roll);
	printf("\nMarks are : %d", obj[1].marks);
}

// main function
int main()
{
	// assign values using the object 1
	//exam.obj;
	scanf("%d", &obj[0].marks);
	scanf("%d", &obj[0].roll);
	gets(obj[0].name);

	// assign values using the object 1
	scanf("%d", &obj[1].marks);
	scanf("%d", &obj[1].roll);
	gets(obj[1].name);

	// Passing structure to Function
	structfun(obj);

	return 0;
}