/*
Author: 	Adarsh Tripathi
Roll No.: 	MT2023110
Date: 		10/10/2023
*/
#include "../macros.h"


int studentMenu(int opt,int  sock){//used in client.c
printf("------- Welcome to Student Menu --------\n");
	printf("1. View All Courses\n");
	printf("2. Enroll (pick) New Course\n");
	printf("3. Drop Course \n");
	printf("4. View Enrolled Course Details \n");
	printf("5. Change Password\n");
	printf("6. Logout & Exit\n");

	int choice;
	printf("Enter You Choice: ");
	scanf("%d", &choice);
}