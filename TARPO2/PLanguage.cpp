#include "pch.h"
#include<time.h>
#include "PLanguage.h"

PLanguageFactory* PLanguageFactory::top = nullptr;

PLanguageFactory::PLanguageFactory(int m) : mark(m)
{
	this->next = top;
	top = this;
}
//------------------------------------------------------------------------------
PLanguage* PLanguageFactory::Make(int key)
{
	// Указатель, фиксирующий созданный язык
	PLanguage* f = nullptr;
	// Формирование указателя для обхода
	PLanguageFactory* tmp = top;
	// Обход фабрик в стеке до той, у которой ключ совпадает с искомым
	while (tmp)
	{
		f = tmp->Create(key);
		if (f) return f;
		tmp = tmp->next;
	}
	return nullptr;
}
// иденитфикация, порождение и ввод языка из потока
PLanguage* PLanguageFactory::In(ifstream &ifst)
{
	PLanguage *pl = nullptr;
	int k;
	ifst >> k;
	pl = Make(k);
	if (pl)
	{
		pl->InData(ifst);
	}	
	return pl;
}
