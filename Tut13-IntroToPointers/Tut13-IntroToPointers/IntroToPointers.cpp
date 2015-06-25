#include <iostream>

int cat, dog, snake;


/*start of main memory

------ -
| i |
------ -
------ -
| j |
------ -
------ -
| k |
------ -

..

..

..

START global memory

-------
|   cat|
-------
-------
|  dog |
-------
-------
|  snake|
-------
*/

int main(int argc, char* argv[]) {

	using namespace std;

	int i, j, k;

	cout << "i address=" << (long)&i << endl;
	cout << "j address=" << (long)&j << endl;
	cout << "k address=" << (long)&k << endl;

	cout << "cat address=" << (long)&cat << endl;
	cout << "dog address=" << (long)&dog << endl;
	cout << "snake address=" << (long)&snake << endl;

	getchar();
	return 0;
}