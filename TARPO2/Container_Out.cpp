#include "pch.h"
#include "Container.h"

using namespace std;
//namespace basic_PL
//{
	//вывод содержимого контейнера
	void container::Out(ofstream &ofst)
	{
		ofst << "Container contents " << len << " elements." << endl;
		for(int i = 0; i < len; i++)
		{
			ofst << i << ": ";
			cont[i]->Out(ofst);
		}		
	}

//}