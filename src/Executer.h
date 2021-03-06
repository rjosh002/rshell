#ifndef EXECUTER_H
#define EXECUTER_H
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <vector>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

#include "Commandinfo.h"




class Executer : public Commandinfo{
    protected:
    pid_t pid;
    pid_t pidt;
    char* chargar;
    int pof;
    string comy;
    char* arg;
    int mine;
    int out;
    int in;
    int saved_stdout;
    int saved_stdin;
    string filenameoutput;
    string filenameinput;
    int p[2];
    int status;
    int   filein;
    int pipecounter;
    int cmcount;
    unsigned int x;
  
  
    public:
    Executer();
    ~Executer();
    void createproc(string comy);
    void AND(int andpos);
    void OR(int orpos);
    void SEMI(int semipos);
    void caller();
    string  comyret();
    void clear();
    int Test(string comy);
    int miner();
    void outputFile(int filepos);
    void closeinFile();
    void closeinoFile();
    void closeFile();
    void outputFileOverwrite(int filepos);
    void inputFile(int filepos);
    void outtoin(int filepos, int pipecounter);
};

#endif