#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	int soluongsgk, dongiasgk, soluongstk, dongiastk, soluongtc, dongiatc;
	double tongtien;
	cout << "sach giao khoa";
	cin >> soluongsgk >> dongiasgk;
	cout << "sach tham khao";
	cin >> soluongstk >> dongiastk;
	cout << "tap chi";
	cin >> soluongtc >> dongiatc;
	cout << "sach giao khoa" << '\n';
	cout << "so luong: " << soluongsgk << '\n';
	cout << "don gia: " << dongiasgk << '\n';
	tongtien = soluongsgk * dongiasgk * 1.05;
	cout << "tong tien: ";
	cout << fixed << setprecision(2) << tongtien << '\n';
	cout << "sach tham khao" << '\n';
	cout << "so luong: " << soluongstk << '\n';
	cout << "don gia: " << dongiastk << '\n';
	cout << "tong tien: " << soluongstk * dongiastk * 1.08 << '\n';
	cout << "tap chi" << '\n';
	cout << "so luong: " << soluongtc << '\n';
	cout << "don gia: " << dongiatc << '\n';
	cout << "tong tien: " << soluongtc * dongiatc * 1.1;
}