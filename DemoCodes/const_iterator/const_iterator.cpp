#include <iostream>
#include <vector>

using namespace std;

int main()
{
	std::vector<int> vec;
	int nArray[5] = { 1, 2, 3, 4, 5 };
	vec.assign(nArray, nArray + 5);
	const std::vector<int>::iterator iter = vec.begin();  //iter acts like a T* const
	*iter = 10;
	//iter++; //build error
	std::vector<int>::const_iterator clter = vec.begin();// cIter acts like a const T*
	//*clter = 10; //build error
	clter++;
	return 0;
}