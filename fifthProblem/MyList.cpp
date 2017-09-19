#include "MyList.h"

void MyList::add(int value) {
	node* new_node = new node(value);
	new_node->next = root;
	root = new_node;
}
void MyList::delete_element(int value) {
	if (root == NULL)
		return;
	node* current_node = root;
	if (current_node->value == value) {
		root = root->next;
		delete current_node;
		return;
	}
	while (current_node->next) {
		if (current_node->next->value == value) {
			node* cur = current_node->next;
			current_node->next = cur->next;
			delete cur;
		}
		else
			current_node = current_node->next;
	}
}
void MyList::split(int key, MyList &left_list, MyList &right_list) {
	node* current_node = root;
	while (current_node) {
		if (current_node->value <= key)
			left_list.add(current_node->value);
		else
			right_list.add(current_node->value);
		current_node = current_node->next;
	}
}
void MyList::print() {
	node* current_node = root;
	while (current_node) {
		std::cout << current_node->value << ' ';
		current_node = current_node->next;
	}
	std::cout << '\n';
}

MyList::~MyList() {
	while (root != NULL) {
		node *next = root->next;
		delete root;
		root = next;
	}
}