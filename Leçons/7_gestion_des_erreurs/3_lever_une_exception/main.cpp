#include <iostream>
#include <string>

using namespace std;

int main()
{
    try
    {
        // avec throw on lève une exception manuelement et personalisé
        throw invalid_argument("Pas le bon argument");
    }
    catch(const invalid_argument& err)
    {
        cerr << err.what() << '\n';
    }
    catch(const exception& err)
    {
        cerr << "Une erreur s'est produite" << '\n';
    }
    

    return 0;
}