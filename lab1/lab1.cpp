// lab1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <math.h> 
using namespace std;

int main()
{
    ofstream fout;
    string fileName;
    long long totalSize;
    int newNumber;
    float mbSize;
    srand(time(0));
    
    cout << "Input fileName\n";
    cin >> fileName;
    fout.open(fileName, ios::binary | ios::out);

    cout << "Input total MB size\n";
    cin >> mbSize;
    totalSize = long long(mbSize * 1024 * 1024);

    while (fout.tellp() < totalSize) {
        newNumber = int(rand());
        fout.write((char*)&newNumber,sizeof(int));
    }
    cout << "Generation finished!";
    fout.close();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
