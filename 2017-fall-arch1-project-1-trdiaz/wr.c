/*****************Write***********************/
void wr()
{
  	char first[MAX_CHAR];
	FILE *fp1;
	TreeNodePtr rootPtr = readFile();
	int c;
	fp1=fopen("ACME_Dir.txt","a+");

	while(fgets(first,MAX_CHAR,fp1)!= NULL)
	{
		fprintf(fp1,"%s %s", first, rootPtr->data);
	}
	fclose(fp1); 

	printf("Creating a new file of updated content\n");
}