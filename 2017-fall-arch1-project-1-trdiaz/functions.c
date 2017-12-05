#include "header.h"
/***************ReadTextFile*************************/
/*reading strings from file*/
static int count = 0;
TreeNodePtr readFile()
{
	char first[MAX_CHAR];
	FILE *fp1;
	TreeNodePtr rootPtr=NULL;
	int c;
	fp1=fopen("ACME_Dir.txt","r");

	while(fgets(first,MAX_CHAR,fp1)!= NULL)
	{
		insertNode(&rootPtr,first);
		count++;
	}

	system("PAUSE");
	fclose(fp1);

	return rootPtr;
}
/****************Menu************************/
void menuDisplay()
{
	TreeNodePtr rootPtr = readFile();

	int n =0;
	int in;
	char temp[MAX_CHAR];
	char newName[MAX_CHAR];
	char newName_[MAX_CHAR] = " ";
	char newName2[MAX_CHAR];
	char newName3[MAX_CHAR] = "\n";

	while(n!=5)
	{
		printf("\n---------------ACME SOLUTIONS---------------\n");
		printf("Welcome to ACME Solutions Personnel  Directory\n");
		printf("(0) Search Current Personnel Directory\n");
		printf("(1) List Current Personnel Directory\n");
		printf("(2) Add a User to the Personnel Directory\n");
		printf("(3) Remove a User from the Personnel Directory\n");
		printf("(4) Write Edited File\n");
		printf("(5) Terminate Program\n");

		n = scanf("%d", &in);
		printf("User Input (%d)\n", in);

		if(n){
		}

		switch(in)
		{

		case 0:
			printf("Enter a First Name & Last Name you wish to find in the Directory\n"); 
			printf("Name Entered: "); 
			scanf("%s %s",newName, newName2);
			strcat(newName,newName_);
			strcat(newName,newName2);
			strcat(newName,newName3);
			searchUser(&rootPtr,newName);
			/*alphabetic(rootPtr);*/
			break;
			
		case 1:
			printf("Listing all (%d) employees currently registered.\n", count);
			alphabetic(rootPtr);
			break;

		case 2: 
			printf("Enter a First Name & Last Name you wish to add to the Directory\n"); 
			printf("Name Entered: "); 
			scanf("%s %s",newName, newName2);
			strcat(newName,newName_);
			strcat(newName,newName2);
			strcat(newName,newName3);
			addUser(&rootPtr,newName); 
			/*alphabetic(rootPtr)*/;
			break;

		case 3:
			printf("Delete an employee from the Directory\n"); 
			scanf("%s %s",newName, newName2);
			strcat(newName,newName_);
			strcat(newName,newName2);
			strcat(newName,newName3);
			delete(&rootPtr,newName);
			/*alphabetic(rootPtr);*/
			break;

		case 4: 
			alphabetic(rootPtr);
			wr();
			

			break;

		case 5: 
			printf("Thank you for using ACME Solutions Personnel Directory...\n\n");
			exit(0);
			break;

		default: 
			printf("Wrong Input\n");
			break;
		}
	}
}
