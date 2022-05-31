#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

class FEE
{
    int cl1 = 180;
    int cl2 = 280;
    int cl3 = 380;
    int cl4 = 480;
    int cl5 = 580;
    int cl6 = 680;
    int cl7 = 780;
    int cl8 = 880;
    int cl9 = 980;
    int cl10 = 1080;
public:
    void Display();
    void Feelist();
    void Help();
    void Feeslip();
    void Total();
    void Modification();
    void Quit();

    
};

// FEE :: FEE(){
   
// }

void FEE ::Display()
{
    system("CLS");
    cout << "This is a school fees inquiry system " << endl
         << endl;
    system("PAUSE");
    cout << "Press F for : FEES LIST " << endl;
    cout << "Press S for : FEES SLIP " << endl;
    cout << "Press M for : Modification" << endl;
    cout << "Press H for : Help" << endl;
    cout << "Press Q to Quit" << endl;
}
void FEE ::Help()
{
    system("CLS");
    cout << "This is a fee structure program" << endl;
    cout << "It can be used to :  " << endl;
    cout << "1. View the fee slip of a student of a class" << endl;
    cout << "2. Modify the fee structure of the school" << endl;
    cout << "3. View the fee structure of the school in the form of alist" << endl;
    cout << "The menu functions are described as follows" << endl;
    cout << "1. FEE SLIP:  This function displays the fee slip for a givenstudent" << endl;
    cout << " from the class entered by the user. " << endl;
    cout << "2. MODIFY:    This function modifies the fee structure for a given class." << endl;
    cout << " The user can change the fees for various fields" << endl;
    cout << "3. LIST:      This function displays the list of total fees for all the" << endl;
}

void FEE ::Feelist()
{

    system("CLS");
    cout << "--------------------------------------------------------------------" << endl;
    cout << " Class                                               Fee per student" << endl;
    cout << "   1                                                    " << cl1 << endl;
    cout << "   2                                                    " << cl2 << endl;
    cout << "   3                                                    " << cl3 << endl;
    cout << "   4                                                    " << cl4 << endl;
    cout << "   5                                                    " << cl5 << endl;
    cout << "   6                                                    " << cl6 << endl;
    cout << "   7                                                    " << cl7 << endl;
    cout << "   8                                                    " << cl8 << endl;
    cout << "   9                                                    " << cl9 << endl;
    cout << "   10                                                   " << cl10 << endl;
    cout << "--------------------------------------------------------------------" << endl;
}

void FEE ::Feeslip()
{
    system("CLS");
    time_t now = time(0);
    char *dt = ctime(&now);
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    int n;
    char s[18];
    int fees;
    int actfee;
    int complabfee;
    int annualcharges;
    int sciencelabfee;
    int annualfund;
    int total;
    int totalfees;

    actfee = 200;
    complabfee = 50;
    annualcharges = 500;
    sciencelabfee = 0;
    annualfund = 50;
    total = actfee + complabfee + annualfund + annualcharges + sciencelabfee;

    cout << "Enter the class whose fees you want to know about :" << endl;
    cin >> n;

    if (n == 1)
    {
        fees = cl1;
    }
    else if (n == 2)
    {
        fees = cl2;
    }
    else if (n == 3)
    {
        fees = cl3;
    }
    else if (n == 4)
    {
        fees = cl4;
    }
    else if (n == 5)
    {
        fees = cl5;
    }
    else if (n == 6)
    {
        fees = cl6;
    }
    else if (n == 7)
    {
        fees = cl7;
    }
    else if (n == 8)
    {
        fees = cl8;
    }
    else if (n == 9)
    {
        fees = cl9;
    }
    else if (n == 10)
    {
        fees = cl10;
    };

    if (n >= 1 && n <= 10)
    {
        cout << "Please enter the name of student: " << endl;
        cin >> s;
        cout << endl
             << endl;
        cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
        cout << "   NATIONAL UNIVERSITY OF COMPUTER AND EMERGING SCIENCES   " << endl;
        cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
        cout << "Date/Day/time : " << dt << endl
             << endl;
        cout << "   Name : " << s << endl;
        cout << "   Class : " << n << endl;
        cout << endl;
        cout << "    Fees of student is:        " << fees << endl;
        cout << "    Adding all the particulars " << endl;
        cout << "    Activities fees:           " << actfee << endl;
        cout << "    Computer lab fees:         " << complabfee << endl;
        cout << "    Annual charges:            " << annualcharges << endl;
        cout << "    Annual Funds:              " << annualfund << endl;
        cout << "    Total:                     " << total << endl
             << endl
             << endl;

        totalfees = total + fees;

        cout << "The total fees of " << s << " is " << totalfees << endl;
        cout << endl;
        cout << "Thank You";
    }
    else
    {
        cout << "There are classes starting from 1-10. You can not go beyond this limit, Try again" << endl;
    };
}

void FEE ::Modification()
{
    system("CLS");
    int v;
    int mfees;
    char ch;
    int nfees;
    cout << "----Welcome----" << endl
         << endl;
    cout << "Which class's fees structure you want to modify?: " << endl;
    cin >> v;

    if (v == 1)
    {
        mfees = cl1;
    }
    else if (v == 2)
    {
        mfees = cl2;
    }
    else if (v == 3)
    {
        mfees = cl3;
    }
    else if (v == 4)
    {
        mfees = cl4;
    }
    else if (v == 5)
    {
        mfees = cl5;
    }
    else if (v == 6)
    {
        mfees = cl6;
    }
    else if (v == 7)
    {
        mfees = cl7;
    }
    else if (v == 8)
    {
        mfees = cl8;
    }
    else if (v == 9)
    {
        mfees = cl9;
    }
    else if (v == 10)
    {
        mfees = cl10;
    };

    if (v >= 1 && v <= 10)
    {
        cout << "Fees you want to modify is fees of class " << v << " and it is " << mfees << endl;
        cout << "You surely want to modify it? (y/n) " << endl;
        cin >> ch;
        if (ch == 'y' || ch == 'Y')
        {
            cout << "Enter new fees: " << endl;
            cin >> nfees;
            mfees = nfees;
            cout << "Your updated fees of class " << v << " is " << nfees << endl;
        }

        else if (ch == 'n' || ch == 'N')
        {
            system("CLS");
            cout << "Thank you for your time! " << endl;
            cout << "Start again if you want to know more" << endl;
        }
    }

    else
    {
        cout << "There are classes starting from 1-10. You can not go beyond this limit, try again" << endl;
    }
}

void FEE ::Quit()
{
    system("CLS");
    cout << "Thank you for your time" << endl;
    cout << "Run again if you want to know more" << endl;
    cout << "Have a good day. Allah Haafiz" << endl;
    system("PAUSE");
}

int main()
{
    FEE d;
    char c;
    while(c != 'Q' && c != 'q'){
        d.Display();
        cout << endl;
        cout << "Choose the field you are interested to know about " << endl;
        cin >> c;
        if (c == 'H' || c == 'h')
        {
            d.Help();
        }
        else if (c == 'F' || c == 'f')
        {
            d.Feelist();
        }
        else if (c == 's' || c == 'S')
        {
            d.Feeslip();
        }
        else if (c == 'm' || c == 'M')
        {
            d.Modification();
        }
        else if (c == 'q' || c == 'Q')
        {
            d.Quit();
        }
        else
        {
            cout << "Invalid Option selected. Enter appropriate option" << endl;

        }
        cout << "\n\n";
    }
    return 0;
}
