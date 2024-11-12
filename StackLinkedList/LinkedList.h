typedef struct usIntNode
{
	int val;
	struct usIntNode* next;
} usIntNode;

//this function creats a new node and paces it at the head of the list
usIntNode* createNewNode(usIntNode* headOfList, unsigned int value);

//this function removes the node at the head of the list
usIntNode* removeNode(usIntNode* theNode);