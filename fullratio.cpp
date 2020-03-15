#include <iostream>
#ifndef CONTEST
#include "fullratio.hpp"
#endif

using namespace std;

rational::rational(int n,int d){
	nom=n; 
	den=d;
	int gcd=rational::gcd(nom,den);
	nom/=gcd;
	den/=gcd;
	nom=den<0 ? -nom : nom;
	den=den<0 ? -den : den;
}

rational operator + (const rational &x,const rational &y){
	int nom=x.nom*y.den+x.den*y.nom;
	int den=x.den*y.den;
	int gcd=rational::gcd(nom,den);
	return rational(nom/gcd,den/gcd);
}

rational operator - (const rational &x,const rational &y){
	int nom=x.nom*y.den-x.den*y.nom;
	int den=x.den*y.den;
	int gcd=rational::gcd(nom,den);
	return rational(nom/gcd,den/gcd);
}

rational operator * (const rational &x,const rational &y){
	int nom=x.nom*y.nom;
	int den=x.den*y.den;
	int gcd=rational::gcd(nom,den);
	return rational(nom/gcd,den/gcd);
}

rational operator / (const rational &x,const rational &y){
	int nom=x.nom*y.den;
	int den=x.den*y.nom;
	int gcd=rational::gcd(nom,den);
	return rational(nom/gcd,den/gcd);
}
std::ostream& operator << (std::ostream &out,const rational &x){
	out<<x.nom<<"/"<<x.den;
}

int rational::gcd(int a,int b){
	int nom=a;
	int den=b;
	if (b == 0){ 
    	return a; 
    }  
    else{  
   	    return gcd(b, a % b);  
    }  
}
