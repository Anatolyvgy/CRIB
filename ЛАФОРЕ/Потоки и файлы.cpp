#include <iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int i;
	system("chcp 1251>nul");
	while (true)// цикл до тех пор пока ввод не будет корректным
	{
		cout << "Введите целое число :";
			cin >> i;
			if (cin.good())// если нет ошибок (ошибка, которая определяется 
                   //по этой схеме, это ввод не цифр, а каких-либо символов)
			{
				cin.ignore(10, '\n');// удалить разделитель строк
				break;               // выйти из цикла
			}
			cin.clear();// Очистить биты ошибок
			cout << "Неправильный ввод данных !";
			cin.ignore(10, '\n');// Удалить разделитель строк 
			//Чтобы избежать случайного извлечения из потока лишних символов, 
			//используется метод istream — функция ignore(MAX, DELIM). Она 
			//считывает и выкидывает вплоть до MAX числа символов,включая 
			//указанный ограничитель. В нашем примере выражение cin.ignore(10, '\n');
            //приводит к считыванию до 10 символов, включая ограничитель '\n', 
			//и удалению их из входного потока.
	}
	cout << "Целое число :" << i;// целое без ошибок
	

	while (true)
	{
		cout << "Введите целлое число :" << endl;
		cin.unsetf(ios::skipws);//не игнорировать разделители
		//возможность дать команду входному потоку
        //не игнорировать разделители. Это делается с помощью флага skipws:
		//Уж теперь если пользователь и нажмет Enter, забыв ввести данные,
        //то будет установлен флаг failbit и тем самым сгенерирован признак ошибки.
		cin >> i;
		if (cin.good())
		{
			cin.ignore(10, '\n');
			break;
		}
		cin.clear();
		cout << "Неправильный ввод данных !";
		cin.ignore(10, '\n');
	}
	cout << "Целое число :" << i;
	return 0;
}



