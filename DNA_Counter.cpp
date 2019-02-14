//Joey Sheridan
//002290839
//CPSC 350-01
//Assignment 1

#include <iostream>
//Reference to the header
#include "DNA_Counter.h"
//Allows File I/O
#include <fstream>
//Enables the use of math functions
#include <math.h>
//Enables basice string functions
#include <string>
using namespace std;

//Constructor
DNA_Counter :: DNA_Counter(){}
//Destructor
DNA_Counter :: ~DNA_Counter()
{
  //Confirms that the memory was deleted.
  cout<<"object deleted"<<endl;
}
//Getters used in doCalculations
double DNA_Counter :: getMean()
{
  return mean;
}
double DNA_Counter :: getSum()
{
  return sum;
}
double DNA_Counter :: getVariance()
{
  return variance;
}
double DNA_Counter :: getStdv()
{
  return stdv;
}

//getters for probability calculation
double DNA_Counter :: getA()
{
  return probA;
}
double DNA_Counter :: getT()
{
  return probT;
}
double DNA_Counter :: getG()
{
  return probG;
}
double DNA_Counter :: getC()
{
  return probC;
}
double DNA_Counter :: getAA()
{
  return probAA;
}
double DNA_Counter :: getAT()
{
  return probAT;
}
double DNA_Counter :: getAC()
{
  return probAC;
}
double DNA_Counter :: getAG()
{
  return probAG;
}

double DNA_Counter :: getTA()
{
  return probTA;
}
double DNA_Counter :: getTT()
{
  return probTT;
}
double DNA_Counter :: getTC()
{
  return probTC;
}
double DNA_Counter :: getTG()
{
  return probTG;
}

double DNA_Counter :: getCA()
{
  return probCA;
}
double DNA_Counter :: getCT()
{
  return probCT;
}
double DNA_Counter :: getCC()
{
  return probCC;
}
double DNA_Counter :: getCG()
{
  return probCG;
}

double DNA_Counter :: getGA()
{
  return probGA;
}
double DNA_Counter :: getGT()
{
  return probGT;
}
double DNA_Counter :: getGC()
{
  return probGC;
}
double DNA_Counter :: getGG()
{
  return probGG;
}

//prints the 1000 new strings
string DNA_Counter::getGaus()
{
  return gausPrint;
}

void DNA_Counter::doCalculations()
{
  //iterates through each line of the file
  ifstream DNAfile(test);
  if (DNAfile)
  {
    while (getline(DNAfile,line))
    {
      sum += line.length(); //adds the length of every single line in the test file to add to the sum
      lines++; // Counts the lines in the file
      testBigram = (sum-lines); // calculates the total number of bigrams in the file

      //loops through the file and stores the nucleotide in its respective pattern
      //and then checks the second index for the second letter in the bigram and adds to that respective counter
      //Assumes that input may be upper or lower case
      for (int i =0; i < line.length(); i++)
      {
        if (line[i] == 'A' || line[i] == 'a')
        {
          num_of_A++;
          if(line[i+1] == 'A' || line[i+1] == 'a')
          {
            num_of_AA++;
          }
          else if(line[i+1] == 'C' || line[i+1] == 'c')
          {
            num_of_AC++;
          }
          else if(line[i+1] == 'T' || line[i+1] == 't')
          {
            num_of_AT++;
          }
          else if(line[i+1] == 'G'|| line[i+1] == 'g')
          {
            num_of_AG++;
          }
        }
        else if (line[i] == 'C' || line[i] == 'c')
        {
          num_of_C++;
          if(line[i+1] == 'A' || line[i+1] == 'a')
          {
            num_of_CA++;
          }
          else if(line[i+1] == 'C'|| line[i+1] == 'c')
          {
            num_of_CC++;
          }
          else if(line[i+1] == 'T' || line[i+1] == 't')
          {
            num_of_CT++;
          }
          else if(line[i+1] == 'G' || line[i+1] == 'g')
          {
            num_of_CG++;
          }
        }
        else if (line[i] == 'G' || line[i] == 'g')
        {
          num_of_G++;
          if(line[i+1] == 'A' || line[i+1] == 'a')
          {
            num_of_GA++;
          }
          else if(line[i+1] == 'C' || line[i+1] == 'c')
          {
            num_of_GC++;
          }
          else if(line[i+1] == 'T' || line[i+1] == 't')
          {
            num_of_GT++;
          }
          else if(line[i+1] == 'G' || line[i+1] == 'g')
          {
            num_of_GG++;
          }
        }
        else if (line[i] == 'T' || line[i] == 't')
        {
          num_of_T++;
          if(line[i+1] == 'A'|| line[i+1] == 'a')
          {
            num_of_TA++;
          }
          else if(line[i+1] == 'C'|| line[i+1] == 'c')
          {
            num_of_TC++;
          }
          else if(line[i+1] == 'T' || line[i+1] == 't')
          {
            num_of_TT++;
          }
          else if(line[i+1] == 'G' || line[i+1] == 'g')
          {
            num_of_TG++;
          }
        }
      }
    }
    //Calculates the mean
    mean = sum/lines;
  }
  else
  {
    cout <<"Error Reading File. "<<endl;
  }
  DNAfile.close(); //closes the test file
}
void DNA_Counter::stdd()
{
ifstream DNAfile(test);
if (DNAfile) // makes sure we are checking the right file
{
  while (getline(DNAfile,line)) // runs through each line in the test file
  {
    stdv += pow (line.length() - mean , 2.0); //adds each value to the value of stdv
  }
  stdv = sqrt(stdv/lines);   // calculates stdv
  variance = pow(stdv, 2.0); // uses stdv to calculate variance
}
else
  cout << "BAD FILE";
}
void DNA_Counter::getProbability() // calculates the probability of getting every single possible combination of bigrams & single nucleotides.
{
probA = num_of_A/sum;
probT = num_of_T/sum;
probG = num_of_G/sum;
probC = num_of_C/sum;

probAT = num_of_AT/testBigram;
probAC = num_of_AC/testBigram;
probAG = num_of_AG/testBigram;
probAA = num_of_AA/testBigram;

probTT = num_of_TT/testBigram;
probTC = num_of_TC/testBigram;
probTG = num_of_TG/testBigram;
probTA = num_of_TA/testBigram;

probGT = num_of_GT/testBigram;
probGC = num_of_GC/testBigram;
probGG = num_of_GG/testBigram;
probGA = num_of_GA/testBigram;

probCT = num_of_CT/testBigram;
probCC = num_of_CC/testBigram;
probCG = num_of_CG/testBigram;
probCA = num_of_CA/testBigram;

}

// this method creates the 1000 new DNA nucleotides
void DNA_Counter::gaussian(ofstream& endfile)
{
  for (int k = 0; k < 1000; k++)
  {
    pi = M_PI; //Math library gives us pi
    a = rand() / (double)RAND_MAX+1.0; // a and b represent the 2 random values in the gaussian formula
    b = rand() / (double)RAND_MAX+1.0; // divide a random number by a LARGE random number to get a probability to compare below
    c = sqrt(( (-2) * (log(a)) )*(cos(2*pi*b))); // uses the box-muller transform to compute the variable c
    d = (int)((stdv*(c)) + mean); //plug in the value we got for c to the standard gaussian formula
    endfile << '\n' ;
    // this is the length we are testing gainst below

    // finds the value to test against the probability of getting each nucleotide
    for (int e = 0 ; e < d; e++) // makes each new DNA string a different length
    {
      rnum = rand() / (double)RAND_MAX;
      // if the random number generated falls under one of the probabilities listed below
      // that nucleotide is appended to the file
      if (rnum <= probA)
      {
        endfile << "A" ;
      }

      else if (rnum > probA && rnum <= (probA+probT))
      {
        endfile << "T" ;
      }
      else if (rnum > (probA+probT) && rnum <= (probA+probT+probG))
      {
        endfile << "G" ;
      }
      else
      {
        endfile << "C" ;
      }
    }
  }
}
