class Math
{
public:
    static int Add(int, int);
    static int Add(int, int, int);
    static int Add(double, double);
    static int Add(double, double, double);
    static int Mul(int, int);
    static int Mul(int, int, int);
    static int Mul(double, double);
    static int Mul(double, double, double);
    static int Add(int count, ...); // sums up a list of integers
    static char* Add(const char*, const char*);
};

///Static member functions in C++ are class-level functions that are associated with the class itself rather than with 
///individual instances (objects) of the class. They are declared using the static keyword, and we can call such a function 
/// with a class name without the need to create an object.