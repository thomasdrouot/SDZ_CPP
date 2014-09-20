#include <iostream>
#include <string>

using namespace std;

int main()
{
    int ageUtilisateur(20);
    int monAge(25);
    int ageTotal(0);

    ageTotal = ageUtilisateur+monAge;
    cout << "l'age cumule est : " << ageTotal << endl;
    //string monNom("Drouot");
    //char lettre('a');
    //cout << "Hello world!" << endl;
    //cout << "Mon nom est :";
    //cout << monNom << endl;
    //cout << "quel est ton age?";
    //cin >> ageUtilisateur;
    //cin.ignore();
    //cout << "tu as donc " << ageUtilisateur << " ans."<< endl;
    //cout << "quel est ton nom ?";
    //getline(cin,monNom);
    //cout << "alors bonjour " << monNom << endl;
    return 0;
}
