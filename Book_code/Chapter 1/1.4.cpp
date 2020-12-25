// Part 1

bool // Boolean, possible values are true and false

char // character, for example, 'a', 'z', and '9'

int // integer, for example, -273, 42, and 1066

double // double-precision floating-point number, for example, -273.15, 3.14, and 6.626e-34

unsigned // non-negative integer, for example, 0, 1, and 999 (use for bitwise logical operations)

// Part 2

x + y   // plus
+x      // unary plus
x - y   // minus
-x      // unary minus
x*y     // multiply
x/y     // divide
x%y     // remainder (modulos) for int

x==y    // equal
x!=y    // not equal
x<y     // less than
x>y     // greater than
x<=y    // less than or equal
x>=y    // greater than or equal

x&y     // bitwise and
x|y     // bitwise or
x^y     // bitwise exclosive or
~x      // bitwise complement
x&&y    // logical and
x||y    // logical or
!x      // logical not (negation)

x+=y    // x = x + y
++x     // x = x + 1
x−=y    // x = x - y
−−x     // x = x - 1
x∗=y    // x = x*y
x/=y    // x = x/y
x%=y    // x = x%y

// Part 3

double d1 = 2.3;
double d2 {2.3};
double d3 = {2.3}; // {...} is optional

complex<double> z = 1;
complex<double> z2 {d1,d2};
complex<double> z3 = {d1,d2}; // {...} is optional 

vector<int> v {1, 2, 3, 4, 5, 6};

int i1 = 7.8; // i1 = 7
int i2 {7.8}; // error: floating-point to integer conversion

auto b = true;
auto ch = "x";
auto i = 123;
auto d = 1.2; // auto is automatic type