# Einstieg in die Programmierung mit C++

[The Fearless Engineer : `C++`](https://www.thefearlessengineer.com/cpp-kurs)


## Worum geht es?

Wenn du mit dem Programmieren anfängst und dir ein Buch besorgst, dann wirst du fast unweigerlich auf das berühmteste (und kürzeste) Programm der Welt stoßen : "Hello World". 

Obwohl der Code für "Hello World" nur aus wenigen Zeilen besteht und außer einer Textausgabe nichts spektakuläres passiert, kannst du aus diesem vermeintlich simplen Programm viel lernen. 

In diesem Modul sehen wir uns daher "Hello World" in der Programmiersprache C++ an und ich erkläre ich dir, was das Programm tut, wie es funktioniert, was die Begriffe "Entwicklungsumgebung", "Quellcode", "Compiler" und "Terminal" bedeuten und wie man damit Programme schreiben und ausführen kann.

*Hinweis*: Dieser Code ist Teil eines Online-Kurses zur Programmiersprache C++. Das zugehörige Begleitheft inkl. der Links zu denVideos findest du [hier](https://go.tfe.academy/2009203).


---
## Wie kann ich den Code im Projekt nutzen?

###  **Variante A (empfohlen)** : Online-Enwicklungsumgebung repl.it

Der einfachste Weg, den Code auszuführen und zu verändern, ist über die Online-IDE `repl.it`. Um die jeweiligen Programme zu kompilieren und auszuführen, musst du nur den jeweiligen Befehl im Terminal eingeben.

1. **Haupt-Programm** (`hello.cpp`) :  
`g++ -o hello hello.cpp; ./hello`

1. **Übungen**
   
   - **Übung 1** (`exercises/exe_01/exe_01.cpp`) : 
   `g++ -o exe_01 ./exercises/exe_01/exe_01.cpp; ./exe_01`



###  **Variante B** : Das Projekt auf der eigenen Festplatte starten

Es besteht natürlich auch die Möglichkeit, das Projekt in einem lokalen Verzeichnis von GitHub zu klonen oder als zip-Datei herunterzuladen. 

Dazu sind die folgenden Schritte erforderlich:

0. Nur für Windows: Installation des "Windows Terminal" --> [go.tfe.academy/2008278](https://go.tfe.academy/2008278)

1. Klonen des GitHub-Repos oder Download als ZIP (`master` branch)--> [go.tfe.academy/2009204](https://go.tfe.academy/2009204)

2. Installation von Entwicklerwerkzeugen : Die Anleitungen für die erforderlichen Tools `Visual Studio Code` und `gcc` findest du unter [Tools für die lokale Installation](#Tools-für-die-lokale-Installation).
   
3. Datei mit dem gewünschten Quellcode in VS Code öffnen und mit CodeRunner ausführen

**Hinweis:** Da die lokale Installation schnell zu Fehlern führen kann, wird Einsteigern die Variante A empfohlen. 



## Tools für die lokale Installation

Im folgenden ist eine Liste der erforderlichen Entwicklungswerkzeuge aufgeführt, die zum lokalen Ausführen des Codes wie in **Variante B** beschrieben erforderlich sind. 

* **gcc/g++** >= 5.4 
	* Linux: gcc / g++ ist standardmäßig auf den meisten Linux-Distributionen installiert. 
	* Mac: [Xcode-Befehlszeilen-Tools installieren (enthalten make)](https://developer.apple.com/xcode/features/) 
	* Windows: empfohlen wird die Installation von [MinGW](http://www.mingw.org/) 

* **Visual Studio Code**
	* Download [VS Code](https://code.visualstudio.com/download)
	* In VS Code unter "Extensions" die PlugIns "C/C++" und "Code Runner" installieren



Copyright 2020, Dr. Andreas Haja
www.thefearlessengineer.com


