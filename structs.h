#pragma once
#include <string>
using namespace std;

struct litemLL;

struct Record {
	int id;
	string name;
	string email;
	double gpa;
};

struct llist {
	int size;
	litemLL * first;
	litemLL * last;
};

struct litemLL {
	llist* origin;
	litemLL* next;
	litemLL* prev;
	Record* data;
};
