#include <iostream>
#include <Windows.h>

using namespace std;

class Student {
private:
	string _name;
	int _age;
	string _group;

public:
	Student(string name, int age, string group) :
		_name(name), _age(age), _group(group) {}

	Student() : Student("No name", 0, "No group") {}

	string get_name() {
		return _name;
	}

	string get_group() {
		return _group;
	}

	int get_age() {
		return _age;
	}

	void set_age(int age) {
		if (age < 0) return;

		_age = age;
	}

	void set_group(string group) {
		_group = group;
	}

	void set_name(string name) {
		_name = name;
	}

	void print_info() {
		cout << "Имя: " << _name << endl <<
			"Возраст: " << _age << endl <<
			"Группа: " << _group << endl;
	}
};

int main() {
	setlocale(0, "");
	SetConsoleCP(1251);

	Student ivan;
	ivan.print_info();

	cout << "\n===Второй студент===\n" << endl;

	Student petr("Петр", 40, "СБД321");
	petr.print_info();

	return 0;
}