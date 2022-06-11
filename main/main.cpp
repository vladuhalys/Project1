#include "../core/entities/person/person.h"


using namespace std;


int main()
{

	Person p_1;
	//p_1.SetInfo(0, "Bob", "Mitchal", 34);

	File* file = new File;
	file->path = "data.bin";

	//file->Save<Person>(p_1);
	p_1 = file->Load<Person>();
	p_1.GetInfo();
	


	return 0;
}