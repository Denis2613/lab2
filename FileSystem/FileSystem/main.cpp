#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(){
	setlocale(LC_ALL, "");
	ifstream in("input.txt");
	string word;//�����
	cout << "������� ���������� ����: ";
	int max;
	stringstream ss;	//��������� �����
	while(!(cin >> max)){cin.clear();}//������ �� ������������� �����
	int cnt = 1;//�������
	while(in >> word){//��������� �� �����
		ss << " " << word;
		if(word[word.size() - 1] == '.'){//���� ���������� �� �����
		   if(cnt == max){//����  ����� ��������� ����������
			  	cout << ss.str();// ������� �����������
		   }
		   ss.clear();//������� ����� ������
		   ss.str(std::string());
		   cnt = 0;
		}
		++cnt;
	}
	in.close();//��������� ����										   
	system("pause>>void");

}