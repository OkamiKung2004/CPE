#include "ChainNode.h"

#include <iostream>
using namespace std;

ChainNode::ChainNode() {
    element = 0;
    next = NULL; 
    maxsize = 10;
    L = new int(maxsize);
    cursize = 0;
}

ChainNode::ChainNode(int e) {
    element = e;
    next = NULL;
    maxsize = e;
    cursize = 0; 
    L = new int[maxsize];
    L[0] = e;
}

ChainNode::ChainNode(int e, ChainNode *p) {
    element = e;
    next = p;
    cursize = 0;
    L = new int[maxsize];
    L[0] = e;
    cout << "this : " << this << "[element : " << e << ", next : " << p << "]" << endl;
}


int ChainNode::size()
{
    return cursize;
}

int ChainNode::indexof(int e)
{
    
    for(int i = 0; i < cursize ; ++i )
    {
        if(L[i] == e)
        return i;
    }
    return -1;
}

int ChainNode::get(int i)
{
    if (i >= 0 && i < cursize)
        return L[i];
    else
    {
        cerr << "Index out of bounds." << endl;
        return -1; 
    }
}

int ChainNode::remove(int i)
{
     if (i >= 0 && i < cursize)
    {
        int removedElement = L[i];

        for (int j = i; j < cursize - 1; ++j)
            L[j] = L[j + 1];

        --cursize;
        return removedElement;
    }
    else
    {
        cerr << "Index out of bounds." << endl;
        return -1;  
    }
}

void ChainNode::set(int i, int e)
{
    if (i >= 0 && i < cursize)
        L[i] = e;
    else
        cerr << "Index out of bounds." << endl;
}

void ChainNode::add(int i, int e)
{
     if(i < 0)
    {
        cerr << "Warning lower bound " << i  << endl;
        cout << " Meassage : " << i <<  "Change to 0 " << endl;
        i = 0;
    }
    else if (i > cursize){
        cerr << "Warning upper bound " << i  << endl;
        cout << "Meassage : " << i <<  "Change to  "<< cursize << endl;
        i = cursize;
    }
     
     if (cursize < maxsize && i >= 0 && i <= cursize)
    {
        for (int j = cursize; j > i; --j)
            L[j] = L[j - 1];

        L[i] = e;
        ++cursize;
    }
    else
    {
        cerr << "Cannot add element. Index out of bounds or array is full." << endl;
    }
}

void ChainNode::display()
{
    for (int i = 0; i < cursize;  ++i)
        {
        cout << L[i] << " ";
        }
    cout<< endl;
}
int ChainNode::oddCount() {
    int count = 0;
    for (int i = 0; i < cursize; ++i) {
        if (L[i] % 2 != 0) {
            count++;
        }
    }
    return count;
}
int ChainNode::evenCount() {
    int count = 0;
    for (int i = 0; i < cursize; ++i) {
        if (L[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

float ChainNode::sum() {
    float total = 0;
    for (int i = 0; i < cursize; ++i) {
        total += L[i];
    }
    return total;
}

float ChainNode::mean() {
    if (cursize == 0) {
        return 0;
    }
    return sum() / cursize;
}

void ChainNode::sort() {
    for (int i = 0; i < cursize - 1; ++i) {
        for (int j = 0; j < cursize - i - 1; ++j) {
            if (L[j] > L[j + 1]) {
                int temp = L[j];
                L[j] = L[j + 1];
                L[j + 1] = temp;
            }
        }
    }
}
void ChainNode::randomize(int maxsize) {
    srand(time(NULL));
    for (int i = 0; i < maxsize; ++i) {
        int randomNumber = rand() % 100 + 1;
        add(i, randomNumber);
    }
}

void ChainNode::switch_sort() {
    for (int i = 0; i < cursize - 1; ++i) {
        for (int j = 0; j < cursize - i - 1; ++j) {
            if (L[j] < L[j + 1]) {  
                int temp = L[j];
                L[j] = L[j + 1];
                L[j + 1] = temp;
            }
        }
    }
}

int ChainNode::clear()
{
    return cursize = cursize - cursize;
}
void ChainNode::sumcursizemaxsize() {
    for (int i = 0; i < cursize; ++i) {
        cout << L[i] << " " ;
        cout << maxsize + L[i] << endl ;
    }
}

  
