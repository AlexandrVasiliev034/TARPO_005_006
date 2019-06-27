#pragma once

#include <fstream>
#include <string>

using namespace std;
namespace basic_PL
{
	//  ласс, обобщающает все имеющиес€ €зыки.
  // явл€етс€ абстрактным, обеспечива€, тем самым, проверку интерфейса
	class PL
	{
	public:
		int year; // год создани€ €зыка
		int Pos; // ключ конкретного €зыка
		string Name;
	public:
		static  PL* In(ifstream &ifst);
		virtual void InData(ifstream &ifst) = 0;  // ввод данных из потока
		virtual void Out(ofstream &ofst) = 0;     // вывод данных в стандартный поток
	};

}