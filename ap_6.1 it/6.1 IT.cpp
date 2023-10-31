#include <iostream> 
#include <iomanip> 
#include <time.h>

using namespace std;
void Print(int* mas, const int n);
int Suma(int* mas, const int n);
void Create(int* mas, const int n);
void Zamina_0(int* mas, const int n);
int Numbers(int* mas, const int n);

int main()
{
	srand((unsigned)time(NULL));

	const int a = 25;
	int A[a];
	Create(A, a);
	Print(A, a);
	cout << "Suma = " << Suma(A, a) << endl;
	cout << "Zamina_0 = "; Zamina_0(A, a); cout << endl;
	cout << "Numbers = " << Numbers(A, a) << endl;
	return 0;
}

int Suma(int* mas, const int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
		if (mas[i] % 2 == 0 && !(mas[i] % 8 == 0))
			s += mas[i];
	return s;
}

void Create(int* mas, const int n)
{
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 85 + 5;
	}
}
void Print(int* mas, const int n) {
	cout << "A{";
	for (int i = 0; i < n; i++)
		cout << " " << mas[i];
	cout << "}";
	cout << endl;
}
void Zamina_0(int* mas, const int n)
{
	cout << "A{";
	for (int i = 0; i < n; i++) {
		mas[i] = 0;
		cout << mas[i] << ", ";
	}
	cout << "}";
	cout << endl;
}
int Numbers(int* mas, const int n)
{
	int num = 0;
	for (int i = 0; i < n; i++) {
		num++;
	}
	return num;
}
