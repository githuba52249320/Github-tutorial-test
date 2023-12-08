#include<stdio.h>
#include<stdlib.h>

struct BinaryTree{
	int data;
	struct BinaryTree *left;
	struct BinaryTree *right;
};

typedef struct BinaryTree node;

int main(){
	
	node *root = NULL;
	
	root = (node *)malloc(sizeof(node));
	root->data = 10;
	root->left = NULL;
	root->right = NULL;
	
	return 0;
}

