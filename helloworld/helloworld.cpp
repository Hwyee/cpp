#include<iostream>
using namespace std;

void inout() {
	//����
	string name;

	//�ȴ���������
	/*
	 *cin.get�������Խ���һ���������ò���ָ��Ҫ��ȡ���ַ�������cin>>��������������������Զ�ȷ��Ҫ��ȡ���ַ�����
	 *cin.get�������Զ�ȡ�ո�ͻ��з��ȿհ��ַ�����cin>>��������������Щ�ַ�ʱ��ֹͣ��ȡ��
	 *cin.get�������Զ�ȡһ���������ı��������ո�ͻ��з�����cin>>�������ڶ�ȡ���ո���з�ʱ��ֹͣ��
	 *cin>>��������������뻺�����еĿհ��ַ�����cin.get�����Ὣ���Ƕ�ȡ�������ڻ������С�
	 *
	 */
	while (true) {
		//��ʽ1��
		cin >> name;
		//��ʽ2��
		//name = cin.get();
		//cin.ignore();
		//�����ӭ��Ϣ
		cout << "hello " << name << endl;
		 
	}
}

/*
 * main����
 */
int main() {
	//hello world
	//endl �൱�ڻس�
	cout << "hello world!" << endl;

	inout();

	
	return 0;
}

