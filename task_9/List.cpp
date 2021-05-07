#include "pch.h"
#include "List.h"
#include <iostream>
#include <time.h>

using namespace std;

void List::create_list(int n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		int a = rand() % 100;
		add_elem(a, i + 1);
	}
}
void List::add_elem(int x, int index)
{
	elem* nov = new elem; //создание нового элемента
	nov->info = x;
	if (head == NULL) //если список пуст
	{
		nov->next = nov;
		nov->prev = nov;
		head = nov;
	}
	else
	{
		elem* p = head;
		for (int i = index; i > 1; i--)
			p = p->next;
		p->prev->next = nov;
		nov->prev = p->prev;
		nov->next = p;
		p->prev = nov;
	}
}

int List::del_elem(int index)
{
	if (head == NULL)
	{ 
		cout << "\nСписок пуст!\n\n";
		return 0;
	}
	if (head == head->next)
	{
		delete head;
		head = NULL;
	}
	else
	{
		elem *d = head;
		for (int i = index; i > 1; i--)
			d = d->next;
		if (d == head) head = d->next;
		d->prev->next = d->next;
		d->next->prev = d->prev;
		delete d;
	}
	cout << "\nЭлемент удален!\n\n";
}

void List::print()
{
	if (head == NULL) 
		cout << "\nСписок пуст!\n\n";
	else
	{
		elem *p = head;
		cout << "\nЭлементы списка:\n";
		do
		{
			cout << p->info << " ";
			p = p->next;
		} while (p != head);
		cout << "\n\n";
	}
}

List::List()
{
	head = NULL;
}


List::~List()
{
	
}
