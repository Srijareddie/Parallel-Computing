/* PROGRAM Parallel version of SquareRoot */
/* Figure 2.1 */
#include <stdlib.h>
#include <math.h>
#define n 5
float a[n+1];
float b[n+1];
int i;

float do_sqrt(float num_to_eval, int iteration_val) {
  cout << "Function do_sqrt Visit #" << iteration_val << ENDL;
  return sqrt(num_to_eval);
}

void print_stuff(float[] p, float[] q, int n) {
  int j;
  cout << ENDL <<"List#   Original   Square Root" << ENDL;
  for (j = 1; j <= n; j++) {
    cout << " "<< j << ":"<< "    "<< p[j];
    cout << "      " << q[j] << ENDL;
  }
}

main() {
  cout.precision(5); /* use 5 significant digits for float output */
  for (i = 1; i <= n; i++)
    a[i] = (rand() % 1000);

  /*forall i = 1 to n grouping 2 do */

  forall i = 1 to n do
    b[i] = do_sqrt(a[i],i);
  print_stuff(a, b, n);
}
