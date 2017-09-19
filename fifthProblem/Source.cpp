#include "MyList.h"

int main() {
	MyList myList;
	myList.add(5);
	myList.add(6);
	myList.add(9);
	myList.add(100);
	myList.print();
	myList.delete_element(5);
	myList.print();
	MyList f, s;
	myList.split(10, f, s);
	f.print();
	s.print();
	system("pause");
	return 0;
}