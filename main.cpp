#include "List.h"

/*  Даны 2 списка, содержащие номера студентов двух групп.
    Перевести L студентов из первой группы во вторую.
    Число пересчета k                                      */

int main()
{
    SetConsoleOutputCP(1251);
    int count1, count2, x, y;
    cout << "Введите количество студентов в 1-й группе: ";
    cin >> count1;
    cout << "\nВведите количество студентов в 2-й группе: ";
    cin >> count2;
    system("cls");

    pRing ring1 = NULL, ring2 = NULL;

    cout << "Введите номера студентов:\n";
    cout << "Первая группа:\n";
    for (int i(0); i < count1; ++i)
    {
        cout << "\n" << i + 1 << "-й студент 1-й группы: ";
        cin >> x;
        ring1 = Push_List(ring1, x);
    }
    cout << "\nВторая группа:\n";
    for (int j(0); j < count2; ++j)
    {
        cout << "\n" << j + 1 << "-й студент 2-й группы: ";
        cin >> y;
        ring2 = Push_List(ring2, y);
    }
    system("cls");
    int L, k;
    
    bool flag = true;

    while (flag)
    {
        cout << "Введите количество студентов, которых нужно перевести: ";
        cin >> L;
        system("cls");
        if (L > count1 || L == 0) cout << "Недопустимое количество!\n";
        else flag = false;
    }

    cout << "Введите число пересчета: ";
    cin >> k;

    system("cls");
    cout << "Исходные группы:\n\nПервая группа: ";
    PrintRing(ring1);
    cout << "Вторая группа: ";
    PrintRing(ring2);
    cout << "\n\nKоличество студентов, которых нужно перевести - "
        << L << "\nЧисло пересчета - " << k << "\n\n";

    cout << "Новая 2-я группа: ";
    Task(ring1, ring2, k, L);
    PrintRing(ring2);
    cout << "\n\n" << "Новая 1-я группа: ";
    PrintRing(ring1);
    return 0;
}