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
// �������, �������������� �������� ��� ��� ������ �������� �����
class OOPLFactory : public PLanguageFactory {
public:
	// ����������� �������, �������������� ������� ��� (����� 2)
	OOPLFactory() :PLanguageFactory(2) { }

	// ��������������� ������ Create �� �������� ���.
	PLanguage* Create(int key) {
		if (key == mark)
			return new OOPL;
		else
			return nullptr;
	}
};
