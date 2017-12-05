/*******************SearchUser**********************/
/*Searching for a employee in the binary tree*/
/*Additional Instances Besides The Ones In Text File*/
void searchUser(TreeNodePtr *treePtr,char word[MAX_CHAR])
{
	TreeNode *temp = NULL;
	if(*treePtr == NULL)
	{
		printf("Search Complete. Employee: %s is NOT active. ", word);
	}
	else if(strcmp(word,(*treePtr)->data)<0){
		searchUser(&((*treePtr)->leftPtr),word);
		
	}
	else if (strcmp(word,(*treePtr)->data)>0){
		searchUser(&((*treePtr)->rightPtr),word);
	}
	else{
	printf("Search Complete. Employee: %s is Active. ", word);}
}