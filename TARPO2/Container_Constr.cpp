#include "pch.h"
#include "Container.h"

//namespace basic_PL
//{
	//������������� ����������
	container::container(): len(0) {}
	//������� ���������� �� ���������
	void container::Clear()
	{
		for(int i = 0; i < len; i++)
		{
			delete cont[i];
		}
		len = 0;
	}

//}