//DLL.h - I have done the implementation in the header file to limit the number of files being uploaded
#pragma once
#include <iostream>
#include "structs.h"
using namespace std;

class DLL {
private:
	int listSize;

public:
	litemLL* merge(litemLL* p, litemLL* q)
	{
		if (!p)
			return q;

		if (!q)
			return p;

		for (int i = 0; i < p->data->name.size() && i < q->data->name.size(); ++i)
		{
			if (int(tolower(p->data->name[i])) < int(tolower(q->data->name[i])))
			{
				p->next = merge(p->next, q);
				p->next->prev = p;
				p->prev = NULL;
				return p;
			}
			else if (int(tolower(p->data->name[i])) > int(tolower(q->data->name[i])))
			{
				q->next = merge(p, q->next);
				q->next->prev = q;
				q->prev = NULL;
				return q;
			}
		}
	}

	litemLL* mergeSort(litemLL* head)
	{
		if (!head || !head->next)
			return head;
		litemLL* p = split(head);

		head = mergeSort(head);
		p = mergeSort(p);

		return merge(head, p);
	}

	void insert(litemLL** head, int id, string name, string email, double gpa)
	{
		litemLL* temp = new litemLL();
		temp->data = new Record();

		temp->data->id		= id;
		temp->data->name	= name;
		temp->data->email	= email;
		temp->data->gpa		= gpa;

		temp->next = temp->prev = NULL;

		if (!(*head))
			(*head) = temp;
		else
		{
			temp->next = *head;
			(*head)->prev = temp;
			(*head) = temp;
		}
	}

	void print(litemLL* head)
	{
		litemLL* temp = head;
		cout << "Forwards then backwards" << endl;
		while (head)
		{
			cout << head->data->name << ", ";
			temp = head;
			head = head->next;
		}

		cout << endl;

		while (temp)
		{
			cout << temp->data->name << ", ";
			temp = temp->prev;
		}
	}

	void swap(int* A, int* B)
	{
		int temp = *A;
		*A = *B;
		*B = temp;
	}

	litemLL* split(litemLL* head)
	{
		litemLL* fast = head, * slow = head;
		while (fast->next && fast->next->next)
		{
			fast = fast->next->next;
			slow = slow->next;
		}
		litemLL* temp = slow->next;
		slow->next = NULL;
		return temp;
	}

};