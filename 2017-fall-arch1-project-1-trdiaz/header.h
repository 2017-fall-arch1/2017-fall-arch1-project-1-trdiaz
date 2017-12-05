#define MAX_CHAR 30
struct treeNode {
       char data[MAX_CHAR];
       int count;
       struct treeNode *leftPtr, *rightPtr;
 };

int number;

typedef struct treeNode TreeNode;
typedef TreeNode *TreeNodePtr;

void insertNode (TreeNodePtr *treePtr,char word[]);
void delete(TreeNodePtr *treePtr,char word[MAX_CHAR]);
void searchUser(TreeNodePtr *treePtr,char word[MAX_CHAR]);
void addUser (TreeNodePtr *treePtr,char word[MAX_CHAR]);
void alphabetic(TreeNodePtr treePtr);
void menuDisplay();
void wr();


