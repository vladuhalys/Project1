#include "person.h"

void Person::SetInfo(uint32_t id,string name, string surname, uint32_t age)
{
	this->id = id;
	strcpy(this->name, name.c_str());
	strcpy(this->surname, surname.c_str());
	this->age = age;
}

void Person::GetInfo()
{
	print("id : ");			println(id);
	print("name : ");		println(name);
	print("surname : ");	println(surname);
	print("age : ");		println(age);
}