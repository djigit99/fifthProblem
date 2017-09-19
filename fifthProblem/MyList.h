#pragma once
#include <iostream>

struct node {
	int value;
	node* next;

	node() : node(NULL) {};
	node(int value) : value(value), next(NULL) {}
};
class MyList {
	node* root;
public:
	MyList() : root(NULL) {}
	~MyList();

	void add(int);
	void delete_element(int);
	void split(int, MyList&, MyList&);
	void print();
};