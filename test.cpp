class Test {
 public:
    int a;
 private:
    Test();
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
};

int main() {

    auto s = []() {return 1;};
    auto _i = 5u;
    auto p = NULL;
    boost::mutex m_mutex;
    boost::thread t;
    boost::lock_guard l;
    typedef unsigned MyInt;
    enum my_color {
        BLACK,
        WHITE
    };

    enum class my_color_new {
        BLACK,
        WHITE
    };

    std::shared_ptr<Test> p = std::make_shared<Test>();
    return 0;
}
