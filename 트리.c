#include <stddef.h>

typedef struct Node{
	struct Node* l;
	struct Node* r;
	char data;
}Node;

Node* CreateNode(char data){
	Node* prev = (Node*)malloc(sizeof(Node*));
	prev->data = data;
	prev->l = NULL;
	prev->r = NULL;
	
	return prev;
}


Node* dd[100];main(){
	int i=0,j=0,n;
	for(n=scanf("%d",&n);i<n;i++){
		dd[(int)('A'+i)] = CreateNode((char)('A'+i));
	}
	
}
