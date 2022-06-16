#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
	int data;
	Node *left , *right;
};

/*
vector<int> PreOrder(Node *node){
	vector<int> preorder;
	if(node == NULL){
		return preorder;
	}
	stack<node *> st;
	st.push(node);

	while(!st.empty()){

	}

}

*/
struct Node* newNode(int data) {
	Node* node = new Node();
	node->data = data;
	node->left = node->right = NULL;

	return node;
}
// recursive
void PreOrder(Node* node , vector<int> ans) {
	if (node == NULL) {
		return;
	}
	ans.push_back(node->data);
	PreOrder(node->left , ans);
	PreOrder(node->right , ans);
}
int main(int argc, char const *argv[])
{
	Node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->left->right->left = newNode(6);
	root->right->left = newNode(7);
	root->right->right = newNode(8);
	root -> right->right->left = newNode(9);
	root -> right->right->left = newNode(10);

	vector<int> ans;
	PreOrder(root , ans);

	cout << "PreOrder traversal is : ";
	for (int i = 0 ; i < ans.size() ; i++) {
		cout << ans[i] << " ";
	}
	return 0;
}