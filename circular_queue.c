/*This program implements the insertion and deletion operations in a circular queue data structure. Here i have taken circular queue size as 5. circular queue size can be changed by changing the value of variable 'n'*/

#include <stdio.h>
#include <stdlib.h>

void enqueue();
void dequeue();
void display();
int ch, n = 5, ele, front = -1, rear = -1;

void main() {
	
	int arr[n];
	while (1) {
		
		printf ("1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter your option : ");
		scanf ("%d", &ch);
		switch (ch) {
			
			case 1 :
				enqueue(arr);
				break;
			case 2 :
				dequeue(arr);
				break;
			case 3 :
				display(arr);
				break;
			case 4 :
				exit(0);
			default :
				printf ("Enter correct choice...");
		}
		printf ("\n\n");		
	}
}

void enqueue(int arr[]) {
	
	if (front == -1 && rear == -1) {
		
		printf ("enter inserting element : ");
		scanf ("%d", &ele);
		front = rear = 0;
		arr[rear] = ele;
		printf ("\nelement inserted successfully :)");
	}
	else if (front == ((rear + 1) % n)) {
		
		printf ("\nQueue is full");
	}
	else {
		
		printf ("enter inserting element : ");
		scanf ("%d", &ele);
		rear = ((rear + 1) % n);
		arr[rear] = ele;
		printf ("\nelement inserted successfully :)");
	}
}

void dequeue(int arr[]) {
	
	if (front == -1 && rear == -1) {
		
		printf ("\nQueue is empty...");
	}
	else if (front == rear) {
		
		printf ("Deleting element is : %d\n", arr[front]);
		front = -1; 
		rear = -1;
		printf ("\nElement deleted successfully :)");
	}
	else {
		
		printf ("Deleting element is : %d\n", arr[front]);
		front = ((front + 1) % n);
		printf ("\nElement deleted successfully :)");
	}
}

void display(int arr[]) {
	
	if (front == -1 && rear == -1) {
		
		printf ("\nQueue is empty...");
	}
	else {

		int i = front;		
		printf ("\nQueue elements are...");
		while (i != rear) {
			
			printf ("\n%d", arr[i]);
			i = ((i+1)%n);
		}
		printf ("\n%d", arr[rear]);
	}
}
