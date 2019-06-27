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
	// ���������, ����������� ��������� ����
	PLanguage* f = nullptr;
	// ������������ ��������� ��� ������
	PLanguageFactory* tmp = top;
	// ����� ������ � ����� �� ���, � ������� ���� ��������� � �������
	while (tmp)
	{
		f = tmp->Create(key);
		if (f) return f;
		tmp = tmp->next;
	}
	return nullptr;
}
// �������������, ���������� � ���� ����� �� ������
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
