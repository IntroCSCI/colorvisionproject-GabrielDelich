//Author: Gabriel Delich
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
string filename;
fstream reader;
string line= "";
size_t position;

 //get user input
 cout << "Please enter the file to be opened:\n";

 cin >> filename;

 reader.open(filename,ios::in);

 getline(cin,filename);

//when the reader is open do this function
 if (reader.is_open())
{

  while(!reader.eof() )
  {
   getline(reader,line);
   position=line.find("color");
 //if the line we grab has "color", print out the string next to color
   if(line[position])
   {

     for(int counter=position; counter < line.size(); counter++)
          cout << line[counter];
   }
  }
 }
 //if you could not open the file give them a nice message
else(cout << "Could not open " << filename << endl);

 return 0;
}

