#include<iostream>
using namespace std;

void inout() {
	//变量
	string name;

	//等待键盘输入
	/*
	 *cin.get函数可以接受一个参数，该参数指定要读取的字符数，而cin>>操作符会根据数据类型自动确定要读取的字符数。
	 *cin.get函数可以读取空格和换行符等空白字符，而cin>>操作符在遇到这些字符时会停止读取。
	 *cin.get函数可以读取一行完整的文本，包括空格和换行符，而cin>>操作符在读取到空格或换行符时会停止。
	 *cin>>操作符会忽略输入缓冲区中的空白字符，而cin.get函数会将它们读取并保留在缓冲区中。
	 *
	 */
	while (true) {
		//方式1：
		cin >> name;
		//方式2：
		//name = cin.get();
		//cin.ignore();
		//输出欢迎信息
		cout << "hello " << name << endl;
		 
	}
}

/*
 * main函数
 */
int main() {
	//hello world
	//endl 相当于回车
	cout << "hello world!" << endl;

	inout();

	
	return 0;
}

