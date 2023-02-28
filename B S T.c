#include<stdio.h>
#include<stdlib.h>

typedef struct n{
	int data;
	struct n *left;
	struct n *right;
}node;




int insertion(node *tree,int x){
	
	if(tree==NULL){
		node *root=(node*)malloc(sizeof(node));
		root->left=NULL;
		root->right=NULL;
		root->data=x;
		return root;
	}
		
	if((tree->data)<x){
		tree->right =insertion(tree->right,x);
		return tree;
	}
	
	if((tree->data)>x){
		tree->left =insertion(tree->left,x);
		return tree;
	}
}




void traverse(node *tree){
	if(tree==NULL){
		return;
	}
	traverse(tree->right);
	printf("%d ",tree->data);
	traverse(tree->left);
}




int search(node *tree,int key){
	if(tree==NULL){
		return -1;
	}
	
	if(tree->data==key){
		return 1;
	}
	
	if(search(tree->right,key)==1){
		return 1;
	}
	if(search(tree->left,key)==1){
		return 1;
	}
	
	else{
		return -1;
	}
}





int max(node *tree){
	while(tree->right != NULL){
		tree=tree->right;
	}
	return tree->data;
}





int min(node *tree){
	while(tree->left != NULL){
		tree=tree->left;
	}
	return tree->data;
}



int main(){
	node *tree=NULL;
	tree=insertion(tree,12);
	tree=insertion(tree,200);
	tree=insertion(tree,190);
	tree=insertion(tree,213);
	tree=insertion(tree,56);
	tree=insertion(tree,24);
	tree=insertion(tree,18);
	tree=insertion(tree,27);
	tree=insertion(tree,28);
	traverse(tree);
	printf("\n");
	printf("Result of search:%d\n",search(tree,24));
	printf("max:%d\nmin:%d\n",max(tree),min(tree));
}

