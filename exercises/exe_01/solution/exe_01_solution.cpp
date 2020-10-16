/* ---------------------------------------------------------------------
 * The Fearless Engineer - Programmieren und Elektronik
 * Copyright (C) 2020, Dr. Andreas Haja.  
 *
 * -----------------
 * Übung 1a : Ausgabe von Hello World verändern
 * Übung 1b : Name der Ausgabedatei anpassen
 * 
 * Hinweis : Dies ist die Musterlösung für beide Teilaufgaben
 * -----------------
 *
 * Du solltest zusammen mit diesem Programm eine Kopie der MIT-Lizenz erhalten haben.
 * Falls nicht, sieh bitte hier nach: https://opensource.org/licenses/MIT.
 *
 * http://www.thefearlessengineer.com/cpp-kurs
 * ----------------------------------------------------------------------
 */

#include <iostream>
int main()
{
    std::cout << "Hello World!\n";

    // Lösungscode für Übung 1a
    std::cout << "Ich lerne programmieren!\n"; 
    
    // Alternative Lösung für Übung 1a
    // std::cout << "Hello World!\nIch lerne programmieren!\n";
}

//
// Übung 1b: 
//          Compiler-Aufruf (im Stammverzeichnis): g++ -o hello2 ./exercises/exe_01/hello2.cpp
//          Ausführen des Programms: ./hello2
//  
