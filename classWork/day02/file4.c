#include <stdio.h>

struct student{
	char name[55];
	int id;
	char gender;
	char phone_number[13];
	float m1,m2,m3,m4;
	float average;
};
int main(){
	struct student student;
	

	printf("Enter student name: ");
	scanf("%s",student.name);
       
       	printf("Enter student id: ");
        scanf("%d",&student.id);
	
	printf("Enter student gender: ");
        scanf("%c",&student.gender);
       
       	printf("Enter student phone number: ");
        scanf("%s",student.phone_number);

	printf("Enter marks of m1: ");
        scanf("%f",&student.m1);
	printf("Enter marks of m2: ");
        scanf("%f",&student.m2);
        printf("Enter marks of m3: ");
        scanf("%f",&student.m3);
        printf("Enter marks of m4: ");
        scanf("%f",&student.m4);


	student.average=(student.m1 +student.m2 +student.m3 +student.m4)/4.0;

	printf("\nStudent Details:\n");
	printf("Name: %s\n",student.name);
	printf("ID: %d\n",student.id);
	printf("Gender:%c\n",student.gender);
	printf("Phone number: %s\n",student.phone_number);
	printf("Average marks: %.2f\n",student.average);

	return 0;
}





