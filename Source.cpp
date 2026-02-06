#include<iostream>
#include<string>
using namespace std;

template<typename T>
class Insertion {
private:
	int size, top;
	T* arr;
public:
	Insertion(int capacity) {
		top = -1;
		size = capacity;
		arr = new T[size];
	}
	~Insertion() {
		delete[] arr;
	}
	void push(T element) {
		top++;
		arr[top] = element;
	}
	void specific(int pos, T element) {
		if (pos != size) {
			for (int i = size - 1;i >= pos;i--) {
				arr[i] = arr[i - 1];
			}
		}
		arr[pos - 1] = element;
		top++;
	}
	int deletion(int pos) {
		T d = arr[pos - 1];
		for (int i = pos; i < size;i++) {
			arr[i - 1] = arr[i];
		}
		size--;
		top--;
		cout << "\nCongrats Programmer! We deleted " << d << " at position " << pos << " in your array:)";
		cout << "\n Now the Array we have: {";
		for (int i = 0;i < size;i++) {
			cout << arr[i];
			if (i != size - 1) cout << ", ";
		}
		cout << "}\n";
		if (size == 0) {
			return -1;
		}
		return 0;

	}
	void display() {
		if (top == -1) {
			cout << "Programmer are you nuts?";
			return;
		}
		cout << "\nYour Array: {";
		for (int i = 0; i <= top;i++) {
			cout << arr[i];
			if (i != top) cout << ", ";
		}
		cout << "}";
	}
	void strdisplay() {
		if (top == -1) {
			cout << "Programmer are you nuts?";
			return;
		}
		cout << "\nYour Array: {";
		for (int i = 0; i <= top;i++) {
			cout << arr[i];
			if (i != top) cout << ", ";
		}
		cout << "}";
		cout << "\nAs a Sentence: ";
		for (int i = 0; i <= top;i++) {
			cout << arr[i] << " ";
		}
	}

};
class Bubble {
private:
	int* arr;
	int size, a = -1;
public:
	Bubble(int capacity) {
		size = capacity;
		arr = new int[size];
	}
	void sort() {
		for (int i = 0; i < size - 1; i++) {
			bool already = true;
			for (int k = 1; k < size; k++) {
				if (arr[k - 1] > arr[k]) { already = false; break; }
			}
			if (i == 0 && already == true) {
				cout << "\nIt's already sorted!";
			}
			if (already) break;



			cout << "\n\nRound " << i + 1 << ": \n";
			for (int j = 0; j < size - i - 1;j++) {
				if (arr[j] > arr[j + 1]) {
					swap(arr[j], arr[j + 1]);

					cout << arr[j] << " vs " << arr[j + 1];
					cout << " -> " << arr[j] << " wins! (swap)\n";
				}
			}
			if (i == size - 1) {
				cout << "Final Array: { ";
				for (int i = 0;i < size;i++) {
					cout << arr[i];
					if (i != size - 1) cout << ", ";
				}
				cout << " }";
			}
			else {
				cout << "\nCurrent Array: { ";
				for (int i = 0;i < size;i++) {
					cout << arr[i];
					if (i != size - 1) cout << ", ";
				}
				cout << " } ";
			}
		}
	}
	void push(int num) {
		a++;
		arr[a] = num;
	}
	void display() {
		cout << "\nToday's Fighters: { ";
		for (int i = 0;i < size;i++) {
			cout << arr[i];
			if (i != size - 1) cout << ", ";
		}
		cout << " }";
	}
};
class Selection {
private:
	int* arr;
	int size, n;
public:
	Selection(int capacity) {
		n = -1;
		size = capacity;
		arr = new int[size];
	}
	void push(int num) {
		n++;
		arr[n] = num;
	}
	void sort() {
		for (int i = 0; i < size - 1;i++) {
			cout << "\n\nRound ";
			cout << i + 1;
			for (int j = i + 1;j < size;j++) {
				cout << "\nComparing ";
				cout << arr[i] << " vs " << arr[j] << " -> ";
				if (arr[i] > arr[j]) {
					cout << arr[j] << " takes the crown";
					swap(arr[i], arr[j]);
				}
				else if (arr[i] < arr[j]) {
					cout << arr[i] << " stays on top";
				}
			}
			cout << "\nRound ";
			cout << i + 1 << " Winner: " << arr[i];
			cout << "\nLineup after Round ";
			cout << i + 1 << " : { ";
			for (int i = 0;i < size;i++) {
				cout << arr[i];
				if (i != size - 1) cout << ", ";
			}
			cout << " }";
		}
		cout << "\n\nFinal ranking of the Fighters: {";
		for (int i = 0;i < size;i++) {
			cout << arr[i];
			if (i != size - 1) cout << ", ";
		}
		cout << " }";
	}
	void display() {
		cout << "\n\nYour Fighters for today: { ";
		for (int i = 0;i < size;i++) {
			cout << arr[i];
			if (i != size - 1) cout << ", ";
		}
		cout << " }";
	}
};
class InsertionSort {
private:
	int size, top;
	int* arr;
public:
	InsertionSort(int n) {
		size = n;
		top = -1;
		arr = new int[size];
	}
	~InsertionSort() {
		delete[] arr;
	}
	void push(int a) {
		top++;
		arr[top] = a;
	}
	void insertionSort() {
		int a, pos, e = 0;
		int key;
		cout << "\n\nCurrent Array: { ";
		for (int i = 0;i < size;i++) {
			cout << arr[i];
			if (i != size - 1) cout << ", ";
		}
		cout << " }";
		for (int i = 1;i < size;i++) {

			key = arr[i];
			cout << "\n\n---------------------------------------------";
			cout << "\nStep "<< i<< " : Insert "<< key;
			cout << "\nAt what position should "<< key<<" be inserted? (1-"<< i + 1 << "): ";
			cin >> a;
			int j = i - 1;
			pos = i;
			while (j >= 0 && arr[j] > key) {
				pos = j;
				arr[j + 1] = arr[j];
				j--;
			}
			if (a == pos + 1) {
				cout << "\n:) Correct Guess! +1 Point";
				e++;
			}
			else if (a > size) {
				cout << "\nNo such position exists";
			}
			else {
				cout << "\n:( Wrong Guess! Correct position was: ";
				cout << pos + 1;
			}
			arr[j + 1] = key;
			cout << "\nCurrent Array: {";
			for (int k = 0;k < size;k++) {
				cout << arr[k];
				if (k != size - 1) cout << ", ";
			}
			cout << " }";
		}
		cout << "\n\n========== GAME OVER ==========";
		cout << "\nYour Score: ";
		cout << e << "\\" << size - 1;
		if (e == size - 1) {
			cout << "\n\nYOU WIN A TROPHY!\n";
			cout <<
				"        ___________\n"
				"       '._==_==_=_.'\n"
				"       .-\\:      /-.\n"
				"      | (|:.      |) |\n"
				"       '-|:.      |-'\n"
				"         \\::.     /\n"
				"          '::. .'\n"
				"            ) (\n"
				"          _.' '._\n"
				"         `\"\"\"\"\"\"\"`\n";
		}
		cout << "\n\nThanks for Playing!";

	}
};
void maze(int room) {
	char h;
	int n = 0;
	if (room == 0) {
		cout << "\nCongrats! You've reached the end - TREASURE FOUND!";
		return;
	}
	cout << "\n\nYou are in Room ";
	cout << room << ".";
	cout << "\nTwo tunnels in front of you: (L)eft or (R)ight? ";
	cin >> h;
	bool correctleft = false;
	bool correctright = false;
	if (room % 2 == 0) { correctleft = true; }
	if (room % 2 == 1) {
		correctright = true;
	}
	if ((h == 'L' || h == 'l') && correctleft) {
		cout << "\n:) Correct! Going to the next room....";
		maze(room - 1);
	}
	else if ((h == 'R' || h == 'r') && correctright) {
		cout << "\n:) Correct! Going to the next room....";
		maze(room - 1);
	}
	else {
		cout << "\n:( Wrong turn! You hit a dead end.\nTry Again";
		maze(room);
	}

}

class Stack {
private:
	int top;
	int arr[10];
public:
	Stack() {
		top = -1;
	}
	void push(int room) {
		++top;
		arr[top] = room;
		cout << "\n\nPush -> Room ";
		cout << room;
		cout << " added to stack";
	}
	void pop() {
		if (top >= 0) {
			cout << "\nPop -> leaving Room ";
			cout << arr[top] << ".";
			top--;
		}
	}
	int peek() {
		if (top >= 0) return arr[top];
		return -1;
	}
	bool empty() {
		if (top == -1) return true;
		return false;
	}
	void display() {
		cout << "\nStack { ";
		for (int i = 0;i <= top;i++) {
			cout << "Room " << arr[i];
			if (i != top) cout << ", ";
		}
		cout << " }";
	}
	bool room1() {
		int ans;
		cout << "\n\nRoom 4: Beginner Puzzle\nQuestion: How many sides does a triangle have?: ";
		cin >> ans;
		if (ans == 3) return true;
		return false;
	}
	bool room2() {
		int ans;
		cout << "\n\nRoom 3: Basic Math Puzzle\nQuestion: What is 10/2 = ?: ";
		cin >> ans;
		if (ans == 5) return true;
		return false;
	}
	bool room3() {
		int ans;
		cout << "\n\nRoom 2: Number Pattern Puzzle\nQuestion: What comes after 2 4 8 16 32 64 128 256 512 1024 -> ";
		cin >> ans;
		if (ans == 2048) return true;
		return false;
	}
	bool room4() {
		string ans;
		cout << "\n\nRoom 1: Final Escape Puzzle\nQuestion: What is the capital of Germany? : ";
		cin >> ans;
		if (ans == "Berlin" || ans == "berlin") return true;
		return false;
	}
};
class LinearQueue {
private:
	string* queue;
	int size, front = -1, rear = -1;
public:
	LinearQueue(int capacity) {
		size = capacity;
		queue = new string[size];
	}
	bool isFull() {
		if (rear == size - 1) {
			return true;
		}
		return false;
	}
	bool isEmpty() {
		if (front == -1 || front > rear) {
			return true;
		}
		return false;
	}
	void enqueue(string customer) {
		if (isFull()) {
			cout << "Queue is full!\n";
			return;
		}
		if (front == -1) front = 0;
		rear = rear + 1;
		queue[rear] = customer;
		cout << "Customer added: " << customer << endl;
	}
	string dequeue() {
		if (isEmpty()) {
			cout << "No customers to serve.\n";
			return "";
		}
		return queue[front++];
	}
	void display() {
		if (isEmpty()) {
			cout << "Queue is empty.\n";
			return;
		}
		cout << "Current Queue:\n";
		for (int i = front; i <= rear; i++)
			cout << i - front + 1 << ". " << queue[i] << endl;
	}
};
class CircularQueue {
private:
	int front, rare, maxqueue;
	string* arr;

public:
	CircularQueue(int max) {
		maxqueue = max + 1;
		front = maxqueue - 1;
		rare = maxqueue - 1;
		arr = new string[maxqueue];
	}

	~CircularQueue() {
		delete[] arr;
	}

	bool isEmpty() {
		return front == rare;
	}

	bool isFull() {
		return (rare + 1) % maxqueue == front;
	}

	void enqueue(string survivor) {
		if (!isFull()) {
			rare = (rare + 1) % maxqueue;
			arr[rare] = survivor;
			cout << "Survivor " << survivor << " entered checkpoint\n";
		}
		else {
			cout << "Checkpoint full\n";
		}
	}

	void dequeue() {
		if (!isEmpty()) {
			front = (front + 1) % maxqueue;
		}
		else {
			cout << "Checkpoint empty\n";
		}
	}

	string peek() {
		return arr[(front + 1) % maxqueue];
	}

	void display() {
		if (isEmpty()) {
			cout << "No survivors in checkpoint\n";
			return;
		}

		cout << "Survivors waiting: ";
		int i = (front + 1) % maxqueue;
		while (i != (rare + 1) % maxqueue) {
			cout << arr[i] << " ";
			i = (i + 1) % maxqueue;
		}
		cout << endl;
	}
};
class LinkedListGame {
	struct node {
		int info;
		node* link;
	};

	node* head;
	int nodecount;

public:
	LinkedListGame() {
		head = NULL;
		nodecount = 0;
	}

	void insertBeg(int data) {
		node* newnode = new node;
		newnode->info = data;
		newnode->link = head;
		head = newnode;
		nodecount++;
		cout << data << " added at beginning\n";
	}

	void insertEnd(int data) {
		node* newnode = new node;
		newnode->info = data;
		newnode->link = NULL;

		if (head == NULL) {
			head = newnode;
		}
		else {
			node* current = head;
			while (current->link != NULL)
				current = current->link;
			current->link = newnode;
		}
		nodecount++;
		cout << data << " added at end\n";
	}

	void insertMid(int data) {
		if (head == NULL || nodecount < 2) {
			insertEnd(data);
			return;
		}

		int mid = nodecount / 2;
		node* newnode = new node;
		newnode->info = data;

		node* ptr = head;
		node* prev = NULL;
		int c = 0;

		while (c < mid) {
			prev = ptr;
			ptr = ptr->link;
			c++;
		}

		prev->link = newnode;
		newnode->link = ptr;
		nodecount++;
		cout << data << " added at middle\n";
	}

	void deleteBeg() {
		if (head == NULL) {
			cout << "List empty\n";
			return;
		}
		node* ptr = head;
		head = head->link;
		cout << ptr->info << " removed from beginning\n";
		delete ptr;
		nodecount--;
	}

	void deleteEnd() {
		if (head == NULL) {
			cout << "List empty\n";
			return;
		}

		if (head->link == NULL) {
			cout << head->info << " removed\n";
			delete head;
			head = NULL;
			nodecount--;
			return;
		}

		node* ptr = head;
		node* prev = NULL;

		while (ptr->link != NULL) {
			prev = ptr;
			ptr = ptr->link;
		}

		prev->link = NULL;
		cout << ptr->info << " removed from end\n";
		delete ptr;
		nodecount--;
	}

	void deleteMid() {
		if (head == NULL || nodecount < 2) {
			deleteBeg();
			return;
		}

		int mid = nodecount / 2;
		node* ptr = head;
		node* prev = NULL;
		int c = 0;

		while (c < mid) {
			prev = ptr;
			ptr = ptr->link;
			c++;
		}

		prev->link = ptr->link;
		cout << ptr->info << " removed from middle\n";
		delete ptr;
		nodecount--;
	}

	void display() {
		node* current = head;
		cout << "Scores: ";
		while (current != NULL) {
			cout << current->info << " ";
			current = current->link;
		}
		cout << "| Total: " << nodecount << endl;
	}
};
struct node {
	string info;
	node* next;
	node* prev;
};
node* head = NULL;
void insertion(string data) {
	node* newNode = new node;
	newNode->info = data;
	newNode->next = head;
	newNode->prev = NULL;
	if (head != NULL) {
		head->prev = newNode;
	}
	head = newNode;
}
void reverseDisplay() {
node* temp = head;
if (temp == NULL) return;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	while (temp != NULL)
	{
		cout << temp->info << "\t";
		temp = temp->prev;
	}
	cout << endl;
}
void deletion() {
	node* temp = head;
	if (temp == NULL) return;
	head = head->next;
	delete temp;
	head->prev = NULL;
}
void menu() {
	cout << "\n ----- Our Menu for Today -----";
	cout << "\n1) Insertion\n2) Deletion\n3) Linear Search\n4) Binary Search\n5) Bubble Sort\n6) Selection Sort\n7) Insertion Sort\n8) Recursion\n9) Stack\n10) Linear Queue\n11) Circular Queue\n12) Singly Linked List\n13) Doubly Linked List\n0) Exit";
}
int main() {
	string name, c, b;
	int choice, ch, a, pos, n, e;
	char h;

	cout << "\n====================================\n";
	cout << "      Welcome to DSA Simulator \n";
	cout << "====================================\n";

	cout << "\nOk Programmer lets start!";
	do {
		menu();
		cout << "\nWhat is your choice programmer?: ";
		cin >> choice;
		switch (choice) {
		case 1: {
			cout << "\nInserting Elements is Fun, Lets do inserting Programmer!";
			cout << "\n1) Demo array \n2) Empty Array";
			cout << "\n Your choice: ";
			cin >> ch;
			switch (ch) {
			case 1: {
				cout << "\n Sure thing! \n1) Integer Array \n2) Character Array";
				cout << "\nProgrammer what type of array should i provide you?: ";
				cin >> a;
				switch (a) {
				case 1: {
					int intelement;
					n = 5;
					int arr[10] = { 1,2,3,4,5 };
					cout << "\nYour integer Array: {";
					for (int i = 0; i < n; i++) {
						cout << arr[i];
						if (i != n - 1) cout << ",";
					}
					cout << "}" << endl;
					cout << "Do you want to insert at a specific position?(yes/no): ";
					cin >> b;
					if (b == "yes" || b == "Yes") {
						cout << "\nThats Great Programmer!";
						cout << "\nEnter the position at which you want to insert:";
						cin >> pos;
						cout << "\nOk now enter the element: ";
						cin >> intelement;
						for (int i = n;i >= pos;i--) {
							arr[i] = arr[i - 1];
						}
						arr[pos - 1] = intelement;
						n++;
						cout << "\nGreat Job Programmer!";
						cout << "\nYour Array now: {";
						for (int i = 0; i < n; i++) {
							cout << arr[i];
							if (i != n - 1) cout << ",";
						}
						cout << "}" << endl;
					}
					else if (b == "No" || b == "no") {
						cout << "\nNo worries Programmer, we can do it some other time";
					}
					else {
						cout << "\nOops! you entered an invalid statement:(";
					}
					break;
				}
				case 2: {
					n = 5;
					char charelement;
					char charr[10] = { 'a','b','c','d','e' };
					cout << "\nYour character Array: {";
					for (int i = 0; i < n; i++) {
						cout << charr[i];
						if (i != n - 1) cout << ",";
					}
					cout << "}" << endl;
					cout << "Do you want to insert at a specific position?(yes/no): ";
					cin >> b;
					if (b == "yes" || b == "Yes") {
						cout << "\nThats Great Programmer!";
						cout << "\nEnter the position at which you want to insert:";
						cin >> pos;
						cout << "\nOk now enter the element: ";
						cin >> charelement;
						for (int i = n;i >= pos;i--) {
							charr[i] = charr[i - 1];
						}
						charr[pos - 1] = charelement;
						n++;
						cout << "\nGreat Job Programmer!";
						cout << "\nYour Array now: {";
						for (int i = 0; i < n; i++) {
							cout << charr[i];
							if (i != n - 1) cout << ",";
						}
						cout << "}" << endl;
					}
					else if (b == "No" || b == "no") {
						cout << "\nNo worries Programmer, we can do it some other time";
					}
					else {
						cout << "\nOops! you entered an invalid statement:(";
					}
					break;
				}
				default:
					cout << "\nOops! You have entered invalid choice";
					break;
				}
				break;
			}
			case 2: {
				int size;
				cout << "\nGreat Choice Programmer! lets make an array from scratch";
				cout << "\nHow many number of elements will you add in array? ";
				cin >> size;
				cout << "\nSounds Good!";
				cout << "\n1) Integer \n2) Character \n3) String";
				cout << "\nWhat type of array do you want programmer? ";
				cin >> a;
				switch (a) {
				case 1: {
					int intelement;
					Insertion<int> a1(++size);
					cout << "\nInteger array! Noted \nLets add " << size - 1 << " number(s) into the array \n";
					for (int i = 0; i < size - 1;i++) {
						cout << "Element " << i + 1 << " : ";
						cin >> intelement;
						a1.push(intelement);
					}
					cout << "\nProgrammer you did a great job!";
					a1.display();
					cout << "\nDo you want to insert at a specific position?(yes/no): ";
					cin >> b;
					if (b == "Yes" || b == "yes") {
						cout << "\nSure thing! Lets insert a element at a specific position";
						cout << "\nEnter the position you want your element in: ";
						cin >> pos;
						cout << "\nEnter Element you want at " << pos << " : ";
						cin >> intelement;
						a1.specific(pos, intelement);
						cout << "\nI updated your array";
						a1.display();
					}
					else if (b == "No" || b == "no") {
						cout << "\nNo worries Programmer, we can do it some other time";
					}
					else {
						cout << "\nOops! you entered an invalid statement:(";
					}
					break;
				}
				case 2: {
					char charelement;
					Insertion<char> a2(++size);
					cout << "\nCharacter array! Noted \nLets add " << size << " letter(s) into the array \n";
					for (int i = 0; i < size - 1;i++) {
						cout << "Element " << i + 1 << " : ";
						cin >> charelement;
						a2.push(charelement);
					}
					cout << "\nProgrammer you did a great job!";
					a2.display();
					cout << "\nDo you want to insert at a specific position?(yes/no): ";
					cin >> b;
					if (b == "Yes" || b == "yes") {
						cout << "\nSure thing! Lets insert a element at a specific position";
						cout << "\nEnter the position you want your element in: ";
						cin >> pos;
						cout << "\nEnter Element you want at " << pos << " : ";
						cin >> charelement;
						a2.specific(pos, charelement);
						cout << "\nI updated your array";
						a2.display();
					}
					else if (b == "No" || b == "no") {
						cout << "\nNo worries Programmer, we can do it some other time";
					}
					else {
						cout << "\nOops! you entered an invalid statement:(";
					}
					break;
				}
				case 3: {
					string strelement;
					Insertion<string> a3(++size);
					cout << "\nString array! Noted \nLets add " << size - 1 << " word(s) into the array \n";
					for (int i = 0; i < size - 1;i++) {
						cout << "Element " << i + 1 << " : ";
						cin >> strelement;
						a3.push(strelement);
					}
					cout << "\nProgrammer you did a great job!";
					a3.strdisplay();
					cout << "\nDo you want to insert at a specific position?(yes/no): ";
					cin >> b;
					if (b == "Yes" || b == "yes") {
						cout << "\nSure thing! Lets insert a element at a specific position";
						cout << "\nEnter the position you want your element in: ";
						cin >> pos;
						cout << "\nEnter Element you want at " << pos << " : ";
						cin >> strelement;
						a3.specific(pos, strelement);
						cout << "\nI updated your array";
						a3.strdisplay();
					}
					else if (b == "No" || b == "no") {
						cout << "\nNo worries Programmer, we can do it some other time";
					}
					else {
						cout << "\nOops! you entered an invalid statement:(";
					}
					break;
				}
				default:
					cout << "\nOops!you entered an invalid choice :(";
					break;
				}
			}
			}
			break;
		}
		case 2:
			cout << "\nSure thing Programmer!, Deleting elements could save us some space";
			cout << "\n1) Demo Array\n2) Empty array\n Your Choice:";
			cin >> ch;
			switch (ch) {
			case 1: {
				cout << "\nOk Programmer, we'll directly go towards deletion then";
				cout << "\nWhat type of array should i provide you?: \n1) Integer Array\n2) Character Array\nYour choice: ";
				cin >> a;
				switch (a) {
				case 1: {
					int arr[] = { 1,2,3,4,5 };
					n = 5;
					cout << "\nSure thing! i'll give you an integer array";
					do {
						cout << "\nYour Integer Array: {";
						for (int i = 0;i < n;i++) {
							cout << arr[i];
							if (i != n - 1) cout << ", ";
						}
						cout << "}\n";
						cout << "\nNow lets perform deletion on the array!";
						cout << "\nWhat position would you like to delete?: ";
						cin >> pos;
						int d = arr[pos - 1];
						for (int i = pos; i < n;i++) {
							arr[i - 1] = arr[i];
						}
						n--;
						cout << "\nCongrats Programmer! We deleted " << d << " at position " << pos << " in your array:)";
						cout << "\n Now the Array we have: {";
						if (n != 0) {
							for (int i = 0;i < n;i++) {
								cout << arr[i];
								if (i != n - 1) cout << ", ";
							}
						}
						cout << "}\n";

						if (n != 0) {
							cout << "\nProgrammer Do you want to try deletion again? ";
							cin >> c;
						}
						else {
							cout << "\nThe array is empty, You cant perform anymore deletion:(";
							c = "no";
						}
					} while (c == "Yes" || c == "yes");
					cout << "\nGreat Job Programmer!\n";
					break;
				}
				case 2: {
					char arr[] = { 'a','b','c','d','e' };
					n = 5;
					cout << "\nSure thing! i'll give you an character array";
					do {
						cout << "\nYour character Array: {";
						for (int i = 0;i < n;i++) {
							cout << arr[i];
							if (i != n - 1) cout << ", ";
						}
						cout << "}\n";
						cout << "\nNow lets perform deletion on the array!";
						cout << "\nWhat position would you like to delete?: ";
						cin >> pos;
						char d = arr[pos - 1];
						for (int i = pos; i < n;i++) {
							arr[i - 1] = arr[i];
						}
						n--;
						cout << "\nCongrats Programmer! We deleted " << d << " at position " << pos << " in your array:)";
						cout << "\n Now the Array we have: {";
						if (n != 0) {
							for (int i = 0;i < n;i++) {
								cout << arr[i];
								if (i != n - 1) cout << ", ";
							}
						}
						cout << "}\n";

						if (n != 0) {
							cout << "\nProgrammer Do you want to try deletion again? ";
							cin >> c;
						}
						else {
							cout << "\nThe array is empty, You cant perform anymore deletion:(";
							c = "no";
						}
					} while (c == "Yes" || c == "yes");
					cout << "\nGreat Job Programmer!\n";
					break;
				}
				default:
					cout << "\nOops!you entered an invalid choice :(";
					break;
				}
				break;
			}
			case 2: {
				int size;
				cout << "\nGreat Choice Programmer!, Lets make an array from scratch";
				cout << "\nWhat type of array do you want?\n1) Integer Array\n2) Character Array\n3) String Array\nYour Choice: ";
				cin >> a;
				cout << "\nEnter the number of elements you want to add in your array: ";
				cin >> size;
				cout << "\nSounds good!";
				switch (a) {
				case 1: {
					cout << "\nWe'll create a integer array";
					Insertion<int> d1(size);
					cout << "\nlets add " << size << " integer(s) to the array\n";
					for (int i = 0;i < size;i++) {
						cout << "Element " << i + 1 << ": ";
						cin >> n;
						d1.push(n);
					}
					do {
						cout << "\nProgrammer lets perform deletion on this array";
						d1.display();
						cout << "\nWhat position would you like to delete?: ";
						cin >> pos;
						e = d1.deletion(pos);
						cout << "\nMission Successfull";
						cout << "\nDo you want to perform deletion again on this array?: ";
						cin >> c;
						if (e == -1 && (c == "yes" || c == "Yes")) {
							cout << "\nProgrammer are you dumb?";
							c = "no";
						}
					} while (c == "Yes" || c == "yes");
					break;
				}
				case 2: {
					cout << "\nWe'll create a character array";
					Insertion<char> d1(size);
					cout << "\nlets add " << size << " character(s) to the array\n";
					for (int i = 0;i < size;i++) {
						cout << "Element " << i + 1 << ": ";
						cin >> h;
						d1.push(h);
					}
					do {
						cout << "\nProgrammer lets perform deletion on this array";
						d1.display();
						cout << "\nWhat position would you like to delete?: ";
						cin >> pos;
						e = d1.deletion(pos);
						cout << "\nMission Successfull";
						cout << "\nDo you want to perform deletion again on this array?: ";
						cin >> c;
						if (e == -1 && (c == "yes" || c == "Yes")) {
							cout << "\nProgrammer are you dumb?";
							c = "no";
						}
					} while (c == "Yes" || c == "yes");
					break;
				}
				case 3: {
					cout << "\nWe'll create a string array";
					Insertion<string> d1(size);
					cout << "\nlets add " << size << " word(s) to the array\n";
					for (int i = 0;i < size;i++) {
						cout << "Element " << i + 1 << ": ";
						cin >> b;
						d1.push(b);
					}
					do {
						cout << "\nProgrammer lets perform deletion on this array";
						d1.display();
						cout << "\nWhat position would you like to delete?: ";
						cin >> pos;
						e = d1.deletion(pos);
						cout << "\nMission Successfull";
						cout << "\nDo you want to perform deletion again on this array?: ";
						cin >> c;
						if (e == -1 && (c == "yes" || c == "Yes")) {
							cout << "\nProgrammer are you dumb?";
							c = "no";
						}
					} while (c == "Yes" || c == "yes");
					break;
				}
				default:
					cout << "\nOops!you entered an invalid choice :(";
					break;
				}
				break;
			}
			}
			break;
		case 3: {
			cout << "\nLets do Linear Searching Programmer!";
			cout << "\n\nWe will play a game to make linear searching more fun!";
			cout << "\n\t---> Guess where it's hidden? <---\n\nHow the game works:\n-> I have a random number in my mind from the array that would be given to you\n-> You have to guess the number from the array by entering its position in the given array\n-> if you guess the right number you win!\n\nRules:\n1) You only get 3 tries to guess\n....";
			n = 10;
			int num;
			//a,e
			pos = 1;
			int array[] = { 5, 12, 19, 26, 33, 40, 47, 54, 61, 68 };
			cout << "\nLets Start Programmer!!";
			cout << "\n\nYour array is: { ";
			for (int i = 0;i < n;i++) {
				cout << array[i];
				if (i != n - 1) cout << ", ";
			}
			cout << " }";
			// srand(time(0));       // Removed as per instruction
			num = rand() % n;        // n is your array size (like 10)

			cout << "\nYour Goal: Guess the number i have in my mind in 3 tries\n(Hint: its between 1 and 70)\n\nGood Luck Programmer!";
			cout << "\n{ ";
			for (int i = 0;i < n;i++) {
				cout << array[i];
				if (i != n - 1) cout << ", ";
			}
			cout << " }";
			cout << "\nEnter the position from 1-10 at which you think the number is";
			while (pos < 4) {
				if (pos == 2) {
					if (array[num] == 5) cout << "\n(Hint: The number is a odd number) ";
					if (array[num] == 12) cout << "\n(Hint: The number is a even number)";
					if (array[num] == 19) cout << "\n(Hint: The number is a odd number) ";
					if (array[num] == 26) cout << "\n(Hint: The number is a even number)";
					if (array[num] == 33) cout << "\n(Hint: The number is a odd number) ";
					if (array[num] == 40) cout << "\n(Hint: The number is a even number)";
					if (array[num] == 47) cout << "\n(Hint: The number is a odd number)";
					if (array[num] == 54) cout << "\n(Hint: The number is a even number)";
					if (array[num] == 61) cout << "\n(Hint: The number is a odd number)";
					if (array[num] == 68) cout << "\n(Hint: The number is a even number)";
				}
				if (pos == 3) {
					if (array[num] == 5) cout << "\n(Hint: The number is less than 20) ";
					if (array[num] == 12) cout << "\n(Hint: The number is less than 20)";
					if (array[num] == 19) cout << "\n(Hint: The number is less than 20) ";
					if (array[num] == 26) cout << "\n(Hint: The number is less than 30)";
					if (array[num] == 33) cout << "\n(Hint: The number is less than 40) ";
					if (array[num] == 40) cout << "\n(Hint: The number is greater than 30)";
					if (array[num] == 47) cout << "\n(Hint: The number is a greater than 30)";
					if (array[num] == 54) cout << "\n(Hint: The number is greater than 30)";
					if (array[num] == 61) cout << "\n(Hint: The number is greater than 40)";
					if (array[num] == 68) cout << "\n(Hint: The number is greater than 40 and one less than a iconic number)";
				}
				cout << "\nGuess no " << pos << ": ";
				cin >> a;
				if (a > 0 && a < 11) {
					cout << "\nChecking Position " << a << " -> " << array[a - 1];
					if (a - 1 == num) {
						cout << "\nBingo! You found the Number";
						e = pos;
						pos = 5;
					}
					else if (a - 1 > num) {
						cout << "\nWrong Position! The number is at a lower position";
						pos++;
					}
					else if (a - 1 < num) {
						cout << "\nWrong Position! The number is at a higher position";
						pos++;
					}
				}
				else {
					cout << "\nProgrammer are you high on something?, You have to enter the position that doesnt exists!\nI am not counting that as a guess but comeon yaar try again";
				}
			}

			if (pos == 5) {
				cout << "\nCongrats Programmer! You did a great job";
				if (e == 1) cout << "\nYou found the number in first try, that's insane like what are the possiblities!!";
				if (e == 2) cout << "\nYou found it in Second try, Pretty Good i must say!";
				if (e == 3) cout << "\nYou found it in your Third Try, can be improved:)";
			}
			else {
				cout << "\nNo more try left, Maybe next time Programmer:(";
			}
			cout << "\n\n-> The Game ends here hope you enjoyed it! <-";
			break;
		}
		case 4: {
			n = 1;
			int mid, beg = 0, end = 49;
			int arr[50] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50 };
			cout << "\nSure thing Programmer! Lets Perform Binary Search!";
			cout << "\nLets play a game to perform binary searching!";
			cout << "\n\nGame Name: Reverse Binary Search (Computer guesses your number)";
			cout << "\nThink of a number between 1 and 50. I will try to guess it!\n\nRules:\n- Reply with: higher / lower / correct";
			cout << "\n\nRange Set: [1,50]";
			cout << "\n------------------------------------\n";
			do {
				cout << "\n\nTry #" << n;
				mid = (beg + end) / 2;
				cout << "\nComputer Guesses: ";
				cout << " " << arr[mid];
				cout << "\nHigher,Lower or Correct?: ";
				cin >> c;
				if (c == "Correct" || c == "correct") {
					cout << "\nBingo! Computer found your number: ";
					cout << arr[mid];
					break;
				}
				else if (c == "Higher" || c == "higher") {
					if (n % 2 == 0) {
						cout << "\n-> You said Higher, Okay lets go more high this time";
					}
					else {
						cout << "\n-> You said Higher, Ugh! i'll go higher";
					}
					beg = mid + 1;
					n++;
				}
				else if (c == "lower" || c == "Lower") {
					if (n % 2 == 0) {
						cout << "\n-> You said Lower, Uhh! let me guess again";
					}
					else {
						cout << "\n-> You said Lower,  i'll try again";
					}
					end = mid - 1;
					n++;
				}
			} while (beg <= end);
			cout << "\n\nAttempts used: ";
			cout << n;
			cout << "\nMission Successfull!\n\nThank you for Playing Programmer...\n\n";
			break;
		}
		case 5: {
			n = 1;
			int arr[] = { 8,3,6,2,5 };
			cout << "\nWelcome to Bubble Arena Programmer!\nYour Fighters: { ";
			for (int i = 0;i < 5;i++) {
				cout << arr[i];
				if (i != 4) cout << ", ";
			}
			cout << " }";
			for (int i = 0; i < 4; i++) {
				bool already = true;
				for (int k = 1; k < 5; k++) {
					if (arr[k - 1] > arr[k]) { already = false; break; }
				}
				if (already) break;


				cout << "\n\nRound " << i + 1 << ": \n";
				for (int j = 0; j < 5 - i - 1;j++) {
					if (arr[j] > arr[j + 1]) {
						swap(arr[j], arr[j + 1]);

						cout << arr[j] << " vs " << arr[j + 1];
						cout << " -> " << arr[j] << " wins! (swap)\n";
					}
				}
					cout << "\nCurrent Array: { ";
					for (int i = 0;i < 5;i++) {
						cout << arr[i];
						if (i != 4) cout << ", ";
					}
					cout << " } ";
			}
			cout << "\n\nChampion Order Achieved, Well done Programmer!";
			cout << "\n\nProgrammer,Do you want to give your own fighters?(yes/no): ";
			cin >> c;
			if (c == "Yes" || c == "yes") {
				cout << "Enter number of fighters: ";
				cin >> e;
				Bubble b1(e);
				cout << "Noted! Now enter each fighter: \n";
				for (int i = 0;i < e;i++) {
					cout << "Fighter " << i + 1 << " : ";
					cin >> pos;
					b1.push(pos);
				}
				b1.display();
				cout << "\nLets start today's match!!";
				b1.sort();
				cout << "\n\nChampion Order Achieved, Well done Programmer!";
			}
			break;
		}
		case 6: {
			cout << "\n\nWelcome to The Selection Showdown Programmer!";
			do {
				cout << "\n\n1) System Fighters\n2) Your Fighters\nEnter '1' -> Defualt Fighters\nEnter '2' -> Your own Fighters\nYour Choice: ";
				cin >> ch;
				switch (ch) {
				case 1: {
					int arr[] = { 7,2,9,4,6 };
					cout << "\n\nYour Fighters for today: { ";
					for (int i = 0;i < 5;i++) {
						cout << arr[i];
						if (i != 4) cout << ", ";
					}
					cout << " }";
					for (int i = 0; i < 4;i++) {
						a = 1;
						cout << "\n\nRound "<< i + 1;
						for (int j = i + 1;j < 5;j++) {
							cout << "\nComparing ";
							cout << arr[i] << " vs " << arr[j] << " -> ";
							if (arr[i] > arr[j]) {
								if (a == 1) {
									cout << arr[j] << " takes the crown";
									swap(arr[i], arr[j]);
									a++;
								}
								else if (a % 2 == 0) {
									cout << arr[j] << " takes the lead";
									swap(arr[i], arr[j]);
									a++;
								}
							}
							else if (arr[i] < arr[j]) {
								if (a == 1) {
									cout << arr[i] << " stays on top";
									a++;
								}
								else if (a > 1) {
									cout << arr[i] << " stays undefeated";
								}
							}
						}
						cout << "\nRound ";
						cout << i + 1 << " Winner: " << arr[i];
						cout << "\nLineup after Round ";
						cout << i + 1 << " : { ";
						for (int i = 0;i < 5;i++) {
							cout << arr[i];
							if (i != 4) cout << ", ";
						}
						cout << " }";
					}
					cout << "\n\nFinal ranking of the Fighters: {";
					for (int i = 0;i < 5;i++) {
						cout << arr[i];
						if (i != 4) cout << ", ";
					}
					cout << " }";
					cout << "\nProgrammer you did it! All fighters ranked\n";
					break;
				}
				case 2: {
					cout << "\n\nEnter number of fighters for today: ";
					cin >> e;
					if (e != 1) {
						Selection s(e);
						cout << "\nNoted! Now Enter each fighter: ";
						for (int i = 0;i < e;i++) {
							cout << "\nFighter " << i + 1 << " : ";
							cin >> pos;
							s.push(pos);
						}
						s.display();
						s.sort();
						cout << "\nProgrammer you did it! All fighters ranked\n";
					}
					else {
						cout << "\nMinimum 2 Fighters Required!\n";
					}
					break;
				}
				}
				cout << "\nDo you want to play again?(yes/no): ";
				cin >> c;
				if (c == "yes" || c == "Yes") {
					cout << "\nOk lets play Selection Showdown again Programmer";
				}
			} while (c == "yes" || c == "Yes");
			break;
		}
		case 7: {
			cout << "\t\t=== INSERTION SORT GAME: SORT THE SECRET CODE ===\nYou must guess the correct position where the element will be inserted.\nCorrect guess = +1 point | Wrong guess = computer shows correct step.";
			do {
				cout << "\n\n1) System Array\n2) Custom Array\nYour Choice: ";
				cin >> a;
				switch (a) {
				case 1: {
					InsertionSort i(6);
					i.push(7);
					i.push(3);
					i.push(9);
					i.push(1);
					i.push(6);
					i.push(2);
					i.insertionSort();
					break;
				}
				case 2: {
					cout << "\nEnter size of your array Programmer: ";
					cin >> n;
					InsertionSort i(n);
					if (n == 0 || n == 1) {
						cout << "Minimum Size Requred: 2";
						break;
					}
					else {
						cout << "\nEnter " << n << " Elements:\n";
						for (int j = 0; j < n;j++) {
							cout << "Element " << j + 1 << ": ";
							cin >> e;
							i.push(e);

						}
					}
					i.insertionSort();
					break;
				}
				}
				cout << "\n\nDo you want to play again Programmer? (yes/no): ";
				cin >> c;
			} while (c == "Yes" || c == "yes" || c == "y");
			break;
		}
		case 8: {
			cout << "\t\t========== RECURSION MAZE GAME ==========";
			do {
				cout << "\nEnter starting room number: ";
				cin >> n;
				if (n > 0) {
					maze(n);
					cout << "\n\nThanks for playing the Recursion Maze Programmer!\n";
					cout << "\nDo you want to play again?(yes/no): ";
					cin >> c;
				}
				else {
					cout << "\nMinimum 1 Room Required!\nTry again";
					c = "Yes";
				}
			} while (c == "Yes" || c == "yes" || c == "y");
			break;
		}
		case 9: {
			int currentroom = 4;
			cout << "\t\t========== ESCAPE ROOM - POWERED BY STACK ==========\nSolve puzzles to move forward. Wrong answers push you back!";
			Stack s;
			bool escaped = false;
			while (!escaped) {
				if (s.peek() != currentroom) {
					s.push(currentroom);
				}
				s.display();
				bool correct = false;
				if (currentroom == 4) {
					correct = s.room1();
				}
				if (currentroom == 3) {
					correct = s.room2();
				}
				if (currentroom == 2) {
					correct = s.room3();
				}
				if (currentroom == 1) {
					correct = s.room4();
				}

				if (correct) {
					if (currentroom == 1) {
						cout << "\n\nProgrammer YOU SOLVED THE FINAL PUZZLE!\nYOU ESCAPED THE DUNGEON!\n";
						s.pop();
						cout << "\n\nProgrammer You are now Free!\n";
						break;
					}
					cout << "Correct! Moving to next room...";
					currentroom--;
				}
				else {
					cout << "\nWrong answer! Programmer You must go back to the previous room...";
					s.pop();
					if (!s.empty()) {
						currentroom = s.peek();
						cout << "\nReturned to room ";
						cout << currentroom << "...";
					}
					else {
						cout << "\nYou are back outside...Try again Programmer :(";
						currentroom = 4;
					}
				}
			}
			break;
		}
		case 10: {
			string customer;
			int size = 5, score = 0;
			LinearQueue L(size);
			cout << "\nWelcome to Fast-Food Frenzy!";
			cout << "\nIt's your first day at work, lets start!";
			do {
				cout << "\n\n1) Add Customer\n2) Serve Customer\n3) View Queue\n4) Check Score\n0) Exit\nYour Choice: ";
				cin >> a;
				switch (a) {
				case 1: {
					cout << "Enter Customer type (Regular/VIP/Large/Complainer): ";
					cin >> customer;
					L.enqueue(customer);
					break;
				}
				case 2: {
					customer = L.dequeue();
					int points = 0;
					if (customer == "Regular") points = 10;
					else if (customer == "VIP") points = 20;
					else if (customer == "Large") points = 15;
					else if (customer == "Complainer") points = 5;

					score += points;
					cout << "\nServed: " << customer << " | Points: " << points << " | Total Score: " << score << endl;
					break;
				}
				case 3: {
					L.display();
					break;
				}
				case 4: {
					cout << "\nCurrent Score: ";
					cout << score;
					break;
				}
				case 0: {
					cout << "Exiting Game... Final Score: " << score << endl;
					break;
				}
				default: {
					cout << "Invalid choice.\n";
				}
				}
			} while (a != 0);
			break;
		}
		case 11: {
			cout << "\nWelcome to Zombie Survival Checkpoint";
			CircularQueue q(5);
			string type;
			do {
				cout << "\n1. Add Survivor\n2. Check Next Survivor\n3. View Survivors\n0. Exit\n";
				cout << "Enter choice: ";
				cin >> a;
				if (a == 1) {
					cout << "\nEnter survivor type (Healthy or Infected): ";
					cin >> type;
					q.enqueue(type);
				}
				else if (a == 2) {
					if (!q.isEmpty()) {
						string current = q.peek();
						q.dequeue();

						cout << "\nChecking survivor: " << current << endl;

						if (current == "Infected" || current == "infected") {
							cout << "\nInfected! Removed from checkpoint\n";
						}
						else {
							cout << "\nSurvivor is safe and re-queued\n";
							q.enqueue(current);
						}
					}
					else {
						cout << "\nNo survivors to check\n";
					}
				}
				else if (a == 3) {
					cout << endl;
					q.display();
				}
				else if (a == 0) {
					cout << "\nCheckpoint Closed. Game Over.\n";
				}
				else {
					cout << "\nInvalid Choice";
				}
			} while (a != 0);

			break;
		}
		case 12: {
			LinkedListGame game;
			int value;
			cout << "=== DUNGEON SCORE TRACKER ===\n";
			do {
				cout << "\n1. Add at Beginning";
				cout << "\n2. Add at Middle";
				cout << "\n3. Add at End";
				cout << "\n4. Remove Beginning";
				cout << "\n5. Remove Middle";
				cout << "\n6. Remove End";
				cout << "\n7. Display";
				cout << "\n0. Exit\n";
				cout << "Enter choice: ";
				cin >> a;
				if (a >= 1 && a <= 3) {
					cout << "Enter score: ";
					cin >> value;
				}
				switch (a) {
				case 1:
					game.insertBeg(value);
					break;
				case 2:
					game.insertMid(value);
					break;
				case 3:
					game.insertEnd(value);
					break;
				case 4:
					game.deleteBeg();
					break;
				case 5:
					game.deleteMid();
					break;
				case 6:
					game.deleteEnd();
					break;
				case 7:
					game.display();
					break;
				case 0:
					cout << "Game Over\n";
					break;
				default:
					cout << "Invalid choice\n";
				}
			} while (a != 0);
			break;
		}
		case 13: {
			string song;

			cout << "=== SIMPLE DOUBLY LINKED LIST MUSIC GAME ===\n";
			do {
				cout << "\n1. Add Song\n2. Remove Song\n3. Show Playlist Reverse\n0. Exit\n";
				cout << "Enter choice: ";
				cin >> a;
				cin.ignore();

				if (a == 1) {
					cout << "Enter song name: ";
					getline(cin, song);
					insertion(song);
					cout << song << " added!\n";
				}
				else if (a == 2) {
					deletion();
				}
				else if (a == 3) {
					reverseDisplay();
				}
				else if (a == 0) {
					cout << "Exiting game...\n";
				}
				else {
					cout << "Invalid choice\n";
				}

			} while (a != 0);
			break;
		}
		}
	}while (choice != 0);
	cout << "\nExiting DSA Simulator....";

	return 0;
}