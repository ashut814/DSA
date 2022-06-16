#include<iostream>
using namespace std;
class ListNode {
public:
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL);
	};

	void push_front(int newElement) {
	ListNode* newNode = new ListNode();
	newNode->data = newElement;
	newNode->next = head;
	head = newNode;
}

void printLL(ListNode* node) {
	ListNode* temp = node;
	while (temp != NULL) {
		cout << temp->val << " ";
		temp = temp->next;
	}
}
//leetcode
void deleteNode(ListNode* node) {
	if (node->next == NULL) {
		delete node;
	}
	swap(node->val , node->next->val);
	ListNode* temp2 = node->next;
	node->next = temp2->next;

	delete temp2;

}
//leetcode
void MidElement(ListNode* node) {
	int n = 0;
	ListNode* temp = node;
	while (temp  != NULL) {
		n++;
		temp = temp->next;
	}
	int half = n / 2;
	temp = node;
	while (half--) {
		temp  = temp->next;
	}
	return temp;
}

//leetcode
void MidElement1(ListNode* node) {
	//without finding length
	if (node == NULL && node->next == NULL) {
		return node;
	}
	ListNode* slow = node;
	ListNode* fast = node;

	while (fast != NULL && fast->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}
//leetcode
int getDecimalValue(ListNode* head) {
	int ans = 0;
	ListNode* temp = head;
	while (temp != NULL) {
		ans *= 2;
		ans += (temp->val);
		temp = temp->next;
	}
	return ans;

}

int main()
{
	ListNode* head;
	push(&head, 7);
	push(&head, 1);
	push(&head, 3);
	push(&head, 2);
	cout << "printLL:";
	printLL(head);
	cout << "after deletion:";
	deleteNode(head);

	return 0;
}