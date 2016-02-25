#include <iostream>
#include <string>
using namespace std;

int main(){
	string name;
	string age;
	string favorite_thing;

	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter your age: ";
	cin >> age;
	cout << "Enter your favorite thing: ";
	cin >> favorite_thing;
	cout << "Hello my name is " << name << endl; 
	cout << "I am " << age << " years old and my favorite thing is " << favorite_thing << endl;
}