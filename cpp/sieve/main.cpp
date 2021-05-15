// C++ program to print all primes
// smaller than or equal to
// n using Sieve of Eratosthenes
#include <bits/stdc++.h>

using namespace std;

void SieveOfEratosthenes(int n) {
  // Create a boolean array
  // and initialize all entries
  // it as true. A value in
  // prime[i] will finally be
  // false if i is Not a prime
  bool prime[n+1];
  memset(prime, true, sizeof(prime));
  int p, i;

  for (p = 2; p * p <= n; ++p) {
    // If prime[p] is not changed,
    // then it is a prime
    if (prime[p] == true) {
      // Update all multiples
      // of p greater than or
      // equal to the square of it
      // numbers which are multiple
      // of p and are less than p^2
      // are already been marked.
      for (i = p * p; i <= n; i += p)
        prime[i] = false;
    }
  }

  // Print all prime numbers
  for (p = 2; p <= n; ++p) {
    if (prime[p])
      cout << p << " ";
  }
}

int main() {
  int n;

  cout << "Enter your number: " << endl;
  cin >> n;
  
  cout << "The prime numbers smaller "
       << " than or equal to " << n << endl;
  SieveOfEratosthenes(n);
  return 0;  
}
