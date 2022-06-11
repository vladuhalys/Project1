#include "../../model/file/file.h"

struct Person
{
	uint32_t id;
	char name[15];
	char surname[15];
	uint32_t age;
	

	void SetInfo(uint32_t id, string name, string surname, uint32_t age);
	void GetInfo();
};
