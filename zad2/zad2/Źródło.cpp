#include <iostream>
#include <string>
#include "fun.h"
using namespace std;


int main() {

	point punkt;
	circle kolko;

	cout << "Czy punkt lezy w kole? : " <<boolalpha<< kolo(&kolko,&punkt);

	getchar();
	return 0;
}