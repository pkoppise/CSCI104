#include <iostream>
#include <memory>
using namespace std;

class Test
{
public:
	void print() { std::cout << "test" << endl; }
};

int main()
{
	shared_ptr<Test> sp1(new Test);
	sp1->print();

	shared_ptr<Test> sp2(sp1);
	sp2->print();

	cout << sp2.get() << " " << sp2.use_count() << endl;
	cout << sp1.get() << " " << sp1.use_count() << endl;
	sp1.reset();

	cout << sp2.get() << " " << sp2.use_count() << endl;
	cout << sp1.get() << " " << sp1.use_count() << endl;

	unique_ptr<Test> up1(new Test);
	unique_ptr<Test> up2 = move(up1);

	cout << up1.get() << " " << up2.get() << endl;

    return 0;
}
