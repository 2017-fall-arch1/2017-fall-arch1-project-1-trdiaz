/*******************AddUser**********************/
/*inserting a employee into a tree*/
/*Additional Instances Besides The Ones In Text File*/
/*Identical to InsertNode except a difference occurence.*/
void addUser(TreeNodePtr *treePtr,char word[MAX_CHAR])
{
	TreeNode *temp = NULL;
	if(*treePtr == NULL)
	{
		temp = (TreeNode *)malloc(sizeof(TreeNode));
		temp->leftPtr = NULL;
		temp->rightPtr = NULL;
		strcpy(temp->data, word);
		*treePtr = temp;
	}
	else if(strcmp(word,(*treePtr)->data)<0){
		insertNode(&((*treePtr)->leftPtr),word);
		count++;
	}
	else if (strcmp(word,(*treePtr)->data)>0){
		insertNode(&((*treePtr)->rightPtr),word);
		count++;
	}
	else{
		number++;
	}
}