#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include "Dictionary.h"
using namespace std;

int main()
{
    //ifstream infile;
    //ofstream outfile;
    string inFileName;
    string outFileName;
    //string line;



    cout<<"Enter input file name:"<<endl;
    cin>>inFileName;
//    infile.open(inFileName.c_str());

    // cout<<"Enter output file name:"<<endl;
   // cin>>outFileName;
   // outfile.open(outFileName.c_str());

    Dictionary Dct(inFileName);



}
