/* ---------------------------------------------------------------------
 * The Fearless Engineer - Programmieren und Elektronik
 * Copyright (C) 2020, Dr. Andreas Haja.  
 *
 * Zweck : In dieser Datei sind einige Tools enthalten, die von den Übungsprogrammen
 *         in diesem Projekt verwendet werden
 *
 * Du solltest zusammen mit diesem Programm eine Kopie der MIT-Lizenz erhalten haben.
 * Falls nicht, sieh bitte hier nach: https://opensource.org/licenses/MIT.
 *
 * http://www.thefearlessengineer.com/cpp-kurs
 * ----------------------------------------------------------------------
 */

#include <stdio.h>
#include <bitset>

//
// Wandelt eine Zeichenkette in eine Binärfolge entsprechend der ASCII-Tabelle um
//
std::string convertTextToBinary(std::string text)
{
  // define string which holds the result of the conversion
  std::string binary; 

  // loop over string and convert each indivdual character into an 8bit number
  for (char& _char : text) {
    binary +=std::bitset<8>(_char).to_string();
    binary += " ";
  }
  
  // return converted string
  return binary;
}

//
// Gibt Informationen zum Speicher aus, in dem die übergebene Zeichenkette gespeichert ist
//
void printMemoryInfo(std::string &text)
{
  for (char& _char : text) {
    //printf("Address : %p, data : %c\n", &_char, _char);
    printf("Address : %p, binary : %s, character : %c\n", &_char, std::bitset<8>(_char).to_string().c_str(), _char);
  }
}