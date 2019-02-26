/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   hedervj.h
 * Author: dante
 *
 * Created on February 6, 2018, 10:48 PM
 */

#ifndef HEDERVJ_H
#define HEDERVJ_H

#include <iostream>
#include <string>

using namespace std;

struct Akademija{
    string _student;
    float _ocjena;
    int _broj_indexa;

}ipia;
bool UnesiStudenta(ipia&, istream&);
void ispis(ipia&);




#endif /* HEDERVJ_H */

