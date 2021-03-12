//Regan Setter
//Student ID 3505894
//Computer Science 206
//January 17th, 2021

//Write a program that creates an array of 100 string objects. Fill the array by having your program open a (text) file and read one line of the file into each string until you have filled the array. Display the array using the format “line #: <string>,” where # is the actual line number (you can use the array counter for this value) and <string> is the stored string.

//Tests: Created a text file with a few sentences in it. Created an array of 100 string objects. Ran the program that stores the lines of file into an array string and then displays in the each line in the format given.

#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  string filename; //string variable that holds the file 
  cout << "Enter the filename: "; //requests the user to enter the file name
  cin >> filename; //takes the file name input from the user
  ifstream input(filename.c_str()); //opens the file
  if(!input.is_open()) //if file is not found the program will display an error message to the user and exits the program. 
  {
    cout << "\nSorry " << filename << " file not found! (program Exited)\n\n";
    return 0;
  }

  string line; //holds a line
  int number_of_lines = 0; //variable that holds count of lines in the file and also used as indexing in the string array  
  string placement[100]; //creating an array of 100 string objects

  while (getline(input, line) && number_of_lines < 100) //looping until the lines are taken from the file and if the number of lines taken from the file is less than or equals to 100
  {
    placement[number_of_lines] = line; //storing line taken from the file into an array string
    number_of_lines++; //increments number of lines by 1
  }

  input.close(); //close the file

  for(int i = 0; i < number_of_lines; i++) //looping until the total number of lines in the file
  {
    cout << "line "<< (i + 1) <<": " << placement[i] << endl; //displays each line in the format “line #: <string>,”
  }  
  return 0;
}
