#include <iostream>

using namespace std;

float divByTen(float a)
{
    float result = a / 10;
    return result;
}
string dollarsign(int b)
{
    string result = "";
    for (int i = 0; i < b; i++)
    {
        result += "$";
    }
    return result;
}

string asterisk(int c)
{
    string result = "";
    for (int i = 0; i < c; i++)
    {
        result += "*";
    }
    return result;
}

/*
METHODS
{return type} {name} {parameters}
{
    {method body}
    {return statement}
}

LOOPS
for({looping variable}; {condition/s}; {iterator})
{
    {loop body}
}

CONDITIIONALS
if({condition})
{
    {loop body}
}
else if({condition})
{
    {body}
}
else 
{
    {body}
}

while({condition})
{
    {body}
}


*/
int main()
{
    // single line comment
    /*
    multiline comment
    */
    /*
    int age;
    cin >> age;
    string name;
    cin >> name;
    if (age < 21)
    {
        cout << name << ", you are not old enough to drink" << endl;
    }

    if (age >= 16)
    {
        cout << "You are old enough to drive" << endl;
    }
    */

    int grade;
    cin >> grade;
    string name;
    cin >> name;
    if (grade < 6)
    {
        cout << name << ", you are in elementary school" << endl;
    }
    else if (grade >= 6 && grade < 9)
    {
        cout << name << ", you are in middle school" << endl;
    }
    else if (grade >= 9 && grade <= 12)
    {
        cout << name << ", you are in high school" << endl;
    }

    int lp = 0;
    while (lp < 5)
    {
        cout << "brrrrr" << endl;
        lp++;
    }

    int b = 0;
    while (b < 8)
    {
        cout << "kdjhfjdc" << endl;
        b++;
    }

    /*
    int number, guess;

    number = rand() % 20 + 1;

    do {
        cout<<"Guess the correct number from 1 to 20:"<<endl;
        cin>>guess;
    }
    while (number != guess);
    cout<<"You are correct!"<<endl;

*/
}
