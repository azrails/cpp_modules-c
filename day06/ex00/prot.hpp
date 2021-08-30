#pragma once

#include <iostream>
#include <string>
#include <sstream>

void p_char(char &value);
void p_char(float &value);
void p_char(double &value);
void p_char(int &value);

void p_int(int &value);
void p_int(char &value);
void p_int(double &value);
void p_int(float &value);

void p_double(double &value, int &prec);
void p_double(char &value, int &prec);
void p_double(int &value, int &prec);
void p_double(float &value, int &prec);

void p_float(double &value, int &prec);
void p_float(float &value, int &prec);
void p_float(char &value, int &prec);
void p_float(int &value, int &prec);