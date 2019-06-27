#pragma once
#include "PLanguage.h"

	class container
	{
	public:
		enum {max_len = 100}; // ������������ �����
		int len; //������� �����
		PLanguage *cont[max_len];
		void In(ifstream &ifst); // ���� ������ � ��������� �� �������� ������
		void Out(ofstream &ofst); // ����� ������ � ��������� ������
		void Clear(); // ������� ����������
		container(); // ������������� ����������
		~container() { Clear(); } // ���������� ���������� ����� ������������
	};
