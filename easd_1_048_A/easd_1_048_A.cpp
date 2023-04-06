// 1. Karena algorithma dapat mendefinisikan prosedur langkah demi langkah untuk memecah suatu masalah dengan cara yang paling effisien
// 2. 2 data struktur, yaitu : Static dan Dinamic
// 3. Kecepatan Prosesor, Compiler, Operating System, Programming Language, Size of the input
// 4. Merge Sort, karena data dapat disortir hanya dengan mencari data tengah lalu dibagi menjadi 2 segmen, kemudian dipecah lagi menjadi menjadi 1 elemen, kemudian di sortir dengan cara membandingkan 2 elemen
// 5.	A. Quadratic : Bubble Sort, Selection Sort, Insertion Sort, Shell Sort
//		B. Loglinear : Quick Sort, Merge Sort
// 6. JAWABAN ALGORITHMA MERGE SORT DIBAWAH.

#include <iostream>
using namespace std;

int rafi[68];
int n;

void inputan() {
	while (true)
	{
		cout << "Masukkan Panjang Elemen Array : ";
		cin >> n;
		
		if (n <= 60)
			break;
		else
			cout << "Maksimum Panjang Array adalah 68";
	}
	cout << endl;
	cout << endl;

	cout << "===================================" << endl;
	cout << "Masukkan Elemen yang Anda Inginkan" << endl;
	cout << "===================================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "<" << i + 1 << ">"; 
		cin >> rafi[i];
	}
}



void swap(int x, int y)
{
	int temp;

	temp = rafi[x];
	rafi[x] = rafi[y];
	rafi[y] = temp;
}


void MergeSort(int low, int high) 
{
	int Mid, i, RA, k;
	if (low >= high)
		return;

	MergeSort(low, ((low + high) / 2));
	MergeSort(((low + high) / 2) + 1, high);

	Mid = (low + high) / 2;

	i = low;
	RA = Mid + 1;
	k = low;

	while (true)
	{
		while (i > Mid || RA > high) {
			if (rafi[i] <= rafi[RA])
				i++;
		}
		RA++;
	}
	k++;

	while (true)
	{
		if (rafi[RA] > rafi[high]) {
			RA++;
			k++;
		}
	}

	while (true)
	{
		while (rafi[i] > rafi[Mid])
		{
			i++;
			k++;
			
		}
	}
	
}


void display() {
	cout << "===================================" << endl;
	cout << "Elemen yang telah tersusun" << endl;
	cout << "===================================" << endl;
	
	for (int a = 0; a < n; a++) {
		cout << rafi[a] << " ";
	}
}


int main() {
	inputan();
	MergeSort(0, n-1);
	display();
	system("Pause");

	return 0;
}