#include "pch.h"
#include "Container.h"

using namespace std;
//namespace basic_PL
//{
	//���� ����������� ����������
	void container::In(ifstream &ifst)
	{
		while(!ifst.eof())
		{
			if((cont[len] = PLanguageFactory::In(ifst)) != 0)
			{
				len++;
			}
		}
	}

//}