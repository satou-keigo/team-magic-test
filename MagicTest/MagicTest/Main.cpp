#include<iostream>
// ヘッダーファイルの読み込み
#include"Kanda_Test.h"
using namespace std;
int main()
{
	// クラスの定義

	Kanda kanda;

	// メソッドの実装

	kanda.Print();

	system("pause");

	return 0;
}

void text()
{
	cout << "Hallo World" << endl;
}