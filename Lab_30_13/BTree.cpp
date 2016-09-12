#include "BTree.h"
#include <cstddef>
#include <iostream>
BTree::BTree(){
	root =  NULL;
}
BTree::~BTree(){
	destroy_tree();
}
void BTree::insert(int key){
	if(root == NULL){
		root = new Node;
		root->key_value = key;
		root->left = NULL;
		root->right = NULL;
	}
	else
		insert(key, root);
}
Node *BTree::search(int key){
	return search(key, root);
}
void BTree::destroy_tree(){
	destroy_tree(root);
}
Node *BTree::BTree_root(){
	return root;
}

void BTree::destroy_tree(Node *leaf){
	if(leaf != NULL){
		if(leaf->left != NULL)
			destroy_tree(leaf->left);
		if(leaf->right != NULL)
			destroy_tree(leaf->right);
		delete leaf;
	}
}
void BTree::insert(int key, Node *leaf){
	if(key < leaf->key_value){
		if(leaf->left == NULL){	
//			Node *newNode = new Node;
			leaf->left = new Node;
			leaf->left->key_value = key;
			leaf->left->left = NULL;
			leaf->left->right = NULL;
		}
		else{
			insert(key, leaf->left);
		}
	}
	else{
		if(leaf->right == NULL){	
//			Node *newNode = new Node;
			leaf->right = new Node;
			leaf->right->key_value = key;
			leaf->right->left = NULL;
			leaf->right->right = NULL;
		}
		else{
			insert(key, leaf->right);
		}		
	}
}
Node *BTree::search(int key, Node *leaf){
		if(key == leaf->key_value)
			return leaf;
		else if(key < leaf->key_value && leaf->left != NULL)
			return search(key, leaf->left);
		else if(key > leaf->key_value && leaf->right !=NULL)
			return search(key, leaf->right);
		else
			return NULL;
}
