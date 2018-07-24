class Test {
 public:
    int a;
 private:
    inline Test();
    void copy() {}
    ~Test() {}
    Test(const Test&);
 public:
    Test(Test&&);
    virtual doSomething(){}
};

class child : public Test {
 public:
    void do() override final {}
    virtual doSomething() override {}
    void get() final;
};

void test() throw();
void test2() throw ();
auto fn_five = std::bind (my_divide,10,2);
vector<int> vs;
vs.push_back(1);
