export module student;

import std;

// Exercise 1: implements function 'add', that adds two numbers
export int add(int a, int b);

// Exercise 2: implements function 'mul', that multiplies two numbers
export int mul(int a, int b);

// ===============
// implementations

export int add(int a, int b)
{
   int c =0;
   c = a+b;
   return c; // TODO: fix
}

// Exercise 2: implements function 'mul', that multiplies two numbers
export int mul(int a, int b)
{
   int c =0;
   c = a*b;
   return c; // TODO: fix
}
