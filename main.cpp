#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include <functional>
#include <array>

using namespace std;

bool func(int a, int b, int c) {
    //Неизвестная мне реализация
    //...( По условию для примера дается с = 2)
}


void ascending_sort(vector<string> &n){
    sort(n.begin(), n.end(), [](const string &prev_el, const string &next_el){
        return stoi(prev_el.substr(2)) < stoi(next_el.substr(2));
    });
}

template<typename T>
void result_output(T n){
    for(auto el : n){
        cout << el << endl;
    }
}

int main()
{
//1 Task
    vector<string> n = {"C_12_F", "C_01_F", "C_75_F", "C_98_F", "C_02_F", "C_31_F", "C_53_F", "C_22_F", "C_11_F", "C_44_F"};
//Cортировка по возрастанию:
    ascending_sort(n);
//Вывод по необходимости:
    result_output(n);

//2 Task
//Условное хранилище измеренных данных:
    array<int, 10> a;
    array<int, 12> b;
    array<int, 5> c;
//По заданию: есть тернарный предикат, точная реализация которого мне не известна
//Вариациями трех значений параметров функции было решено сделать контейнерами
//В худшем случае функция вызовется 27 раз
    function<void(int, int, int)> measurement_checking = func;

    auto it = find_if(a.begin(), a.end(), [&](int a){
        return func(a, b[0], c[0]);
    });
    if(it != a.end()){
        cout << "Нужное значение в контейнере А" << endl;
        //Действия..
    }

    it = find_if(b.begin(), b.end(), [&](int b){
        return func(a[0], b, c[0]);
    });
    if(it != b.end()){
        cout << "Нужное значение в контейнере B" << endl;
         //Действия..
    }

    it = find_if(c.begin(), c.end(), [&](int c){
        return func(a[0], b[0], c);
    });
    if(it != c.end()){
        cout << "Нужное значение в контейнере C" << endl;
         //Действия..
    }
    return 0;
}
