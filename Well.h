#pragma once

#include "stdafx.h"

#ifndef Well_H
#define Well_H
class Well
{
public:
	Well();
	~Well();

	//Getters
	double getpi() const;
	double getg() const;

	bool getisSI() const;
	
	double getvSr() const;
	double getD() const;
	double getdelta() const;
	double getdW() const;
	double geth() const; 
	double getk() const;
	double getq() const; 
	double getrho() const; 
	double getmi() const; 
	double getni() const;
	double getpK() const; 
	double getA() const;
	double getre() const;
	double getlambda() const;
	double getgamma() const;
	double getdP() const;
	double getx() const;

	//Setters
	void setvSr(double);
	void setD(double);
	void setdelta(double);
	void seth(double);
	void setk(double);
	void setq(double);
	void setrho(double);
	void setmi(double);
	void setpK(double);

private:

	const double _pi = 3.14;
	const double _g = 9.80665;

	double _vSr;
	double _D; // '' > m
	double _delta; // mm > m
	double _h; // m 
	double _k;
	double _q; // kg/d > m3/s
	double _rho; // g/cm3 > kg/m3
	double _mi; // cP > Pa*S
	double _pK; //
	double _re;
	double _lambda;
	double _dP;
	double _x;

	bool _isSI;
};

#endif

