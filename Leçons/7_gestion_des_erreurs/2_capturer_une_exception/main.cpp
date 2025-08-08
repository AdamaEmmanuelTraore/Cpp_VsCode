#include <iostream>
#include <string>

using namespace std;

int main()
{
    try
    {
        // Code qui pourrait déclencher une exception
        int result{5/0};
        cout << result << endl;
    }
    // nous pouvons cumuler les capture d'erreurs
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