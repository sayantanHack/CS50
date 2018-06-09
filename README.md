# CS50
This is all about coding :)
## Credit
Its  basically the implementation of Luhn algorithm made by Hans Peter Luhn. Which is used in for building credit card number .
The algorithm says 
From the rightmost digit, which is the check digit, and moving left, double the value of every second digit. The check digit is not doubled, the first digit doubled is immediately to the left of the check digit. If the result of this doubling operation is greater
than 9 (e.g., 8 × 2 = 16), then add the digits of the product (e.g., 16: 1 + 6 = 7, 18: 1 + 8 = 9) or, alternatively, the same result
can be found by subtracting 9 from the product (e.g., 16: 16 − 9 = 7, 18: 18 − 9 = 9).
Take the sum of all the digits.
If the total modulo 10 is equal to 0 (if the total ends in zero) then the number is valid according to the Luhn formula; else it is not valid.
## Greedy 
This program promts dollars from users. Then it returns the numbers of cents , numbers of dimes, numbers of nickels<br>At last numbersof total coins.

## ISBN 
It is the ISBN number checking there have an algorithm for ISBN.In this code you put an ISBN it checks wheather its correct or not.<br>
 let’s first take that sum using the ISBN-10’s first nine digits (highlighted in bold):

1·0 + 2·7 + 3·8 + 4·9 + 5·7 + 6·5 + 7·1 + 8·9 + 9·8 = 290

If we now divide that sum by 11, we get 290 ÷ 11 = 26 4/11 (i.e., a remainder of 4)! Well that’s kind of neat, the ISBN is legit! Actually, also thanks to modular arithmetic, we could just include that tenth digit in our sum and multiply it by 10:

1·0 + 2·7 + 3·8 + 4·9 + 5·7 + 6·5 + 7·1 + 8·9 + 9·8 + 10·4 = 330

If we now divide this sum by 11, we get 330 ÷ 11 = 30 with no remainder at all, which is an equivalent way of saying the ISBN-10 is legit! Stated more formally, 0 ≡ 330 (mod 11)!

Hopefully those exclamation points make the math more exciting.

So, computing this check digit’s not hard, but it does get a bit tedious by hand. Let’s write a program.

## CAESAR CIPHER 
  This is an code for encrypt data or any plain text file.This ecrypt the plain text into cipher text , according to the key .
  <br> Now the Key is the number you have to enter through Command Line Arguement . Use the code in CLI .This will entrypt the text entered by the user.
  
## Vigenere Cipher
  This is also an encryption technique based on the concept of Caesar Cipher.In Caesar Cipher we used an integer(number) for
  the key , but in this Vigenere Cipher we use any string(simply a simgle word) as a key . The characters of the keys are to 
  be used as the increment in numbers. Not understandably ? check the example:
  
  Plaintext = This is Sayantan        ||        key = git  
  g will sit under the 'T' ,then i will sit under 'h' ,t will sit under 'y' then again g will sit under 's' next ii will sit 
  under 'i' and so on. <br>
  concider the alphabetic index : a = 0, b = 1, c=2 , d= 3, ..... , x = 23 ,y = 24, z= 25 <br>
  'T' will increase to index of g(6) , and T will be Z. 
  'h' will increase to index of i(8) , and h will be P , and so on...<br>
  The encryption is more strong than the Caesar cipher .
  
