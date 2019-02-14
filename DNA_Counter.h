//Joey Sheridan
//002290839
//CPSC 350-01
//Assignment 1

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class DNA_Counter
{
public:
    DNA_Counter();
    ~DNA_Counter();
    double lines;
    double sum;
    double mean;
    double variance;
    double stdv;
    string line;
    double sumOfBigrams;
    double testBigram;
    int length;

    string test;
    string yesOrno;

    double a;
    double b;
    double c;
    int d;
    string gausPrint;
    double rnum;
    double pi;

    double probAA;
    double probAG;
    double probAC;
    double probAT;

    double probGG;
    double probGA;
    double probGC;
    double probGT;

    double probCC;
    double probCA;
    double probCG;
    double probCT;

    double probTT;
    double probTA;
    double probTC;
    double probTG;

    double probA;
    double probT;
    double probG;
    double probC;

    double num_of_A;
    double num_of_T;
    double num_of_C;
    double num_of_G;

    double num_of_AA;
    double num_of_AT;
    double num_of_AC;
    double num_of_AG;

    double num_of_GA;
    double num_of_GT;
    double num_of_GC;
    double num_of_GG;

    double num_of_TA;
    double num_of_TT;
    double num_of_TC;
    double num_of_TG;

    double num_of_CA;
    double num_of_CT;
    double num_of_CC;
    double num_of_CG;

    double getSum();
    double getMean();
    double getVariance();
    double getStdv();

    double getA();
    double getT();
    double getG();
    double getC();

    double getAA();
    double getAC();
    double getAG();
    double getAT();

    double getTA();
    double getTC();
    double getTG();
    double getTT();

    double getGA();
    double getGC();
    double getGG();
    double getGT();

    double getCA();
    double getCC();
    double getCG();
    double getCT();
    string getGaus();

    void doCalculations();
    void stdd();
    void getProbability();
    void gaussian(ofstream&);
};
