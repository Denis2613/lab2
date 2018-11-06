#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(){
	setlocale(LC_ALL, "");
	ifstream in("input.txt");
	string word;//слово
	cout << "¬ведите колчиество слов: ";
	int max;
	stringstream ss;	//строковый поток
	while(!(cin >> max)){cin.clear();}//защита от некорреткного ввода
	int cnt = 1;//счЄтчик
	while(in >> word){//считываем по слову
		ss << " " << word;
		if(word[word.size() - 1] == '.'){//если наткнулись на точку
		   if(cnt == max){//если  равно заданному количеству
			  	cout << ss.str();// выводим предложение
		   }
		   ss.clear();//очищаем поток вывода
		   ss.str(std::string());
		   cnt = 0;
		}
		++cnt;
	}
	in.close();//закрываем файл										   
	system("pause>>void");

}