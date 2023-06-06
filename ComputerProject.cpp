//mzoun almutairi, sara alyami, hadeel alrshood, raghad alqarni//
#include <iostream>
#include <fstream>
using namespace std;
void CharlesLaw()
{

    fstream filein;
    int num;

    float V1, V2, T1, T2;
    filein.open("temperature.txt", ios::in);
    cout << "               __________Charles Law_________          " << endl;
    cout << "\t The law fourmla is: (V1/T1) = (V2/T2)" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Note that the temperature is constant! " << endl;
    string cal;
    do {
        cout << "What do you want to calculate (V1 or V2)?" << endl;
        cin >> cal;
        if (cal == "V1" || cal == "v1")
        {
            cout << "Enter the 2nd volume (V2):  ";
            cin >> V2;
            filein >> T1;
            cout << " the 1st Temperature (T1):  " << T1 << endl;
            filein >> T2;
            cout << " the 2nd Temperature (T2):  " << T2 << endl;

            V1 = (T1 * V2) / T2;
            cout << "The 1st volume (V1)=  " << V1 << endl;
        }


        else
        {
            cout << "Enter the 1nd volume (V1):  ";
            cin >> V1;
            filein >> T1;
            cout << "The 1st Temperature (T1):  " << T1 << endl;
            filein >> T2;
            cout << "The 2nd Temperature (T2):  " << T2 << endl;
            V2 = (T2 * V1) / T1;
            cout << "The 2nd volume (V2)=  " << V2 << endl;
        }
        cout << "do you want to continue in Cherles law? press 1 to Exist and any number to continue" << endl;
        cin >> num;
    } while (num != 1);
    filein.close();
}
void Ohms_law()
{
    fstream filein;

    char ch, ans;
    float volt, curr, res, result;
    filein.open("scores.txt", ios::in);
    if (filein.is_open())
        cout << "    _______ ohms law file calculator________ " << endl;
    cout << "     The Law Formula is V = IR " << endl;
    do {

        cout << "\n please choose from following calculations  " << endl;
        cout << "1. choose 1 to calculate the voltage from known current and resistance " << endl;
        cout << "2. Choose 2 to calculate the current from known voltage and resistance" << endl;
        cout << "3. choose 3 to calculate the resistance from known voltage and current  " << endl;
        cout << " press any other number to quit " << endl;
        cin >> ch;

        switch (ch)
        {

        case '1':
            filein >> curr;
            cout << " the current in amps =  " << curr << endl;
            filein >> res;
            cout << " the resistance in ohms " << res << endl;

            result = curr * res;

            cout << "the voltage is  " << result << " volts" << endl;
            break;

        case '2':
            filein >> volt;
            cout << " the voltage in volts =  " << volt << endl;
            filein >> res;
            cout << " the resistance in ohms =  " << res << endl;

            result = volt / res;

            cout << "the current is " << result << " amps" << endl;
            break;

        case'3':
            filein >> curr;
            cout << " the voltage in volts =  " << volt << endl;
            filein >> curr;
            cout << "the current in amps = " << curr << endl;

            result = volt / curr;

            cout << "the resistance is " << result << " ohms" << endl;
            break;

        default:
            exit(0);
            break;

            filein.close();
        }

        cout << " do you want to continue (yes = 'Y/y' , no = 'N/n') : ";
        cin >> ans;
    }

    while (ans == 'y' || ans == 'Y');



}
void velocitylaw()
{
    fstream filein;

    float v, d, t;
    int x;
    filein.open("score1.txt", ios::in);
    if (filein.is_open())
        cout << "        ___________velocitylaw file calculator___________        " << endl;
    cout << "\t             The law formula is: v=d/t" << endl;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;


    cout << "what do you want to calculate velocity or time or distance?" << endl;

    cout << "Input 1 to find the velocity v" << endl;
    cout << "Input 2 to find the distance d" << endl;
    cout << "Input 3 to find time t" << endl;

   
    cin >> x;

    switch (x)

    {
    case 1:

        filein >> t;
        filein >> d;
        v = d / t;
        cout << "the value of velocity=" << v;
        break;


    case 2:

        filein >> t;
        filein >> v;
        d = v * t;
        cout << "the value of distance=" << d;
        break;


    case 3:

        filein >> v;
        filein >> d;
        t = v * d;
        cout << "the value of time=" << t;
        break;

    default:
        cout << "wrong option" << endl;
        break;

        filein.close();
    }
}


void accelaw()
{

    char ans;
    int chosenCalc;

    cout << "                 _____acceleration and time caclulator_____" << endl;
    cout << "\t the law formula is: [a = V2-V1/t2-t1, t = (d2-d1)/(v2-v1)]";
    do {
        cout << "\nEnter 1 if you want to calculate acceleration, 2 for time, and any other number to exit." << endl;

        cin >> chosenCalc;


        switch (chosenCalc) {

            float d2, d1, v2, v1, t2, t1, a, t;



        case 1:

            cout << "\nenter the the value of V1: ";
            cin >> v1;
            cout << "enter the the value of V2: ";
            cin >> v2;
            cout << "\nenter the value of t1: ";
            cin >> t1;
            cout << "enter the value of t2: ";
            cin >> t2;
            a = (v2 - v1) / (t2 - t1);
            cout << "\nthe value of acceleration is: " << a << " m/s" << endl;
            break;
        case 2:
            cout << "\nNOTE: [t = d2-d1/V2-V1]" << endl;
            cout << "enter the the value of d1: ";
            cin >> d1;
            cout << "enter the the value of d2: ";
            cin >> d2;
            cout << "\nenter the value of V1: ";
            cin >> v1;
            cout << "enter the value of V2: ";
            cin >> v2;
            t = (d2 - d1) / (v2 - v1);
            cout << "\nthe value of time is: " << t << " s" << endl;
            break;


        default:
            exit(0);
            break;
        }

        cout << "\nenter Y/y to continue, or enter N/n to stop the program : ";
        cin >> ans;
    } while (ans == 'y' || ans == 'Y');


}


int main()
{
    string name;
    cout << " user name: " << endl;
    cin >> name;
    cout <<  "WELCOME TO OUR PAGE : " << name <<endl;
    cout << "          ___________________Physisc's laws Programme______________________" << endl;
    cout<<"\n The most important thing is to never stop questioning. \n \t                -Albert Einstein "<< endl;

       
    int choice;
    do {
        cout << endl;
        cout << "Menu:" << endl;
        cout << "1. Charles Law" << endl;
        cout << "2. velocity law" << endl;
        cout << "3. Ohms law" << endl;
        cout << "4. Acceleration  law " << endl;
        cout << "0. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:  CharlesLaw();
            break;
        case 2: velocitylaw();
            break;
        case 3: Ohms_law();
                break;
        case 4: accelaw();
                break;
            default:
                cout << "unaviliable choice! please try again" << endl;
        }
    } while (choice != 0);
    return 0;
}