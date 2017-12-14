#include "globaltools.h"

void GlobalTools::clearCin(){
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void GlobalTools::clearConsole(){
    system("cls");
}

void GlobalTools::displayHeader(){
     cout << "$$$$$$$\\  $$\\"   << endl;
     cout << "$$  __$$\\ \\__|"   << endl;
     cout << "$$ |  $$ |$$\\ $$$$$$$$\\ $$$$$$$$\\ $$$$$$\\ "   << endl;
     cout << "$$$$$$$  |$$ |\\____$$  |\\____$$  |\\____$$\\ "   << endl;
     cout << "$$  ____/ $$ |  $$$$ _/   $$$$ _/ $$$$$$$ |"   << endl;
     cout << "$$ |      $$ | $$  _/    $$  _/  $$  __$$ |"  << endl;
     cout << "$$ |      $$ |$$$$$$$$\\ $$$$$$$$\\\\$$$$$$$ |"  << endl;
     cout << "\\__|      \\__|\\________|\\________|\\_______|"  << endl;
     cout << "===========================================" << endl << endl;
}

void GlobalTools::exitApplication(){
    exit(0);
}

void GlobalTools::optionWarning(){
    cout << "WARNING:\t" << "Your input is not a valid option" << endl;
    system("pause");
}

void GlobalTools::warning(string w){
    cout << "WARNING:\t" << w << endl;
    system("pause");
}
void GlobalTools::error(string e){
    cout << "ERROR:\t" << e << endl;
    system("pause");
}

void GlobalTools::attention(string a){
    cout << "ATTENTION:\t" << a << endl;
    system("pause");
}
