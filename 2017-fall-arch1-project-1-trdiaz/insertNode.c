/******************InsertNode**********************/
/*Adding nodes to tree*/
void insertNode(TreeNodePtr *treePtr,char word[MAX_CHAR])
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
	}
	else if (strcmp(word,(*treePtr)->data)>0){
		insertNode(&((*treePtr)->rightPtr),word);
	}
	else{
		number++;
	}
}
