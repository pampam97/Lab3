#include <iostream>

using namespace std;

class Array {
private:
	int* a;
	int n;
public:
	Array(int n1, int* b) {
		n = n1;
		a = b;
	}
	~Array() {
		delete[]a;
	}
	void show() {
		cout << "Массив: ";
		for (int i = 0; i < n; i++) {
			cout << a[i] << " ";
		}
	}
	int& operator[](const int index) {
		return a[index];
	}
};

int main()
{
	setlocale(0, " ");
	int n;
	cout << "Введите кол-во элементов массива: ";
	cin >> n;
	int* b = new int[n];
	for (int i = 0; i < n; i++) {
		cout << i << " - элемент = ";
		cin >> b[i];
	}
	Array arr(n, b);
	arr.show();
	cout << endl;
	arr[n - 1]--;
	arr[n - 2]--;
	arr.show();
	return 0;
}



















/*#include <iostream>

using namespace std;

int mas[10];

void func1(int& a)
{
	a--;
}

int& func2(int ms[])
{
	int a;
	cout << "Введите индекс элемента от 0 до 9: ";
	cin >> a;
	return ms[a];
}

int main()
{
	setlocale(0," ");
	int b = 9;
	func1(b);
	cout << b << endl;
	func2(mas)++;
	for (int i = 0; i < 10; i++)
	{
		cout << mas[i] << " ";
	}
}*/