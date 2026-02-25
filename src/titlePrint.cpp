#include "../header/titlePrint.hpp"
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

void TitlePrint::initializeTitle(const string & titleFile) {
    ifstream inFS;
    inFS.open(titleFile);
    string read;
    while (inFS) {
        getline(inFS, read);
        cout << "\033[34m"; 
        cout << read;
        cout << "\033[0m" << endl;
    }

    inFS.close();
}

std::string TitlePrint::getTitle(const std::string& titleFile) {
    std::ifstream inFS(titleFile);
    std::string read;
    std::string result;

    while (inFS) {
        std::getline(inFS, read);
        result += "\033[34m";      // blue
        result += read;
        result += "\033[0m\n";     // reset + newline
    }

    return result;
}
