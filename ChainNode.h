#ifndef _CHAIN_H_
#define _CHAIN_H_
#include <iostream>
using namespace std;

class ChainNode{

public :
    int element;
    ChainNode *next;
    int cursize;
    int *L;
    int maxsize;

public :
    ChainNode();
    ChainNode(int e);
    ChainNode(int e , ChainNode *p );
    
    int size();
    int indexof(int e);
    int get (int i);
    int remove(int i);
    void set(int i , int e);
    void add(int i, int e);
    void display();

    int oddCount();
    int evenCount();
    float sum();
    float mean();
    void sort();
    void randomize(int maxsize);

    void switch_sort();
    int clear();
    void sumcursizemaxsize();


};



#endif 