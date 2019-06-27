#pragma once
#include "PL.h"
#include "PLanguage.h"

class OOPL : public PLanguage
{
public:
	enum Inheritance {SINGLE = 1, MULTIPLE, INTERFACE};
	int WhatInheritance;
	void InData(ifstream& ifst);
	void Out(ofstream& ofst);
	OOPL() {}
};
// ‘абрика, обеспечивающа€ создание ооп при чтении признака €зыка
class OOPLFactory : public PLanguageFactory {
public:
	//  онструктор фабрики, устанавливющий признак ооп (равен 2)
	OOPLFactory() :PLanguageFactory(2) { }

	// ѕереопределение метода Create на создание ооп.
	PLanguage* Create(int key) {
		if (key == mark)
			return new OOPL;
		else
			return nullptr;
	}
};
