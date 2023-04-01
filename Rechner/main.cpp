#include <iostream>
#include <string>

using namespace std;

class [[maybe_unused]] Rechner
{
public:

    double static Summierung(double &aZahl1, double &aZahl2)
    {
      return aZahl1 + aZahl2;
    }

    double static Abziehen(double &aZahl1, double &aZahl2)
    {
        return aZahl1 - aZahl2;
    }

    double static Multiplikation(double &aZahl1, double &aZahl2)
    {
        return aZahl1 * aZahl2;
    }

    double static Teilung(double &aZahl1, double &aZahl2) {
        return aZahl1 / aZahl2;
    }

};

int main()
{
    double Zahl1;
    double Zahl2;
    char Mathematiches_Handel;
    string Antwort;

    bool Kontrolle = true;

    while(Kontrolle)
    {

        Rechner Mathematik;

        cout << "Pflegen Sie der Zahl 1" << endl;
        cin>>Zahl1;
        double &aZahl1 = Zahl1;

        cout << "Pflegen Sie der Zahl 2" << endl;
        cin>>Zahl2;
        double &aZahl2 = Zahl2;

        cout << "Pflegen Sie der Mathematiches Handel" << endl;
        cin>>Mathematiches_Handel;


        switch (Mathematiches_Handel)
        {
            case '+':
               cout << Rechner::Summierung(aZahl1, aZahl2) << endl;
                break;
            case '-':
                cout << Rechner::Abziehen(aZahl1, aZahl2) << endl;
                break;
            case '*':
                cout << Rechner::Multiplikation(aZahl1, aZahl2) << endl;
                break;
            case '/':
                cout << Rechner::Teilung(aZahl1, aZahl2) << endl;
                break;
        }

        cout << "Noch ein Mal?" << endl;
        cin>>Antwort;

        if (Antwort == "Nein")
        {
            Kontrolle = false;
        }
        else
        {
            Kontrolle = true;
        }



    }
    return 0;
}
