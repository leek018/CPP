#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int &another_a = a;

	int b = 3;
	another_a = b; // error 한번 참조된 reference는 다시 한번 참조에 사용될 수 없다.
	
	int &a = 3; // error literal은 참조 될 수 없다
	const int &a = 3; // 그러나 const 한정자를 사용하면 사용가능.
	
	int arr[3] = {1,2,3};
	int (&ref)[3] = arr; // 배열 reference
}
	
