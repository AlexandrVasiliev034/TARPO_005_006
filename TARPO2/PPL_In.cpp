#include "pch.h"
#include "PPL.h"

using namespace std;

	//���� ���������� ������������ ����� ����������������
	void PPL::InData(ifstream& ifst)
	{
		ifst >> Name >> Year >> IsAbstruct;
	}
	// �������� ������� ppl
	namespace {
		PPLFactory pf;
	}