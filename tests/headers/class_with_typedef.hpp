typedef int AnotherInt;

class C {
public:
    typedef int MyInt;
    MyInt c;
    MyInt* ptr;
    AnotherInt d;
    AnotherInt* other_ptr;
};
