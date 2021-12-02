// Lab_08_1(string).cpp
// <Василик Юлія>
// Лабораторна робота №8.1(string)
// Пошук та заміна символів у літерному рядку 
// Варіант 2


#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int Count(const string s, const char ch)
{
	int k = 0;
	size_t pos = 0;
	while ((pos = s.find(ch, pos)) != -1)
	{
		k++;
		pos++;
	}
	return k;
}
string Change(string& s, const int ch)
{
	size_t pos = 0;
	while ((pos = s.find(ch, pos)) != -1)
		s.replace(pos, 1, "**");
	return s;
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string str;
	cout << "Введіть літерний рядок:" << endl;
	getline(cin, str);
	char ch[4] = "+-=";
	int k = Count(str, ch[0]) + Count(str, ch[1]) + Count(str, ch[2]);
	cout << "Літерний рядок містить " << k << " символів '+ - ='" << endl;
	Change(str, ch[0]);
	Change(str, ch[1]);
	string dest = Change(str, ch[2]);

	cout << "Модифікований літерний рядок: " << dest << endl;

	return 0;
}
