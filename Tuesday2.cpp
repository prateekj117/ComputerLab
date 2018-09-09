#include<bits/stdc++.h>
using namespace std;
 
struct Node {
    int data;
    Node *next;
};

Node* head = NULL;

void InsertAtTheEnd(Node** head, int new_data) {
    Node* new_node = new Node;
 
    Node *end = *head;  
    new_node->data  = new_data;
 	new_node->next = NULL;
 	if (*head == NULL) {
       *head = new_node;
       return;
    }  
 	     
    while (end->next != NULL) {
        end = end->next;
	}
    end->next = new_node;
    return;
}

void printList(Node *head) {
	Node* temp1 = head;
	while (temp1 != NULL) {
		cout << temp1->data << " "; 
		temp1 = temp1->next;
  }
  return;
}

void sort(int count) {
	//function to sort the stack using bubble sort algorithm
	Node *temp=head,*temp_next=temp->next,*temp_prev=NULL;
	int i,j;
	for(i=0;i<count-1;i++){
		j=0;
		while((temp_next)&&(j<count-i-1)){
			if((temp_next->data)<(temp->data)){
				if(temp==head){
					head->next=temp_next->next;
					temp_next->next=head;
					head=temp_next;
				}
				else{
					temp_prev->next=temp_next;
					temp->next=temp_next->next;
					temp_next->next=temp;
	
				}
			temp_prev=temp_next;
			temp_next=temp->next;
			}
			else{
				temp_prev=temp;
				temp=temp->next;
				temp_next=temp->next;
				}
			j++;

	}
	temp=head;
	temp_next=temp->next;
	temp_prev=NULL;
	
	}
}

int main() {
	int n;
	int a;
	cout << "Enter the length of linked list : ";
	cin >> n;
	cout << "Enter the linked List : "; 
	for(int i=0; i<n; i++) {
		cin >> a;
		InsertAtTheEnd(&head, a);
	}
	
	cout << "Created Linked List : ";
	printList(head);
	cout << "\n";
	
	sort(n);
	
	cout << "Linked List after Sorting : ";
	printList(head);
	
	cout << "\n"; 
	return 0;
}

