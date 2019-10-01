/*
main.cpp

Merge DLL 10-1-2019
This is a simple program to demonstrate a dynamically linked list with the ability to merge sort the litemLLs within the list alphabetically for the
explicit purpose of an assignment for my CS1D Data Structures course.

Repository: https://github.com/zacpeterson98/
Website:	https://zacp.xyz/

Copyright 2019 Zac Peterson

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"),
to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,
and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#include "DLL.h"
#include "structs.h"
using namespace std;

int main(void)
{
	litemLL* head = NULL;
	DLL list;
	list.insert(&head, 1, "Alexander Aardvark", "aa00@aah.au", 4.0);
	list.insert(&head, 2, "Zachary Zzyzx", "zzzyzx@zyzzx.xyz", 1.0);
	list.insert(&head, 3, "Bob Bison", "bigboss@ballerboots.biz", 2.0);
	list.insert(&head, 4, "Christina Cassowary", "ccassowary@czar.cern", 3.0);
	list.insert(&head, 5, "Wilbert Wildcard", "ww@www.ww.wow", 3.14);
	head = list.mergeSort(head);
	cout << "Sorted List:" << endl;
	list.print(head);
	return 0;
}