#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct Triangle {
  float base, height;
} ;

float areaFunction(float a, float b);
float hypotenuseFunction(float a, float b);
int main ()
{
  Triangle t1, t2;
  float area1;
  float hype1;
  float area2;
  float hype2;

  t1.base = 3;
  t1.height = 5;
  t2.base = 4;
  t2.height = 8; 

  area1 = areaFunction(t1.base, t1.height);
  hype1 = hypotenuseFunction(t1.base, t1.height);
  area2 = areaFunction(t2.base, t2.height);
  hype2 = hypotenuseFunction(t2.base, t2.height);
  
  cout << "The first triangle hypotenuse is "<< hype1 << endl;
  cout << "The area of the first triangle is "<< area1 << endl;
  cout << "The second triangle hypotenuse is "<< hype2 << endl;
  cout << "The area of the first triangle is "<< area2 << endl;

  return 0;
}
float areaFunction(float a, float b) {
float solution;
solution = 0.5 * a * b;
return solution;
}
float hypotenuseFunction(float a, float b) {
float solution;
solution = sqrt(pow(a,2)+pow(b,2));
return solution;
}