#include <iostream>
#include <string>
//#include <Windows.h>
using namespace std;

class KaffeeMachine
{
public:

    // Korregieren Kaffee in der Kaffeemachine
    void Set_Kaffee_in_der_kaffee_Machine(double Value_Kaffee_in_der_Kaffeemachine)
    {
        Jetzt_Kaffee_Gramm_Ref = Value_Kaffee_in_der_Kaffeemachine;
    }

    // Korregieren Kaffee in der Kaffeemachine
    void Set_Milch_in_der_kaffee_Machine(double Value_Milch_in_der_Kaffeemachine)
    {
        Jetzt_Milch_Gramm_Ref = Value_Milch_in_der_Kaffeemachine;
    }

    // Korregieren Kaffee in der Kaffeemachine
    void Set_Wasser_in_der_kaffee_Machine(double Value_Wasser_in_der_Kaffeemachine)
    {
        Jetzt_Wasser_Gramm_Ref = Value_Wasser_in_der_Kaffeemachine;
    }

    // Die Option in der Kaffeemachine
    void Get_Option_von_der_Kaffeemachine()
    {
        cout << "In der Kaffemachine in diesem Moment gibt es: " << endl;
        string array[3] = {};
        array[0] = "\n1. Kaffee:";
        array[1] = "\n2. Milch:";
        array[2] = "\n3. Wasser:";

        /*
        for (int i = 0; i < 4; i++)
        {
            cout << array[i] << endl;
        }
        */

        double array_Oprions[3] = {};
        array_Oprions[0] = Jetzt_Kaffee_Gramm_Ref;
        array_Oprions[1] = Jetzt_Milch_Gramm_Ref;
        array_Oprions[2] = Jetzt_Wasser_Gramm_Ref;

        /*
        for (int i = 0; i < 4; i++)
        {
            cout << array_Oprions[i] << endl;
        }
        */

        for (int i = 0; i < 3; i++)
        {
            cout << array[i] << "\t" << array_Oprions[i] << endl;

        }
    }

    // Prüfen wir die Kaffeemachine in derr Steckdose
    bool Prüfen_Kabel_in_der_Steckdose()
    {
        if (Kabel_in_der_Steckdose)
        {
            cout << "Das Kabel in der Steckdose" << endl;
            return true;
        }
        if (!Kabel_in_der_Steckdose)
        {
            cout << "Kabel von der Kaffeemachine ist nicht in der Steckdose. Korregieren Sie das, bitte und dann probeiren Sie noch ein Mall." << endl;
            return false;
        }

    }

    // Prüfen wir die Option der Kaffeemachine
    void Prüfen_Option_in_der_Kaffeemachine(double& Jetzt_Kaffee_Gramm_Ref, double& Jetzt_Milch_Gramm_Ref, double& Jetzt_Wasser_Gramm_Ref)
    {

        // Wenn wir haben gar nichts
        if (Jetzt_Kaffee_Gramm_Ref == 0)
        {
            cout << "Sie haben kein Kaffee" << endl;
        }

        if (Jetzt_Milch_Gramm_Ref == 0)
        {
            cout << "Sie haben keine Milch" << endl;
        }

        if (Jetzt_Wasser_Gramm_Ref == 0)
        {
            cout << "Sie haben kein Wasser" << endl;
        }

        // Wenn wir haben zu veil
        if (Jetzt_Kaffee_Gramm_Ref > 500)
        {
            cout << "Sie haben zu viel Kaffee" << endl;
        }

        if (Jetzt_Milch_Gramm_Ref > 1000)
        {
            cout << "Sie haben zu veile Milch" << endl;
        }

        if (Jetzt_Wasser_Gramm_Ref > 2000)
        {
            cout << "Sie haben zu viel Wasser" << endl;
        }

        //wenn wir haben nicht 0 und nicht zu viel
        if (Jetzt_Kaffee_Gramm_Ref > 0 && Jetzt_Kaffee_Gramm_Ref <= 500 && Jetzt_Milch_Gramm_Ref > 0 && Jetzt_Milch_Gramm_Ref <= 1000 && Jetzt_Wasser_Gramm_Ref > 0 && Jetzt_Wasser_Gramm_Ref <= 2000)
        {
            cout << "Ihrer Kaffe wird in eine Minute gekocht! Gutten Appetit!" << endl;
        }

    }



    //Man kann die standarte Option sehen
    double Get_Höchstgrenze_Kaffee_Gramm()
    {
        return Höchstgrenze_Kaffee_Gramm;
    }
    double Get_Höchstgrenze_Milch_Gramm()
    {
        return Höchstgrenze_Milch_Gramm;
    }
    double Get_Höchstgrenze_Wasser_Gramm()
    {
        return Höchstgrenze_Wasser_Gramm;
    }

    // Binder wir Kabel in der Steckdose ver
    void Set_Kabel_in_der_Steckdose(bool Value_Kabel_in_der_Steckdose)
    {
        Kabel_in_der_Steckdose = Value_Kabel_in_der_Steckdose;
    }

    //Man kann achten darauf, wie viel Kaffee in der Kaffeemachine es gibt
    double Kaffee_Gramm_in_der_Kaffeemachine()
    {
        return Jetzt_Kaffee_Gramm;
    }
    double Milch_Gramm_in_der_Kaffeemachine()
    {
        return Jetzt_Milch_Gramm;
    }
    double Wasser_Gramm_in_der_Kaffeemachine()
    {
        return Jetzt_Wasser_Gramm;
    }

    //Man kann bearbeiten die Optionen von der Kaffeemachine: Kaffee, Milch, Wasser

    void Kaffee_Gramm_in_der_Kaffeemachine(double Value_Kaffee)
    {
        Jetzt_Kaffee_Gramm = Value_Kaffee;
    }
    void Milch_Gramm_in_der_Kaffeemachine(double Value_Milch)
    {
        Jetzt_Milch_Gramm = Value_Milch;
    }
    void Wasser_Gramm_in_der_Kaffeemachine(double Value_Wasser)
    {
        Jetzt_Wasser_Gramm = Value_Wasser;
    }

private:

    // Die Option in der Kaffeemachine
    void Option_von_der_Kaffeemachine()
    {
        string array[4] = {};
        array[0] = "In der Kaffemachine in diesem Moment gibt es: ";
        array[1] = "\n1. Kaffee:";
        array[2] = "\n2. Milch:";
        array[3] = "\n3. Wasser:";

        /*
        for (int i = 0; i < 4; i++)
        {
            cout << array[i] << endl;
        }
        */

        double array_Oprions[4] = {};
        array_Oprions[0] = Jetzt_Kaffee_Gramm_Ref;
        array_Oprions[1] = Jetzt_Milch_Gramm_Ref;
        array_Oprions[2] = Jetzt_Wasser_Gramm_Ref;

        /*
        for (int i = 0; i < 4; i++)
        {
            cout << array_Oprions[i] << endl;
        }
        */

        for (int i = 0; i < 4; i++)
        {
            cout << array[i] << "\t" << array_Oprions[i] << endl;

        }
    }

    double Höchstgrenze_Kaffee_Gramm = 500; // Das ist höchstere Option von dem Gramm des Kaffees
    double Höchstgrenze_Milch_Gramm = 1000; // Das ist höchstere Option von dem Gramm der Milch
    double Höchstgrenze_Wasser_Gramm = 2000; // Das ist höchstere Option von dem Gramm des Wassers

    double Jetzt_Kaffee_Gramm = {}; // Das ist Option die können wir bearbeiten
    double Jetzt_Milch_Gramm = {}; // Das ist Option die können wir bearbeiten
    double Jetzt_Wasser_Gramm = {}; // Das ist Option die können wir bearbeiten

    double& Jetzt_Kaffee_Gramm_Ref = Jetzt_Kaffee_Gramm;
    double& Jetzt_Milch_Gramm_Ref = Jetzt_Milch_Gramm;
    double& Jetzt_Wasser_Gramm_Ref = Jetzt_Wasser_Gramm;

    bool Kabel_in_der_Steckdose = false; // Wir prüfen die Energie für Kaffeemachine
    bool Start_Kaffeemachine = false; // Wir prüfen Wasser, Milch und Kaffee


};

void Backspace()
{
    int const SIZE = 100;
    char arr_Backspace[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        arr_Backspace[i] = '=';
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << arr_Backspace[i];
    }
    cout << endl;

}


int main()
{
    //SetConsoleOutputCP(CP_UTF8);

    KaffeeMachine KaffeeMachine;

    string Verbindung;
    double Kaffee;
    double Milch;
    double Wasser;

    cout << u8"Hallo, ich bin Kaffeemachine." << endl;
    cout << u8"Zuerst binden Sie mich in der Steckdose ver. (Schreiben Sie ok)" << endl;
    cin >> Verbindung;

    if (Verbindung == "ok")
    {

        KaffeeMachine.Set_Kabel_in_der_Steckdose(true);
        KaffeeMachine.Prüfen_Kabel_in_der_Steckdose();
    }
    else
    {
        KaffeeMachine.Set_Kabel_in_der_Steckdose(false);
        KaffeeMachine.Prüfen_Kabel_in_der_Steckdose();
        exit(0);

    }

    Backspace();

    KaffeeMachine.Get_Option_von_der_Kaffeemachine();

    Backspace();

    cout << u8"Füllen Sie Kaffee" << endl;
    cin >> Kaffee;
    KaffeeMachine.Set_Kaffee_in_der_kaffee_Machine(Kaffee);


    cout << u8"Füllen Sie Milch" << endl;
    cin >> Milch;
    KaffeeMachine.Set_Milch_in_der_kaffee_Machine(Milch);

    cout << u8"Füllen Sie Wasser" << endl;
    cin >> Wasser;
    KaffeeMachine.Set_Wasser_in_der_kaffee_Machine(Wasser);

    Backspace();

    KaffeeMachine.Get_Option_von_der_Kaffeemachine();

    Backspace();

    KaffeeMachine.Prüfen_Option_in_der_Kaffeemachine(Kaffee, Milch, Wasser);

    //system("pause > nul");
    return 0;
}
