#pragma once
#include "PL.h"
#include "PLanguage.h"

class PPL : public PLanguage
{
public:
	bool IsAbstruct;
	void InData(ifstream& ifst);
	void Out(ofstream& ofst);
	PPL() {}
};
// ‘абрика, обеспечивающа€ создание п€з при чтении признака €зыка
class PPLFactory : public PLanguageFactory {
public:
	//  онструктор фабрики, устанавливющий признак п€з (равен 1)
	PPLFactory() :PLanguageFactory(1) { }

	// ѕереопределение метода Create на создание €зыка.
	PLanguage* Create(int key) {
		if (key == mark)
			return new PPL;
		else
			return nullptr;
	}
};
