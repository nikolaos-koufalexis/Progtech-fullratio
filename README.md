# Progtech-fullratio
Ομοίως με την πρώτη άσκηση, υλοποιήστε την κλάση rational για την αναπαράσταση των ρητών
αριθμών. Η κλάση αυτή πρέπει όμως τώρα να υποστηρίζει τις λειτουργίες που αναγράφονται στο αρχείο
επικεφαλίδας fullratio.hpp, τα περιεχόμενα του οποίου είναι τα ακόλουθα:
1 #ifndef __FULLRATIO_HPP__

2 #define __FULLRATIO_HPP__

3

4 #include <iostream>

5

6 class rational {

7 public:

8 rational (int n, int d = 1);

9

10 friend rational operator + (const rational &x, const rational &y);

11 friend rational operator - (const rational &x, const rational &y);

12 friend rational operator * (const rational &x, const rational &y);

13 friend rational operator / (const rational &x, const rational &y);

14

15 friend std::ostream & operator << (std::ostream &out, const rational &x);

16

17 private:

18 int nom, den;

19

20 static int gcd (int a, int b);

21 };

22

23 #endif

Όπως και προηγουμένως, γράψτε τα παρακάτω σε ένα δεύτερο αρχείο με όνομα fullratio.cpp και
συμπληρώστε κατάλληλα τις υλοποιήσεις των μεθόδων:

1 #include <iostream>

2 #ifndef CONTEST

3 #include ”fullratio.hpp”

4 #endif

5

6 using namespace std;

7

8 rational::rational (int n, int d) { ... }

9

10 rational operator + (const rational &x, const rational &y) { ... }

11

12 ...
