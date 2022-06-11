#include "../../lib/lib.h"
using namespace std;


struct File
{
	fstream file;
	string path;

	template <typename T>
	void Save(T object)
	{
		file.open(path, ios::out | ios::binary);
		if (!file.is_open())
		{
			cout << "Error!" << endl;
		}
		else
		{
			file.write((char*)&object, sizeof(object));
			cout << "Saved!" << endl;
			file.close();
		}
	}
	template <typename T>
	T Load()
	{
		T object;
		file.open(path, ios::in | ios::binary);
		if (!file.is_open())
		{
			cout << "Error!" << endl;
		}
		else
		{
			
			file.read((char*)&object, sizeof(object));
			cout << "Loaded!" << endl;
			file.close();
		}
		return object;
	}
};
