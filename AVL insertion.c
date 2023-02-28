#include <stdio.h>
#include <stdlib.h>

typedef struct LINKED_TREE_NODE_s *LINKED_TREE_NODE;
typedef struct LINKED_TREE_NODE_s{
	LINKED_TREE_NODE right;
	LINKED_TREE_NODE left;
	int key;
	int height;
}LINKED_TREE_NODE_t[1];

typedef struct LINKED_TREE_s *LINKED_TREE;
typedef struct LINKED_TREE_s{
	LINKED_TREE_NODE root;
}LINKED_TREE_t[1];

LINKED_TREE linked_tree_init(){
	LINKED_TREE tree = (LINKED_TREE)malloc(sizeof(LINKED_TREE_t));
	tree -> root = NULL;
	return tree;
}

LINKED_TREE_NODE linked_tree_node_init(int key){
	LINKED_TREE_NODE node = (LINKED_TREE_NODE)malloc(sizeof(LINKED_TREE_NODE_t));
	node -> left = NULL;
	node -> right = NULL;
	node -> key = key;
	
	return node;
}

int find_height(LINKED_TREE_NODE node){ 
    if (node == NULL){
    	return 0;
    } 
    return node->height; 
} 
  
int find_max(int x, int y){
	if(x>y){
		return x;
	}
	if(y>x){
		return y;
	} 
} 
  
int find_balance(LINKED_TREE_NODE N){ 
    if (N == NULL) 
        return 0; 
    return find_height(N->left) - find_height(N->right); 
} 

LINKED_TREE_NODE rotate_right(LINKED_TREE_NODE y){ 
    LINKED_TREE_NODE x = y->left; 
    LINKED_TREE_NODE T2 = x->right; 
  
    x->right = y; 
    y->left = T2; 
  
    y->height = find_max(find_height(y->left), find_height(y->right))+1; 
    x->height = find_max(find_height(x->left), find_height(x->right))+1; 
  
    return x; 
} 
  
LINKED_TREE_NODE rotate_left(LINKED_TREE_NODE x){ 
    LINKED_TREE_NODE y = x->right; 
    LINKED_TREE_NODE T2 = y->left; 
  
    y->left = x; 
    x->right = T2; 
  
    x->height = find_max(find_height(x->left), find_height(x->right))+1; 
    y->height = find_max(find_height(y->left), find_height(y->right))+1; 
  
    return y; 
} 

void linked_tree_print_horizontal(LINKED_TREE_NODE node, int l){
	int i;
	if(node != NULL){
		linked_tree_print_horizontal(node -> right, l+1);
		for(i = 0;i < l;i++){
			printf("      ");
		}
		printf("%d\n", node ->key);
		linked_tree_print_horizontal(node -> left, l+1);
	}
}

LINKED_TREE_NODE avl_insert(LINKED_TREE_NODE node, int key){
	if(node == NULL){
		node = linked_tree_node_init(key);
	}
	else{
		if(key < node -> key){
			node -> left = avl_insert(node -> left, key);
		}
		else if(key > node -> key){
			node -> right = avl_insert(node -> right, key);
		}
	}
	return node;
  
    node->height = 1 + max(height(node->left),height(node->right)); 
  

    int balance = find_balance(node); 
  
    if (balance > 1 && key < node->left->key){   //left-left
    	return rotate_right(node); 
    } 
  
    if (balance < -1 && key > node->right->key){ //right-right
    	return rotate_left(node); 

    } 
  
    if (balance > 1 && key > node->left->key){ //left-right
        node->left =  rotate_left(node->left); 
        return rotate_right(node); 
    } 
  
    if (balance < -1 && key < node->right->key){ //right-left
        node->right = rotate_right(node->right); 
        return rotate_left(node); 
    } 
  
    return node; 
} 

void I(LINKED_TREE tree, int key){
	if(tree == NULL){
		printf("error\n");
	}
	else{
		tree -> root = avl_insert(tree -> root, key);
	}
}
  
int main(){ 
	LINKED_TREE t1 = linked_tree_init();


	I(t1, 9);
	I(t1, 5);
	I(t1, 10);
	I(t1, 0);
	I(t1, 6);
	I(t1, 11);
	I(t1, -1);
	I(t1, 1);
	I(t1, 2);


	linked_tree_print_horizontal(t1->root,0);
  
  	return 0; 
} 
