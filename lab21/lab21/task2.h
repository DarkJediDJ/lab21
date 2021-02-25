#pragma once
#include "class_template.h"
#include <iostream>
#include <string>
void task2() {
	string x = "Jopa";
	street kekw;
	kekw.parameterless_constructor();
	kekw.print();
	kekw.setAdress(2);
	kekw.setHouse(2.1);
	kekw.setLetter('L');
	kekw.setMetro(true);
	kekw.setName(x);
	kekw.setBusStop({ 1,2,3 });
	kekw.print();
}