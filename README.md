# CISC4080 lab1

## Goal:

1. Coding style requirement
2. Download two example codes learnt in class, adapt them to measure running time under varying input size, n.
3. Practice submitting your code on autograder

## Starter Code: 


## Details: 

Here is a step-by-step guide to finish this lab:

1. Please bookmark the following google folder, which contains a set of tutorials (using emacs/vi, Linux commands, how to submit code, transfer files...):
https://drive.google.com/drive/folders/1YeHbzgJn5FyZnRuirHjnoVL0nQX6BEr1?
usp=sharing
2. Modify the code so that it prompts the user to select which version of fibonacci calculator to use (Recursive or Iterative), and then:

```
For i=1 to 50:
Get the current system time
Call selected version of Fib function, passing n=i as parameter Get the current system time
Calculate the time elapsed,
Output i, time elapsed, result of Fib(i)
```

4. Pay attention to the following requirement on style and documentation:
   * Add comments to your code in the beginning:
      /* Project Description: measuring running time of Fib(n)
          Author:
          Last modification time:
          Known bugs: fib() will overflow the int type
      */
* comments all your function, e.g.,
/* a function template for sorting an array of T with the given len
  assumping: type T has supported comparison operators
  @param a: array to be sorted
  @param len: the length of array a, the valid index range is 0...len-1
  @precondition: a has been filled with elements 0...len-1
len issettobethelenghtofa @postcondition: a[0]<=a[1]<=a[2]<=....<=a[len-1]
 */
template <class T>
void bubblesort (T a[], int len)
{
      //end_index marks the end of the subarray to be processed
      // after one bubble-up, end_index decreased by one
      for (int end_index=len-1; end_index>0;end_index --)
      {
} }
  //bubble up largest element in a[0...end_index]
for (int i=0; i<end_index-1;i++)
     if (a[i] > a[i+1])
       swap (a[i], a[i+1])
* Check the indentation and fix any issues:
In the following program, each statement's indentation level is marked in the comment:
#include <iostream>
using namespace std;
int main()                    //indentation level 0
{
         // take a line, and align with the function header and matching }
int a, b;                  //level 1
// enter value of a and b
cout <<"Enter a and b:";   //level 1
cin >> a >> b;       //level 1
}
// calculate the GCD (greatest common division of a and b
while( 1 )                 //level 1
{
}
//opening brace take a line, align with while and the matching }
a = a % b; if(a==0)
   return b;
b = b % a;
if(b==0) return a;
//indentation level 2
      //level 2
      //level 3
//level 2
      //level 2
      //level 3
// align with matching }
// align with matching {

## Submission: 

Submit your program to this page:
https://storm.cis.fordham.edu:8443/web/project/167?current_tab=my_submissions
Note that your file needs to be named lab0_fib.cpp (case sensitive). 

The program will be automatically compiled using command:
```
g++ lab0_fib.cpp
```

If your program does not compile, you will see the error message, and your submission is rejected. Otherwise, the code is submitted, and the grader will hand grade based upon the rubrics outlined in 6.
You can submit up to 25 times for this lab, as we are getting familiar with the programming/submission environment. 

(The daily limit is 9 submissions per day).
Refer to this how-to tutorial in the google driver: https://docs.google.com/document/d/13Fr5F7D_nz7ycolUPpmAmriVu6XVdTGy/edit?
usp=sharing&ouid=103223134137508100592&rtpof=true&sd=true
