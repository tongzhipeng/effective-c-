#include <iostream>
#include <string>

class TextBlock
{
public:
	TextBlock(const std::string& strParam)
	{
		text = strParam;
	}
	const char& operator[] (std::size_t position) const //for const object
	{
		return text[position];
	}

	char& operator[] (std::size_t position) //for non-const object
	{
		return text[position];
	}

private:
	std::string text;
};
int main()
{
	TextBlock tb("Hello");
	std::cout << tb[0] << std::endl;
	const TextBlock ctb("Hello");
	std::cout << ctb[0] << std::endl;

	system("pause");
	return 0;
}