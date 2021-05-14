
#include "colors.h"
#include <string>


using std::string;
using namespace std;

void colors::setFile(string called){
  file = called;
}

string colors::getFile(){
return file;

}

void colors::theBlindness(){
    cout << "Enter what type of Color Blindness you are:\n(RG,BY,ALL)\n";
    getline(cin,colorBlindness);
}

void colors::printInfo(){
  if(colorBlindness!="ALL"){
cout<< "These colors are compatible with your ColorBlindness!\n";
  }
 else{
  cout << "These colors are not compatible with your Color Blindness! Sorry!";
}
}
