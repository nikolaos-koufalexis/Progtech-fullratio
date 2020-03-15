# Progtech-fullratio
Ομοίως με την πρώτη άσκηση, υλοποιήστε την κλάση rational για την αναπαράσταση των ρητών
αριθμών. Η κλάση αυτή πρέπει όμως τώρα να υποστηρίζει τις λειτουργίες που αναγράφονται στο αρχείο
επικεφαλίδας fullratio.hpp, τα περιεχόμενα του οποίου είναι τα ακόλουθα:
#ifndef __FULLRATIO_HPP__

#define __FULLRATIO_HPP__

#include <iostream>

class rational {

public:

rational (int n, int d = 1);

friend rational operator + (const rational &x, const rational &y);

friend rational operator - (const rational &x, const rational &y);

friend rational operator * (const rational &x, const rational &y);

friend rational operator / (const rational &x, const rational &y);

friend std::ostream & operator << (std::ostream &out, const rational &x);

private:

int nom, den;

static int gcd (int a, int b);

};

#endif

Όπως και προηγουμένως, γράψτε τα παρακάτω σε ένα δεύτερο αρχείο με όνομα fullratio.cpp και
συμπληρώστε κατάλληλα τις υλοποιήσεις των μεθόδων:
#include <iostream>

#ifndef CONTEST

#include ”fullratio.hpp”

#endif

using namespace std;

rational::rational (int n, int d) { ... }

rational operator + (const rational &x, const rational &y) { ... }

...
