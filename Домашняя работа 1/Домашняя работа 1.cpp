#include<iostream>
using namespace std;

#pragma region "Задание 1"
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	int i = 1;
//	int n = 0;
//	    do
//    {
//			cout << "Ввести цифру: "; cin >> n;
//			cout << i << "*" <<n<< " = " << i * n << endl;
//			i++;
//	}
//		while (n != 0);
//    cout << "Программа завершена.\n";
//    return 0;
//}

#pragma region "Задание 2"
//int main()
//{
//     setlocale(LC_ALL, "Russian");
//	 int n = 0;
//	 int i = 0;
//	 cout << "Введите цифру от: "; cin >> i;
//	 cout << "Введите цифру до: "; cin >> n;
//	 while (i++ != n)
//	 {
//		 if (i % 7 == 1 || i % 7 == 3 || i % 7 == 5)
//		 {
//			 cout << i << endl;
//		 }
//	 }
//	 return 0;
//}

#pragma region "Задание 3"
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    int i, j, n;
//    cout << "Введите высоту пирамиды: "; cin >> n;
//    for (int i = 1; i < n; i++)
//    {
//        for (int j = 1; j < i * 2; j++)
//            cout << "^";
//        cout << endl;
//    }
//   
//    return 0;
//}

#pragma region "Задание 4"
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    int i = 0;
//    cout << "Введите четырехзначное число: "; cin >> i;
//    cout << endl;
//    bool fun(unsigned int& i);
//    {
//        if (i < 1000 || i>9999)
//            cout << "Ваше число неверно" << endl;
//        
//    }
//    do
//    {
//        cout << i % 10;
//    } 
//    while (i /= 10);
//    return 0;
//}

#pragma region "Задание 5"
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d=0;
//	char s=0;
//	cout << "Введите первую дробь: "; cin >> a >> s >> b;
//	cout<<"Введите вторую дробь: ";cin>>c>>s>>d;
//	cout<<"Сумма равна (a * d + b * c/b * d ) = "<<a * d + b * c<<'/'<<b * d<<endl;
//	return 0;
//}

#pragma region "Задание 6"
//int main()
//
//{
//	setlocale(LC_ALL, "Russian");
//	int age = 0; 
//	int maxAge = 0; 
//	int minAge = 100;
//	int sum = 0;
//	int average = 0;
//	int amount = 0;
//	cout << "Введите количество посетителей спортзала: ";
//	cin >> amount;
//	for (int i = 0; i < amount; i++)
//	{
//		cout << "Введите возраст " << i + 1 << "-го посетителя: ";
//		cin >> age;
//		if (age > maxAge) 
//			maxAge = age; 
//		if (age < minAge)
//			minAge = age;
//		sum += age;
//
//	}
//	average = sum / amount;
//	cout << "\nСредний возраст всех посетителей: " << average << endl;
//	cout << "\nСамый взрослый: " << maxAge << endl;
//	cout << "\nСамый молодой: " << minAge << endl;
// return 0;
//}

