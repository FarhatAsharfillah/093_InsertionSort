#include <iostream>
using namespace std;
int arr[12];
int n;
void input() { //procedur untuk input
	while (true) {
		cout << "Masukan banyaknya elemen array = "; // output ke layar
		cin >> n; //input dari pengguna
		if (n <= 12) //jika n kurang dari atau sama dengan 20
			break; // keluar dari loop
		else { //Jika n lebih dari 20
			cout << "\nArray dapat mempunyai maksimal 20 elemen. \n"; // output ke layar
		}
	}
	cout << endl;
	cout << "====================" << endl;
	cout << "Masukan Elemen Array" << endl;
	cout << "====================" << endl;

	for (int i = 0; i < n; i++) { //Looping dengan i dimulai dari 0 hingga n-1
		cout << "Data ke-" << (i + 1) << " : "; // Output ke layar
		cin >> arr[i];
	}
}

void InsertionSort() 
{

	int i, n, temp, j;

	for (i = 1; i < n - 1; i++) 
	{
		temp = arr[i]; 
		j = 1 - 1; 
		while (j >= 0 && arr[j] > temp) 
		{
			arr[j + 1] = arr[j]; 
			j = j - 1; 
		}
	arr[j + 1] = temp; 

	for (int k = 0; k < n; k++) {
		cout << arr[k] << " ";

}
}
void display() 
		cout << endl;
		cout << "=================================" << endl;
		cout << "Element Array yang Telah tersusun" << endl;
		cout << "=================================" << endl;
		cout << endl;

	for (int j = 0; j < n; j++) {
		cout << arr[j];
		if (j < n - 1) {
			cout << "--->";
		}
	}
	cout << endl;
	cout << endl;

}
int main() {
	input();
	InsertionSort();
	display();
	system("pause");
	return 0;
}