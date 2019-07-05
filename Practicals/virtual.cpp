#include <IOSTREAM.H>
#include <STRING.H>
using namespace std;

class Student
{
    protected:
    char name[10];
    public:
    void set_name(char *n) 
    {
        strcpy(name, n);
    }
};

class Test : virtual public Student
{
    protected:
    int a,b;
    public:
    void set_marks(int ab, int bc)
    {   
        a = ab;
        b = bc;
    }
};

class Sports : virtual public Student
{
    protected:
    int c;
    public:
    void set_pt_marks(int m)
    {
        c = m;
    }
};

class Result : public Test, public Sports
{
    public:
    void calculate_marks()
    {
        cout << "Total marks " << a + b + c;
    }
};

int main()
{
    Result r;
    r.set_name("Hi");
    r.set_marks(98,89);
    r.set_pt_marks(92);
    r.calculate_marks();
}