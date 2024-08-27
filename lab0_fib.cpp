#include <iostream>
#include <assert.h>
#include <time.h>
using namespace std;

#define BILLION 1E9


/* Calculate and return n-th term in Fibonacci sequence
 @param n: the position, n>=0
 @return the n-th term in the sequence
 @precondition: n>=0, and F_n can be represented by integer
 @postcondition: return F_n
 */
long Fib(int n)
{
   assert (n>=0); 
   if (n==0)
	   return 0;
   if (n==1)
	   return 1;
   else
	   return Fib(n-1)+Fib(n-2);
}


/* Calculate and return n-th term in Fibonacci sequence
 @param n: the position, n>=0
 @return the n-th term in the sequence
 @precondition: n>=0, and F_n can be represented by integer
 @postcondition: return F_n
 */
long Fib2(int n)
{
   int F[n];
   F[0]=0;
   F[1]=1;
   
   for (int i=2;i<=n;i++)
   {
	F[i] = F[i-1]+F[i-2];
   }
   return F[n];
}



int main()
{
   int result;
   struct timespec t,t2;

   cout <<"Recursive Fib calculator\n";

   cout <<"Enter n:";
   int n;
   cin >> n;

   clock_gettime(CLOCK_REALTIME, &t);
   cout <<t.tv_sec<<" seconds and "<<t.tv_nsec<<" nanoseconds (10^-9 s) has passed since Unix Epoch"<<endl;

   result = Fib(n);
  
   clock_gettime(CLOCK_REALTIME, &t2);
   cout <<t2.tv_sec<<" seconds and "<<t2.tv_nsec<<" nanoseconds (10^-9 s) has passed since Unix Epoch"<<endl;

   double elapsed = (t2.tv_sec-t.tv_sec)+
	   (t2.tv_nsec-t.tv_nsec)/1e9; //convert nano to second 

   cout <<"one billion ="<<1e9;
   cout <<"Time elapsed is "<< elapsed<<" seconds"<<endl;
   cout <<"Fib("<<n<<")="<<Fib(n)<<endl;



}
