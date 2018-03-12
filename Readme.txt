What are Amicable numbers ?
Amicable numbers are two different numbers so related that the sum of the proper divisors of each is equal to the other number. (A proper divisor of a number is a positive factor of that number other than the number itself. For example, the proper divisors of 6 are 1, 2, and 3.) A pair of amicable numbers constitutes an aliquot sequence of period 2. A related concept is that of a perfect number, which is a number that equals the sum of its own proper divisors, in other words a number which forms an aliquot sequence of period 1. Numbers that are members of an aliquot sequence with period greater than 2 are known as sociable numbers.

The smallest pair of amicable numbers is (220, 284). They are amicable because the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110, of which the sum is 284; and the proper divisors of 284 are 1, 2, 4, 71 and 142, of which the sum is 220.

See more at: https://en.wikipedia.org/wiki/Amicable_numbers

Program:
function printDivisors(): It checks for the all the numbers below the squareroot of provided number, so that it can find it's all divisors and then return it's sum. As the divisor '1' will alwaye be there and is not been returned by the loop (also not been added in the sum), so it is added hardcodedly.

This program returns all the amicable numbers below 100000