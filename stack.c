/*This is program to insert, delete and display elements using stack. Here the stack size is five. if you want, you can change the size of stack by changing the value of 'n' variable.*/

#include <stdio.h>
#include <stdlib.h>

void push();
void pop();
void display();
int ch, n = 5, ele, top = -1;

void main() {
	
	int arr[n];
	while (1) {
		
		printf ("1. insert\n2. delete\n3. display\n4. exit\nEnter your option : ");
		scanf ("%d", &ch);
		switch (ch) {
			
			case 1 :
				push(arr);
				break;
			case 2 :
				pop(arr);
				break;
			case 3 :
				display(arr);
				break;
			case 4 :
				exit(0);
		}
		printf ("\n\n");		
	}
}

void push(int arr[]) {
	
	if (top == -1) {
		
		printf ("enter inserting element : ");
		scanf ("%d", &ele);
		top = 0;
		arr[top] = ele;
		printf ("\nelement inserted successfully :)");
	}
	else if (top == n-1) {
		
		printf ("\nStack is full");
	}
	else {
		
		printf ("enter inserting element : ");
		scanf ("%d", &ele);
		top++;
		arr[top] = ele;
		printf ("\nelement inserted successfully :)");
	}
}

void pop(int arr[]) {
	
	if (top == -1) {
		
		printf ("\nStack is empty...");
	}
	else {
		
		printf ("Deleting element is : %d\n", arr[top]);
		top--;
		printf ("\nElement deleted successfully :)");
	}
}

void display(int arr[]) {
	
	if (top == -1) {
		
		printf ("\nStack is empty...");
	}
	else {
		
		printf ("\nStack elements are...");
		for (int i = 0; i < top+1; i++) {
		
			printf ("\n%d", arr[i]);
		}	
	}
}
