#pragma once
class List
{
	struct elem
	{
		int info; 	  // �������������� ����
		elem* prev; // ��������� �� ����������
		elem* next; // ��������� �� ���������

	};
	elem* head;


public:
	List(); //������ ������
	void create_list(int n);
	void add_elem(int, int);
	int del_elem(int);
	void print();

	~List();
};

