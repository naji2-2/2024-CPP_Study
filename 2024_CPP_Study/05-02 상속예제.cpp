#include <iostream>
#include <string>

using namespace std;

class C {
public:
	C(bool g_pointer, bool g_structure, bool I_stdio, bool g_array, bool g_if, bool g_for)
		: g_pointer_(g_pointer), g_structure_(g_structure), I_stdio_(I_stdio), g_array_(g_array), g_if_(g_if), g_for_(g_for)
	{

	}

	~C() {
		cout << "������" << g_pointer_ << endl;
		cout << "����ü" << g_structure_ << endl;
		cout << "stdio" << I_stdio_ << endl;
		cout << "�迭" << g_array_ << endl;
		cout << "���ǹ�" << g_if_ << endl;
		cout << "�ݺ���" << g_for_ << endl;
	}

	void print_Show()
	{

	}

private : 
	bool g_pointer_;
	bool g_structure_;
	bool I_stdio_;
	bool g_array_;
	bool g_if_;
	bool g_for_;
};

class CPP : public C {
public:
	CPP(bool g_pointer, bool g_structure, bool I_stdio, bool g_array, bool g_if, bool g_for, bool g_class, bool g_inheritance,  bool g_reference)
		: C(g_pointer, g_structure, I_stdio, g_array, g_if, g_for), g_class_(g_class), g_inheritance_(g_inheritance), g_reference_(g_reference)
	{

	}

	~CPP() {

	}

	void print_Show()
	{
		C::print_Show();
		cout << "������" << g_class_ << endl;
		cout << "����ü" << g_inheritance_ << endl;
		cout << "stdio" << g_reference_ << endl;
	}

private:
	bool g_class_;
	bool g_inheritance_;
	bool g_reference_;
};

int main() {
	CPP* cpp = new CPP(true, true, true, true, true, true, true, true, true);
	cpp->print_Show();
	delete cpp;
	return 0;
}