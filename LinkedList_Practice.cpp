//============================================================================
// Name        : LinkedList_Practice.cpp
// Author      : Anand
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node* next;
}NODE;

NODE* createNode(int ele,struct node* head)
{
    if(head==NULL)
    {
    	head=new NODE();
    	head->data=ele;
    	head->next=NULL;
    	return head;
    }
    else
    {
    	NODE* temp=new NODE;
    	temp->data=ele;
    	temp->next=NULL;
    	return temp;
    }

}

void insertAtEnd(int element,NODE* head)
{
	NODE *temp=createNode(element,head);
	NODE *tempPtr=head;
	while(tempPtr->next!=NULL)
	{
		tempPtr=tempPtr->next;
	}
	tempPtr->next=temp;
	temp->next=NULL;
}

void deleteAtEnd(NODE **head_ptr)
{
	NODE *temp=*head_ptr;
	NODE *end=*head_ptr;
    while(temp->next !=NULL)
    {
    	end=temp;
        temp=temp->next;
    }
    delete(temp);
    end->next=NULL;
}

void print(NODE* head)
{
	while(head->next!=NULL)
	{
        cout<<head->data<<endl;
        head=head->next;
	}
	cout<<head->data<<endl;
}


int main()
{
	NODE *head=createNode(5,NULL);
	insertAtEnd(10,head);
	insertAtEnd(20,head);
	insertAtEnd(30,head);
	insertAtEnd(40,head);
	insertAtEnd(50,head);
    print(head);
    deleteAtEnd(&head);
    print(head);
	return 0;
}
