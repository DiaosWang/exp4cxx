#include <iostream>    // 用于标准输入输出
#include <vector>      // 用于std::vector
#include <algorithm>   // 用于std::for_each
using namespace std;

template<typename T>
class Print{
	public: 
		T thresd; 
		Print(T thresd):thresd(thresd){}
		void operator()(T i){
			if(i > thresd)
				cout << i << endl;
		}
};

int main(int argv, char* argc[])
{
	vector<int> it = { 1,2,3,4, 6, 7, 8 };
	for_each(it.begin(), it.end(), Print<int>(5));

	return 0;
}
