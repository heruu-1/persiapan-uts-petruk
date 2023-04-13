#include <iostream>
using namespace std;

//struct
class test {
public:
	int x;
};

class test2 : public test {
};

int main (){
	test2 tes;
	
	tes.x = 1;
	cout << tes.x;
	return 0;
}

struct mhs{
	string nim;
	string nama;
	int nilai;
};

char grades(int n){
	if(n>85){
		return 'A';
	} else if (n>75 && n<=85){
		return 'B';
	} else if (n>65 && n <=75){
		return 'C';
	} else if (n>45 && n<=65){
		return 'D';
	} else {
		return 'E';
	}
}

int main(){
	int jml;
	cout << "Jumlah mahasiswa : "; cin >> jml;
	mhs mahasiswa[jml];
	cout << "Data Mahasiswa : " << endl;
	for(int a = 0 ; a<jml;a++){
		cout << "Data Ke-"<< a+1<<endl;
		cout << "nim \t: ";cin >> mahasiswa[a].nim;
		cout << "nama \t: ";cin >> mahasiswa[a].nama;
		cout << "nilai \t: ";cin >> mahasiswa[a].nilai;
		cout << endl;
	}
	cout << "=========================="<<endl;
	for(int b = 0;b<jml;b++){
		cout <<"Data ke-"<<b+1<<endl;
		cout << "nim \t: " << mahasiswa[b].nim<<endl;
		cout << "nama \t: "<<mahasiswa[b].nama<<endl;
		cout << "nilai \t: "<< mahasiswa[b].nilai<<endl;
		cout << "grade \t: "<< grades(mahasiswa[b].nilai)<<endl;
	}
}

int main(){
	int a = 10;
	int b;
	
	int *c = &a;
	int d = *c;
	
	cout << &a<<endl;
	cout << &b<<endl;
	cout << c << endl;
	cout << d;
 * reference -> menyimpan alamat dari variabel di memori
 & dereference -> mengetahui alamat dari sebuah variabel
}

void nilai(int *a){
	cout <<"Alamat Parameter : " << a<< endl;
	cout <<"Nilai Parameter : " << *a << endl;
}
void kuadrat(int *z){
	*z =*z * *z;
}
int main(){
	int x = 10;
	nilai(&x);
	cout << "Angka : "<< x << endl;
	kuadrat (&x);
	cout << "Kuadrat : "<< x << endl;
	
}

// nama_depan += " " + nama_belakang

double circle (int r)
{
    return 3.14 * r * r;
}

int fib(int x) {
   if ((x==1)||(x==0)) return x;
   
   return fib(x-1) + fib(x-2);
}

void findMax()
{
    int N;
    cin >> N;
    
    int max = -99999, tmp;
    
    for (int i = 0; i < N; i++) {
        cin >> tmp;
        
        if (max < tmp) max = tmp;
    }
    
    cout << max;
}

void hitungRerata()
{
    int N;
    cin >> N;
    
    double total = 0, tmp;
    
    for (int i = 0; i < N; i++) {
        cin >> tmp;
        total += tmp;
    }
    
    cout << total/N;
}

#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	string text[4];
	
	for (int i = 0; i < 4; ++i){
		cin >> text[i];
	}
	
	ofstream outFile("data.txt");
	
	for (int i = 0; i < 4; ++i){
		outFile << text[i] << endl;
	}
	
	return 0;
}

double jarak (double x1, double y1, double x2, double y2)
{
    double res = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    
    return res;
}

/* 2217051004
 *
 */

#include <iostream>

#define minimum(x,y) x < y ? x : y;
#define maximum(x,y) x > y ? x : y;

long long rekursif(long long digitAkhir, long long digit9) {
    if (digit9 == 0) 
        return 0;
    
    else if (digit9 == 1) 
        return digitAkhir;

    return digitAkhir * rekursif(digitAkhir, digit9 - 1);
}

using namespace std;

int main()
{
    int a =  minimum(0, 4);
    int b = maximum(0, 4);
    long long c = rekursif(4, 0);
  
    const char *npm = "2217051004";
    const char *str = &npm[8];

    cout << a << endl; // output 0
    cout << b << endl;  // output 4
    cout << c << endl; // output 4 kali 4 sebanyak 0 kali
  
    cout << str << endl;  // output isi dari pointer
    cout << (void *) &npm[8] << endl;  // output alamat dari data
  
    return 0;
}





#include <iostream>
#include <string>

// Class Person
class Person {
private:
    std::string name;
    std::string address;
    int age;

public:
    std::string getName() {
        return this->name;
    }

    std::string getAddress() {
        return this->address;
    }

    int getAge () {
        return this->age;
    }

    void setName (std::string newName) {
        this->name = newName;
    }

    void setAddress (std::string newAddress) {
        this->address = newAddress;
    }

    void setAge (int newAge) {
        this->age = newAge;
    }

};

/* swapInt
 * desc     : function that swap int value
 * usage    :
 *          int a = 50;
 *          int b = 10;
 *          swapInt(&a, &b);
 *          a == 10
 *          b == 50
 */
void swapInt(int *lhs, int *rhs) {
    int tmp = *lhs;
    *lhs = *rhs;
    *rhs = tmp;
}

/* fungsi menghitung luas segitiga
 *
 */
double luasSegitiga (double alas, double tinggi) {
    return alas / 2 * tinggi;
}

using namespace std;

int main()
{
    const char * str = "hello world";       // c string
    int a = 100;
    int b = 200;

    cout << str << endl;
    cout << "a = " << a << endl;     // 100
    cout << "b = " << b << endl;     // 200

    swapInt(&a, &b);            // swap a and b
    cout << "a = " << a << endl;     // 200
    cout << "b = " << b << endl;     // 100

    Person orangBaik;
    orangBaik.setName("Siapa ya");
    orangBaik.setAddress("dimana ya");
    orangBaik.setAge(100);

    cout << "Nama saya = " << orangBaik.getName() << endl;
    cout << "Tinggal di = " << orangBaik.getAddress() << endl;
    cout << "Umur saya = " << orangBaik.getAge() << endl;

    return 0;
}
