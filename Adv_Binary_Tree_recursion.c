#include<stdio.h>
#include<stdlib.h>

struct Binary_Tree{
	int data;
	struct Binary_Tree *left;
	struct Binary_Tree *right;
};

typedef struct Binary_Tree node;

node *insertion_node(node *ptr, int value){
	
	if(ptr == NULL){
		ptr = (node *)malloc(sizeof(node));
		ptr->data = value;
		ptr->left = NULL;
		ptr->right = NULL;
		return ptr;
	}
	else{
		if(value < ptr->data){
		ptr->left = insertion_node(ptr->left, value);
		}
		else{
			ptr->right = insertion_node(ptr->right, value);
		}
	}
	
	return ptr;
}

void print_Binary_Tree(node *root_ref){
	
	if(root_ref != NULL){
		print_Binary_Tree(root_ref->left);
		printf("%d ", root_ref->data);
		print_Binary_Tree(root_ref->right);
	}
	
	return;
}

int main(){
	
	node *root = NULL;
	node *test_git;
	root = insertion_node(root, 3);
	root = insertion_node(root, 4);
	root = insertion_node(root, 8);
	root = insertion_node(root, 1);
	print_Binary_Tree(root);
	return 0;
}
