#include <iostream>

int main()
{
	int sum = 0, val = 10;
	while (val >= 0)
	{
		sum = val;
		std::cout<<"10~0之间包含以下整数" << sum <<std::endl;
		--val;
	}
	//std::cout << "50~100之间得整数加起来等于" << sum << std::endl;
	return 0;
}