#include <iostream>
#include <string>

using namespace std;

/*
    Les variables nous permettent de mémoriser des informations,
    ces informations seront stocké dans la mémoire RAM.
    Il existe des type a associer au variables, elle peuvent etre:
        - primitive:
                * char (1 octet)
                * short (2 octets)
                * int (4 octets)
                * float (4 octets)
                * long (4 octets)
                * double (8 octets)
                * long long (8 octets)
                * long double (16 octets)
    
    Déclarer une variable avec le type "auto" nous permet, grace au compilateur
    d'auto-détecter le type de la variable.
*/

int main()
{
    bool is_secure{};                   // initialisation du booleano par défaut
    int some_number{};                  // initialisation d'un entier par défaut
    string welcom_message{"coucou"};    // affectation
    string name = "Carlo";              // autre manière d'affectation
    const int number{40};               // les constante ne peuvent pas etre modifié

    cout<<is_secure<<endl;  // 0
    cout<<some_number<<endl; // 0
    cout<<welcom_message<<" "<<name<<endl;

    return 0;
}