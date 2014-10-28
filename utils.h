#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <vector>
#include <random>
#include <fstream>
#include <functional>
#include <cmath>
#include <ctype.h>
#include <string>
#include <tr1/unordered_map>
#include <Eigen/Core>
#include <adept.h>

using adept::adouble;
using namespace std;
using namespace Eigen;

typedef Matrix<adouble, Dynamic, 1> ACol;
typedef Matrix<adouble, 1, Dynamic> ARow;
typedef Matrix<adouble, Dynamic, Dynamic> AMat;

typedef Matrix<double, Dynamic, 1> Col;
typedef Matrix<double, 1, Dynamic> Row;
typedef Matrix<double, Dynamic, Dynamic> Mat;

typedef std::tr1::unordered_map<string, unsigned> mapStrUnsigned;
typedef std::tr1::unordered_map<int, Col> mapIntCol;
typedef std::tr1::unordered_map<int, ACol> mapIntACol;
typedef std::tr1::unordered_map<int, Mat> mapIntMat;
typedef std::tr1::unordered_map<int, AMat> mapIntAMat;
typedef std::tr1::unordered_map<int, unsigned> mapIntUnsigned;
typedef std::tr1::unordered_map<unsigned, unsigned> mapUnsUns;

typedef std::tr1::unordered_map<string, unsigned> mapStrUnsigned;
typedef std::tr1::unordered_map<int, unsigned> mapIntUnsigned;
typedef std::tr1::unordered_map<string, bool> mapStrBool;

bool ConsiderForContext(const string&);
bool ConsiderForPred(const string&);
void GetContext(const vector<unsigned>&, const vector<string>&, unsigned,
                int, mapIntUnsigned*);

ARow TopKVals(ARow, int);

vector<string> split_line(const string&, char);

void ReadVecsFromFile(const string&, mapStrUnsigned*, vector<Col>*);

#endif
