#include "pch.h"
#include "PPL.h"

using namespace std;

	//Ввод параметров процедурного языка программирования
	void PPL::InData(ifstream& ifst)
	{
		ifst >> Name >> Year >> IsAbstruct;
	}
	// Создание фабрики ppl
	namespace {
		PPLFactory pf;
	}