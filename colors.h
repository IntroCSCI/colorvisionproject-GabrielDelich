#ifndef COLORS_H
#define COLORS_H
#include <string>
#include <vector>
#include <iostream>

using std::string;
using std::vector;

class colors
{
  private: // Only can be used directly INSIDE this class
    string file;
    string colorBlindness;
  public: 
  
  void setFile(string);

  string getFile();

  void theBlindness();
 
  void printInfo();
};



#endif