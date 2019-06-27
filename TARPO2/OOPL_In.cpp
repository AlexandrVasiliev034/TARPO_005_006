#include "pch.h"
#include "OOPL.h"

using namespace std;

	void OOPL::InData(ifstream& ifst)
	{
		ifst >> Name >> Year >> WhatInheritance;
	}
	// Создание фабрики ооп
	namespace {
		OOPLFactory oof;
	}