#include <iostream>
#include <string>
using namespace std;

// Input/Output functions

string GetHindi( string english )
{
    string hindi;

    if ( english == "cat" )
    {
        hindi = "billee";
    }
    else if ( english == "dog")
    {
        hindi = "kutta";
    }
    else if ( english == "frog")
    {
        hindi = "medhak";
    }
    else if ( english == "rabbit")
    {
        hindi = "khargosh";
    }
    else
    {
        cout << "Word not found";
    }

    return hindi;
}

string GetEnglish( string hindi )
{
    string english;

    if ( hindi == "billee")
    {
        english = "cat";
    }
    else if ( hindi == "kutta")
    {
        english = "dog";
    }
    else if ( hindi == "medhak")
    {
        english = "frog";
    }
    else if ( hindi == "khargosh")
    {
        english = "rabbit";
    }
    else
    {
        cout << "Word not found";
    }

    return english;
}

// Menu functions

void DisplayMenu()
{
    cout << "1. English to Hindi" << endl;
    cout << "2. Hindi to English" << endl;
    cout << "3. Quit" << endl;
}

void EnglishToHindi()
{
    string englishWord;
    string hindiTranslation;

    cout << "English: ";
    cin >> englishWord;

    hindiTranslation = GetHindi( englishWord );

    cout << "Hindi: " << hindiTranslation << endl;
    cout << endl;
}

void HindiToEnglish()
{
    string hindiWord;
    string englishTranslation;

    cout << "Hindi: ";
    cin >> hindiWord;

    englishTranslation = GetEnglish ( hindiWord);

    cout << "English: " << englishTranslation << endl;
    cout << endl;
}

int main()
{
    bool exit = false;

    while ( exit == false)
    {
        int choice;

        DisplayMenu();
        cin >> choice;

        if ( choice == 1 )
        {
            EnglishToHindi();
        }
        else if ( choice == 2 )
        {
            HindiToEnglish();
        }
        else
        {
            exit = true;
        }
    }

    return 0;
}













