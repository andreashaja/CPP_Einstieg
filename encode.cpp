/* ---------------------------------------------------------------------
 * The Fearless Engineer - Programmieren und Elektronik
 * Copyright (C) 2020, Dr. Andreas Haja.  
 *
 * Zweck : Text von der Konsole einlesen, verschlüsseln und wieder ausgeben
 *
 * Du solltest zusammen mit diesem Programm eine Kopie der MIT-Lizenz erhalten haben.
 * Falls nicht, sieh bitte hier nach: https://opensource.org/licenses/MIT.
 *
 * http://www.thefearlessengineer.com/cpp-kurs
 * ----------------------------------------------------------------------
 */

#include <iostream> // Funktionen für die Ein- und Ausgabe von Daten über das Terminal
#include <string> // Funktionen für die Verarbeitung von Zeichenketten (= Strings)

using namespace std; // Hiermit wird die Schreibweise von einigen Standard-Befehlen verkürzt

int main()
{
    //
    // ** Schritt 1 : Dateineingabe **
    // Hier wird Text eingelesen, der vom Nutzer im Terminal eingegeben wird
    // 
    cout << ">> Bitte Text zum Verschlüsseln eingeben: ";
    string text;
    getline(std::cin, text); // Nach diesem Befehl ist der eingegebene Text in der Variablen "text" enthalten

    //
    // ** Schritt 2 : Speicheranalyse **
    // Hier werden Informationen zum Speicher ausgegeben, in dem die Variable "text" gespeichert ist
    //


    // encode all characters in text string
    std::string code;
    for (int pos = 0; pos < text.size(); pos++) // loop over all character positions
    {
        // step 1 : get ASCII code for current character
        int ascii = int(text[pos]);

        // step 2 : add character position to ASCII code
        ascii += pos;

        // step 3 : convert new ASCII code into character
        char newChar = char(ascii);

        // step 4 : add new character to result string
        code += newChar;
    }

    // print encoded string
    std::cout << "Verschlüsselter Text : " << code << std::endl;
}

/*

  // Hello World Classic
  std::cout << "Hello World!\n";
  
  // Hello World Advanced
  std::string str1 = "Hello World!\n";
  std::cout << str1;

  // Hello World Code
  std::string str2 = "Hfnos%]vzun,";
  int cnt = 0;
  while(cnt<str2.size())
  {
    std::cout << char(int(str2[cnt])-cnt);
    cnt++;
  }
}
  */