/****************Alphabetize************************/
/*for sorting alphabetically*/
void alphabetic(TreeNodePtr treePtr)
{
	if(treePtr!=NULL){
		alphabetic(treePtr->leftPtr);
		printf("\n%s\n", treePtr->data);
		alphabetic(treePtr->rightPtr);
	}
}