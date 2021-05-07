#pragma once
class List
{
	struct elem
	{
		int info; 	  // информационное поле
		elem* prev; // указатель на предыдущий
		elem* next; // указатель на следующий

	};
	elem* head;


public:
	List(); //пустой список
	void create_list(int n);
	void add_elem(int, int);
	int del_elem(int);
	void print();

	~List();
};

