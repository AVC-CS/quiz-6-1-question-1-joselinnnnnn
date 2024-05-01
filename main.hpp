#include <iostream>
#include <cmath>
using namespace std;
//********************
// Declare Function Prototypes
//********************

void getTwoValues(int, int);
int getNextPrime(int);
int getPrevPrime(int);



// ******************************
// Implement all your functions here
// ******************************

void getTwoValues(int begin, int end){
    cout << "Please enter two values" << endl;
   cin >> begin >> end;
    while(begin > end){
        cout << "the first must be smaller than the second, try again";
        cin >> begin >> end;
    }
  
}

int getNextPrime(int begin){
    int maybePrime = begin + 1;
  bool prime = false;
  while (prime == false){
  for (int i = 2; i <= sqrt(maybePrime); i++) {
    if (maybePrime % i == 0) {
      prime = false;
      break;
    }
    else {
      prime = true;
    }
  //  maybePrime++;
  }
    if(prime){
      cout << maybePrime << endl;
      return maybePrime;
      break;
    }
     maybePrime++;
  }
  
}

int getPrevPrime(int end){
       int maybePrime = end - 1;
  bool prime = false;
  while (prime == false){
  for (int i = 2; i <= sqrt(maybePrime); i++) {
    if (maybePrime % i == 0) {
      prime = false;
      break;
    }
    else {
      prime = true;
    }
  //  maybePrime++;
  }
    if(prime){
      cout << maybePrime << endl;
      return maybePrime;
      break;
    }
     maybePrime = maybePrime-1;
  }
  
}

