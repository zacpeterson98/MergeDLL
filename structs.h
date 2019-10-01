#pragma once
#include <string>

struct Record {
	int id;
	string name;
	string email;
	double gpa;
};

struct llist {
	int size;
	litemLL* first;
	litemLL* last;
};

struct litemLL {
	llist* origin;
	litemLL* next;
	litemLL* prev;
	Record* data;
};
