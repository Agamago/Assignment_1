//Joey Sheridan
//002290839
//CPSC 350-01
//Assignment 1

#include "DNA_Counter.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char ** argb)
{
  string yesOrno;
  string test;
  srand (time(NULL));
    DNA_Counter str; // creates an object of the class
    ofstream endfile; // variable responsible for printing to the file
    endfile.open("Sheridan.txt",ios_base::app); //opens a new txt file and outputs all cal

    str.doCalculations(); // the class object makes calls to these methods to do the math
    str.getProbability();
    str.stdd();
    endfile << "Joey Sheridan"<< endl;
    endfile << "002290839"<< '\n' <<endl;

    endfile << "The sum of your file is : " << str.getSum() <<endl; // calls each get method in the .cpp
    endfile << "The mean of your file is : " << str.getMean() << endl;
    endfile << "The standard deviation of your file is : " << str.getStdv() << endl;
    endfile << "The variance of your file is : " << str.getVariance() << '\n' << endl;

    endfile << "The probability of getting 'A' : " << str.getA() << endl;
    endfile << "The probability of getting 'T' : " << str.getT() << endl;
    endfile << "The probability of getting 'G' : " << str.getG() << endl;
    endfile << "The probability of getting 'C' : " << str.getC() << '\n' <<endl;

    endfile << "The probability of getting 'GA' : " << str.getGA() << endl;
    endfile << "The probability of getting 'GT' : " << str.getGT() << endl;
    endfile << "The probability of getting 'GC' : " << str.getGC() << endl;
    endfile << "The probability of getting 'GG' : " << str.getGG() << '\n' << endl;

    endfile << "The probability of getting 'AT' : " << str.getAT() << endl;
    endfile << "The probability of getting 'AC' : " << str.getAC() << endl;
    endfile << "The probability of getting 'AA' : " << str.getAA() << endl;
    endfile << "The probability of getting 'AG' : " << str.getAG() << '\n' << endl;

    endfile << "The probability of getting 'TC' : " << str.getTC() << endl;
    endfile << "The probability of getting 'TT' : " << str.getTT() << endl;
    endfile << "The probability of getting 'TA' : " << str.getTA() << endl;
    endfile << "The probability of getting 'TG' : " << str.getTG() << '\n' << endl;

    endfile << "The probability of getting 'CT' : " << str.getCT() << endl;
    endfile << "The probability of getting 'CA' : " << str.getCA() << endl;
    endfile << "The probability of getting 'CG' : " << str.getCG() << endl;
    endfile << "The probability of getting 'CC' : " << str.getCC() << '\n' << endl;

    endfile << "Appending 1000 strings : "  << endl;
    //endfile <<  str.getGaus() << endl; //appends 1000 new nucleotides
    str.gaussian(endfile);

      cout << "Do you want to run another file? Enter 'Y' to do so. " <<endl;
      cin >> yesOrno;
      if (yesOrno== "Y" || yesOrno== "y")
      {
        cout << "What is the name of the file? " <<endl;
        cin >> test;

        DNA_Counter str; // creates an object of the class
        ofstream endfile; // this is how we will be printing each statement
        endfile.open("Sheridan.txt",ios_base::app); //opens a new txt file that we are outputting all of the
                                                    //calculations and probabilities to
        str.doCalculations(); // the class object makes calls to these methods to do the math
        str.getProbability();
        str.stdd();

        endfile << "The sum of your file is : " << str.getSum() << endl; // calls each get method in the .cpp
        endfile << "The mean of your file is : " << str.getMean() << endl;
        endfile << "The standard deviation of your file is : " << str.getStdv() << endl;
        endfile << "The variance of your file is : " << str.getVariance() << '\n' << endl;

        endfile << "Appending 1000 strings : "  << endl;
        //endfile <<  str.getGaus() << endl; //appends 1000 new nucleotides
        str.gaussian(endfile);
      }
        else
        {
          endfile.close(); //closes the ofstream because we are done printing
        }
      return 0;
    }
