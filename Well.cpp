#include "stdafx.h"
#include "Well.h"
#include <math.h>
#include <stdio.h>


Well::Well()
{
}


Well::~Well()
{
}

bool Well::getisSI() const
{
	return _isSI;
}

double Well::getvSr() const
{
	return _vSr;
}

double Well::getD() const
{
	return _D;
}

double Well::getdelta() const
{
	return _delta;
}
double Well::getdW() const
{
	return _D - (2*_delta);
}

double Well::geth() const
{
	return _h;
}

double Well::getk() const
{
	return _k;
}

double Well::getq() const
{
	return _q;
}

double Well::getrho() const
{
	return _rho;
}

double Well::getmi() const
{
	return _mi;
}

double Well::getni() const
{
	return _mi / _rho;
}

double Well::getpK() const
{
	return _pK;
}

double Well::getA() const
{
	return _pi * pow((getdW()/2), 2);
}

double Well::getre() const
{
	return _re;
}

double Well::getlambda() const
{
	return _lambda;
}

double Well::getgamma() const
{
	return _g * _rho;
}

double Well::getdP() const
{
	return _dP;
}

double Well::getx() const
{
	return _x;
}

void Well::setD(double value)
{
	_D = value;
}

void Well::setdelta(double value)
{
	_delta = value;
}

void Well::seth(double value)
{
	_h = value;
}

void Well::setk(double value)
{
	_k = value;
}

void Well::setq(double value)
{
	_q = value;
}

void Well::setrho(double value)
{
	_rho = value;
}

void Well::setmi(double value)
{
	_mi = value;
}

void Well::setvSr(double value)
{
	_vSr = value;
}

// Calculations

//void calculatevSr()
//{
//	setvSr((this._q) / getA());
//}

//void CalculateRe()
//{
//	_re = (getdW() * _vSr) / getni();
//}
