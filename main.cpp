//Author: Gabriel Delich
#include "colors.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;
void itemsIn(vector <string> const&items);
bool isUnique(string, vector <string>);



int main()
{
vector <string> items;
string filename;
fstream reader;
string line= "";
size_t position;
string UniqueStuff;
colors color;

 //get user input
 cout << "Please enter the file to be opened:\n";

 cin >> filename;

 color.setFile(filename);

 cout << "The file "<< color.getFile() << " has been opened \n";

 reader.open(filename,ios::in);

 getline(cin,filename);

//when the reader is open do this function
 if (reader.is_open())
{

  while(!reader.eof() )
  {
   getline(reader,line);
   position=line.find("color: #");
 //if the line we grab has "color", print out the string next to color
   if(line[position])
   {

     for(int counter=position; counter < line.size(); counter++)
         //cout << line[counter];
       UniqueStuff =line[position];//assigns all the values to a string
        bool unique= isUnique(line,items);
        if(unique==true){

       items.push_back(UniqueStuff);// we put those values into a vector
        }

          
   }
  }
 }
 //if you could not open the file give them a nice message
else(cout << "Could not open " << filename << endl);



cout << "\nThere are " << items.size() <<" unique colors in this file\n";

color.theBlindness();
color.printInfo();




 return 0;
}
bool isUnique(string line, vector <string> items){
 for(int i=0; i < items.size(); i++){
   if(items[i]==line){
     return false;
   }
 }
 return true;
}
