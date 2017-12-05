/***************Delete*************************/
void delete(TreeNodePtr *treePtr,char word[MAX_CHAR])
{	
 TreeNode *temp = NULL;
 if (*treePtr != NULL)
     {
        if(strcmp(word,(*treePtr)->data)<0)
         {
             delete(&((*treePtr)->leftPtr),word);

         } 
         if(strcmp(word,(*treePtr)->data)>0)
         {
             delete(&((*treePtr)->rightPtr),word);
         }
	 else{ *treePtr = temp;
	 free(*treePtr);
	
	count--;
	number--;}	
   }
 else{
	printf("Deleted from Directory: %s ", word);}
}
