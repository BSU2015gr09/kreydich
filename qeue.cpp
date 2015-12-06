#include <iostream>
#include <cstdlib>
#include <clocale>
using namespace std;

const int SIZE = 5;
int top = 0;
int queue[SIZE] = { NULL };

void push(int value){
	if (top < SIZE){
		top++;
		queue[top - 1] = value;
	}
	else { 
		cout << "������� �����!" << endl;
	}
}

int pop(){
	if (top > 0) {
		int temp = queue[0];
		for (int i = 0; i < top; i++){
			queue[i] = queue[i + 1];
		}
		top--;
		queue[top] = NULL;
		return temp;
	}
	else { cout << "������� �����!" << endl; }
}

void view(){
	if (top == 0){
		cout << "������� �����" << endl;
	}
	else{
		cout << "������� ������� - " << queue[0] << endl;
	}
}

int getNum(){
	cout << "������� �����: ";
	int num;
	cin >> num;
	return num;
}

void getSize(){
	cout << "������� ����� ����� - " << top << endl;
}

int main(){
	setlocale(LC_ALL, "russian");
	push(getNum());
	push(getNum());
	push(getNum());
	view();
	getSize();
	cout << "���������: " << pop() << endl;
	getSize();
	cout << "���������: " << pop() << endl;
	getSize();
	cout << "���������: " << pop() << endl;
	getSize();
	pop();
	push(getNum());
	getSize();
	return 0;
}