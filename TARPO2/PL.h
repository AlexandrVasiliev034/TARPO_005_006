#pragma once

#include <fstream>
#include <string>

using namespace std;
namespace basic_PL
{
	// �����, ����������� ��� ��������� �����.
  // �������� �����������, �����������, ��� �����, �������� ����������
	class PL
	{
	public:
		int year; // ��� �������� �����
		int Pos; // ���� ����������� �����
		string Name;
	public:
		static  PL* In(ifstream &ifst);
		virtual void InData(ifstream &ifst) = 0;  // ���� ������ �� ������
		virtual void Out(ofstream &ofst) = 0;     // ����� ������ � ����������� �����
	};

}