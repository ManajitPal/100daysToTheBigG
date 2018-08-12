## Link to the challenge

[Mogu Loves Numbers | Basic Number Theory-1 & Math Practice Problems | Hackerearth](https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/hell-1/)

## Related Resources

* [Sieve of Eratosthenes](https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes#Implementation)

## Explanation

If we want to know the number of prime numbers till a number n, we first create an array of size n assuming all the elements in it are prime.

Then we explicitly say that the first number(0) and the second number(1) are not prime. 

Next, we start from the third number, we know that it is a prime. We strike out all of its multiples. Then we go to the next prime number and strike out all of its multiples and so on.

We finally count all the numbers left. That's the number of primes till the number n.