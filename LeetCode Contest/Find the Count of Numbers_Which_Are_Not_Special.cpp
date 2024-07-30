// You are given 2 positive integers l and r. For any number x, all positive divisors of x except x are called the proper divisors of x.

// A number is called special if it has exactly 2 proper divisors. For example:

// The number 4 is special because it has proper divisors 1 and 2.
// The number 6 is not special because it has proper divisors 1, 2, and 3.
// Return the count of numbers in the range [l, r] that are not special.

class Solution {
public:
    // Function to find all prime numbers up to a given limit using the Sieve of Eratosthenes
    vector<int> sieve(int limit) {
        vector<bool> is_prime(limit + 1, true);
        vector<int> primes;
        is_prime[0] = is_prime[1] = false; // 0 and 1 are not prime numbers

        for (int i = 2; i <= limit; ++i) {
            if (is_prime[i]) {
                primes.push_back(i);
                for (int j = i * i; j <= limit; j += i) {
                    is_prime[j] = false;
                }
            }
        }
        return primes;
    }

    int nonSpecialCount(int l, int r) {
        int sqrtR = sqrt(r);
        vector<int> primes = sieve(sqrtR);
        unordered_set<long> specialNumbers;

        // Generate all special numbers of the form p^2 within the range
        for (int prime : primes) {
            long specialNumber = static_cast<long>(prime) * prime;
            if (specialNumber >= l && specialNumber <= r) {
                specialNumbers.insert(specialNumber);
            }
        }

        // Total numbers in the range [l, r]
        int totalNumbers = r - l + 1;

        // Non-special numbers count
        return totalNumbers - specialNumbers.size();
    }
};