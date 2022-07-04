// ConsoleApplicationCPP.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>;
using namespace std;

class Address {

private:
    const char* m_City;

public:
    Address();
    ~Address();

    friend class Student;

    void SetAddress(const char* str) {
        m_City = str;
    }
};

Address::Address() : m_City() {}

Address::~Address() {
    delete m_City;
}

class People {
private:
    char ch;
protected:
    const char* m_Name;
    int m_Age;
    float m_Score;
  
    void SetScore(float score);

public:
    People();
    People(const char* name, int age, float score);
    ~People();

    void SetName(const char* name);
    void SetAge(int age);
    float GetScore() const;
    void say();

};

People::People() {
    m_Name = NULL;
    m_Age = 0;
    m_Score = 100;
}

People::People(const char* name, int age, float score) :m_Score(score), m_Name(name), m_Age(age)
{
    /*  m_Name = name;
      m_Age = age;
      m_Score = score;*/
}

inline People::~People() {
    delete m_Name;
}

void People::SetName(const char* name) {
    m_Name = name;
    this->m_Name = name;
}

void People::SetAge(int age) {
    m_Age = age;
}

inline void People::SetScore(float score) {
    m_Score = score;
}

float People::GetScore() const {
    return m_Score;
}

//函数定义
inline void People::say/*speak*/() {
    if (m_Name == NULL) {
        cout << "未定义" << endl;
    }
    else
    {
        cout << m_Name << "的年龄是" << m_Age << "，成绩是" << m_Score << endl;
    }
}

class Man 
{
};

class Student : public People
{
private:
    const int aa = 0;
    char ch;
protected:

public:
    char* Name;
    int Age;
    float Score;
    const int Length = 0;
    int* ArrayIndex;
    int* ArrayP;

    using People::m_Score;

    static int Total;

    Student();
    Student(const char* name, int age, float score);
    ~Student();

    using People::SetScore;

    void coutAddress(Address *pAddress);
    void Input();
    int* IndexAt(int i);
    void say();

    void CCC() {
        cout << "名字：" << Name << "   年龄:" << Age << "  分数:" << Score << endl;
    }

    void printThis() {
        cout << this << endl;
    }
};

Student::Student() : aa(), Length() {}

Student::Student(const char* name, int age, float score) :People(name,age,score), aa(), Length()
{
    m_Name = name;
    m_Age = age;
    m_Score = score;
}

int* Student::IndexAt(int i) {
    if (!ArrayIndex || i < 0 || i >= Length)
    { 
        return NULL; 
    }
    else 
    { 
        return ArrayIndex + i;
    }
}

void Student::Input() {
    for (int i = 0; ArrayP = IndexAt(i); i++) 
    {
        cin >> *IndexAt(i); 
    }
}

void Student::coutAddress(Address* pAddress) {
    cout << pAddress->m_City << endl;
}

//函数定义
inline void Student::say/*speak*/() {
    if (m_Name == NULL) {
        cout << "未定义" << endl;
    }
    else
    {
        cout << m_Name << "的年龄是aaaaa" << m_Age << "，成绩是aaa" << m_Score << endl;
    }
}

inline Student::~Student() {
    delete Name;
}

int Student::Total = 10;

//int main()
//{
//   std::cout << "Hello World!\n";
//
//   Student stdnt;
//   stdnt.Age = 19;
//   stdnt.Score = 222;
//   stdnt.Total = 2382;
//
//   Student* student = new Student("bb",29,57);
//   char* strp = new char[10];
//   cin >> strp;
//   student->Name = strp;
//   student->Age = 11;
//   student->Score = 88;
//   student->CCC();
//
//   student->Total = 111;
//
//   student->SetName("xiaoming");
//   student->SetAge(18);
//   student->SetScore(88.0);
//   student->say();
//   free(strp);
//
//   Address* pAddress = new Address();
//   pAddress->SetAddress("CCCC");
//   student ->coutAddress(pAddress);
//
//   student->printThis();
//
//   delete student;
//
//   return 0;
//}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
