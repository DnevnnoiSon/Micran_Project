#include<iostream>
#include<string>
#include<vector>
#include <algorithm>

using namespace std;

int main()
{
//1 Task
//Если нужно самостоятельно прописать сортировку:
    vector<string> n1 = {"C_12_F", "C_01_F", "C_75_F", "C_98_F", "C_02_F", "C_31_F", "C_53_F", "C_22_F", "C_11_F", "C_44_F"};

    sort(n1.begin(), n1.end(), [](const string &prev_el, const string &next_el){
        return stoi(prev_el.substr(2)) < stoi(next_el.substr(2));
    });
//Вывод по необходимости:
    for(auto el : n1){
        cout << el << endl;
    }

    return 0;
}
