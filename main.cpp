#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; // alsóvonás hiánya a változónévből
    std::cout << '1-100 ertekek duplazasa' //hiányzik a sorvég 
    for (int i = 0;) //hiányos ciklus
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //hibás felső határ
    {
        std::cout << "Ertek:" //eredmény nincs kiírva
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //változó nincs inicializálva 
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
