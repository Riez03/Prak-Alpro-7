#include <iostream>
using namespace std;

class data{
  public:
    void input();
    void proses();
    void output();

  private:
    int kode[20];
    string nama[20];
    int stock[20];
    int temp_kode;
    string temp_nama;
    int temp_stock;
    int n,i,b, cari, ada;
};

void data::input(){
  cout<<"Masukan banyak data = ";cin>>n;
  for(i=0;i<n;i++){
    cout<<endl;
    cout<<"Data ke-"<<(i+1)<<":"<<endl;
	cout<<"Input Id Barang : "; cin>>kode[i];
    cout<<"Input Nama Barang: "; cin>>nama[i];
	cout<<"Input Stock Barang : "; cin>>stock[i];
	cout<<endl;
  }
}

int main(){
	
}
