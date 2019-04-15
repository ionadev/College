#include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct Node 
{
	public: int data;
			Node *next;
};

int main()
{
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;
	Node* temp = NULL;

	head = new Node();
	second = new Node();
	third = new Node();

	head -> data = 1;
	head -> next = second;

	second -> data = 2;
	second -> next = third;

	third -> data = 3;
	third -> next = NULL;

	for (temp = head;temp != NULL; temp = temp -> next)
	{
		cout << temp -> data;
	}

	return 0;
}