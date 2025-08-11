#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*
    Pour la lecture: ios::in
    Pour l'écriture: ios::out
    Pour ouvrir un fichier binaire: ios::binary (image, icone, logo, etc...)
    Ecrit a la fin du fichier: ios::ate et ios::app
*/

int main()
{
    ifstream lectureF{"animals.txt"};       // i=input f=file stream=flux
    ofstream ecritF{"data.txt"};       // o=output f=file stream=flux
    ifstream lireTout{"animals.txt"};

    // lis x lettre dans le fichier f{"animals.txt"}.
    if(lectureF.is_open())
    {
        string name{""};
        lectureF >> name;
        cout << name << endl;
    }

    lectureF.close();

    // écrire sur le fichier
    if(ecritF.is_open())
    {
        ecritF << "Hello World!";
    }

    ecritF.close();

    // lire plusieurs ligne du fichier
    if(lireTout.is_open())
    {
        string line{""};
        getline(lireTout >> ws, line);
        cout << line << endl;
    }

    lireTout.close();


    return 0;
}