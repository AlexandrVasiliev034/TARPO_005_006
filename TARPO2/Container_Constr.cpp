#include "pch.h"
#include "Container.h"

//namespace basic_PL
//{
	//инициализация контейнера
	container::container(): len(0) {}
	//очистка контейнера от элементов
	void container::Clear()
	{
		for(int i = 0; i < len; i++)
		{
			delete cont[i];
		}
		len = 0;
	}

//}