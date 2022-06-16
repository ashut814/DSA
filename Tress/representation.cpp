#include<bits/stdc++.h>
using namespace std;

struct  Node
{
	int data;
	struct Node *left;
	struct Node *right;

	Node(int val) {
		data = val;
		left = right = NULL;
	}

	void PreOrder(Node* node) {
		if (node == NULL) {
			return;
		}
		print(node->data);
		PreOrder(node->left);
		PreOrder(node - right);
	}
	void PrintTree(Node *node) {
	}
};

int main(int argc, char const *argv[])
{
	/* code */
	// creating tree

	struct Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);

	root->left->right = new Node(4);
	return 0;
}