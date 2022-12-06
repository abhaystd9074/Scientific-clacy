#include <bits/stdc++.h>
using namespace std;
vector<float> change(string s)
{
    vector<float> v1;
    string h = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ',')
        {
            h += s[i];
        }
        else
        {
            v1.push_back(stof(h));
            h = "";
        }
    }
    v1.push_back(stof(h));
    return v1;
}

////                     for addition

void sum()
{
    cout << "\t ENTER   NUMBERS TO ADD SEPARATED WITH COMMA(,) ;- ";
    string s;
    cin >> s;
    vector<float> v = change(s);

    float sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }
    cout << "\t ADDITION OF THOSE NUMBERS IS :- " << sum << endl;
    cout << endl
         << endl;
}

///      for substraction

void substract()
{
    cout << "\t ENTER   NUMBERS TO SUBSTRACT SEPARATED WITH COMMA(,) ;- ";
    string s;
    cin >> s;
    vector<float> v = change(s);

    float subs = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        subs -= v[i];
    }
    cout << "\t SUBSTRACTION OF THOSE NUMBERS IS :- " << subs << endl;
    cout << endl
         << endl;
}

/////   for product

void product()
{
    cout << "\t ENTER   NUMBERS TO PRODUCT SEPARATED WITH COMMA(,) ;- ";
    string s;
    cin >> s;
    cout << endl;
    vector<float> v = change(s);

    float multiply = 1;
    for (int i = 0; i < v.size(); i++)
    {
        multiply *= v[i];
    }
    cout << "\t SUBSTRACTION OF THOSE NUMBERS IS :- " << multiply << endl;
    cout << endl
         << endl;
}

////      for division

void division()
{
    cout << "\t ENTER   NUMBERS TO divide SEPARATED WITH COMMA(,) ;- ";
    string s;
    cin >> s;
    cout << endl;
    vector<float> v = change(s);

    float div = 1;
    for (int i = 0; i < v.size(); i++)
    {
        div = v[i] / div;
    }
    cout << "\t SUBSTRACTION OF THOSE NUMBERS IS :- " << div << endl;
    cout << endl
         << endl;
}

////   for factorial

void factorial()
{
    cout << "\t ENTER NUMBER FOR FACTORIAL  :- ";
    long long n;
    cin >> n;
    cout << endl;
    long long int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    cout << "\t FACTORIAL OF THAT NUMBER IS :- " << f << endl;
    cout << endl
         << endl;
    cout << endl
         << endl;
}

///////    for power

void power()
{
    cout << "\t ENTER THE BASE :- ";
    int n;
    cin >> n;
    cout << "\t ENTER POWER :- ";
    int p;
    cin >> p;
    cout << endl;
    cout << "\t THE OUTPUT IS :- " << pow(n, p) << endl;
    cout << endl
         << endl;
}

/////   for squareroot

void squareroot()
{
    cout << "\t ENTER THE NUMBER FOR FINDING THE SQUAREROOT :- ";
    int n;
    cin >> n;
    cout << endl;
    cout << "\t SQUAREROOT OF THAT NUM IS :- " << sqrt(n) << endl;
    cout << endl
         << endl;
}

//////////////                 main function

int main()
{
    cout << "\n\n";

    cout << "\t\t  -:  WELCOME TO THE SCIENTIFIC CALCY :- " << endl;
    cout << endl;
    int t;

    cout << "\t HOW MANY  TIMES YOU WANT PERFORM THE OPERATION :- ";
    cin >> t;
    cout << endl
         << endl;
    while (t--)
    {
        cout << "\t IF YOU WANT TO PERFORM ADDITION  PRESS       1 " << endl;
        cout << "\t IF YOU WANT TO PERFORM SUBSTRACTION  PRESS   2 " << endl;
        cout << "\t IF YOU WANT TO PERFORM MULTIPLICATION PRESS  3 " << endl;
        cout << "\t IF YOU WANT TO PERFORM  DIVISION  PRESS      4 " << endl;
        cout << "\t IF YOU WANT TO PERFORM FACTORIAL  PRESS      5 " << endl;
        cout << "\t IF YOU WANT TO PERFORM POWER PRESS           6 " << endl;
        cout << "\t IF YOU WANT TO PERFORM SQUAREROOT PRESS      7 " << endl;
        cout << endl
             << endl;
        int a;
        cout << "\t\t PRESS OPERATION NUMBER  :-";
        cin >> a;
        switch (a)
        {
        case 1:
            sum();

            break;
        case 2:
            substract();
            break;
        case 3:
            product();
            break;
        case 4:
            division();
            break;
        case 5:
            factorial();
            break;
        case 6:
            power();
            break;
        case 7:
            squareroot();
            break;

        default:
            cout << "\t SORRY YOU ENTERED WRONG OPERATION " << endl;
            break;
        }
    }

    return 0;
}