/* ---------------------------------------------------------------------
 * The Fearless Engineer - Programmieren und Elektronik
 * Copyright (C) 2020, Dr. Andreas Haja.  
 *
 * Zweck : Dein erstes Programm in C++ verstehen, kompilieren und ausführen
 *
 * Du solltest zusammen mit diesem Programm eine Kopie der MIT-Lizenz erhalten haben.
 * Falls nicht, sieh bitte hier nach: https://opensource.org/licenses/MIT.
 *
 * http://www.thefearlessengineer.com/cpp-kurs
 * ----------------------------------------------------------------------
 */

//
// Hier werden Quelldateien und Bibliotheken eingebunden, die im Programm verwendet werden
//
#include <iostream> // Funktionen für die Ein- und Ausgabe von Daten über das Terminal

//
// Die main-Funktion ist das Herzstück eines Programms in C++.
// Sie ist der Einstiegspunkt für die Programmausführung.
// Sobald das Ende von main() erreicht ist, endet das Programm.
//
int main()
{
    // Ausgabe von Text auf der Konsole
    std::cout << "Hello World!\n";
}

// 
// ** Aufgabenbeschreibung: Kompilieren und Ausführen **
// *****************************************************
// 1. Um dieses Programm in Maschinencode zu übersetzen (zu kompilieren), 
//    gib den Befehl "g++ -o hello main.cpp" im Terminal ein und drücke ENTER.
//
// 2. Um das kompilierte Programm auszuführen, gib den Befehl ./hello im Terminal ein.
//    Wenn alles geklappt hat, dann solltest du die Ausgabe "Hello World!" sehen.
// 