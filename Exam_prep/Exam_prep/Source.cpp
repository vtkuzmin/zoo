
#include "stdio.h"
#include "iostream"
#include <string>
#include <vector>
#include "Cats.h"
#include  "Zoo.h"
#include "time.h"
#include "conio.h"
using namespace std; //про-во имен базовых бибилиотек 

void AddSomeCats(Zoo& zoo) {
	switch (rand() % 2) {
	case 0:
		zoo.AddCat(new Cat());
		break;
	case 1:
		zoo.AddCat(new Tiger());
		break;
	}

}

int main() {
	srand(time(0));
	Zoo zoo;
	for (int i = 0; i < 6; i++) {
		AddSomeCats(zoo);
	}
	zoo.SayHello();
	int s = 0;
	for (int i = 0; i < zoo.m_Cats.size(); i++) {
		if (dynamic_cast<Cat*>(zoo.m_Cats[i])) s++;
	}
	cout << "There are " << s << " cats in the Zoo" << endl;
	system("pause");
	return 0;
}
