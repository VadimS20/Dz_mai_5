#include "task_5.h"

using namespace std;

int main()
{
	SP x(new object(24));
	SP y(new object(37));
	y->display();
	x->display();
	x = y;
	x->display();
	return 0;
}
