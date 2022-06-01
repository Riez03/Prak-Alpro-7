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
void data::proses(){
  cout<<"Data Barang Anda"<<endl;
  cout<<"================================================="<<endl;
  cout<<"|   Id Barang   |  Nama Barang  | Stock Barang  |"<<endl;
  cout<<"================================================="<<endl;
  for(i=0;i<n;i++){
    cout<<"|      "<<kode[i]<<"\t|\t"<<nama[i]<<"\t|\t"<<stock[i]<<"\t |"<<endl;
  }
  cout<<endl;
  cout<<"================================================="<<endl;
  
  for(i=0;i<n;i++){
		for(b=0;b<n-1;b++){
			if(stock[b] < stock[b+1]){
				temp_kode=kode[b];
				kode[b]=kode[b+1];
				kode[b+1]=temp_kode;

				temp_nama=nama[b];
				nama[b]=nama[b+1];
				nama[b+1]=temp_nama;

				temp_stock=stock[b];
				stock[b]=stock[b+1];
				stock[b+1]=temp_stock;
            }
        }
    }
    cout<<"\nSetelah data diurutkan berdasarkan stock terbesar : "<<endl;
    cout<<"=================================================="<<endl;
    cout<<"|   Id Barang   |  Nama Barang  | Stock Barang  |"<<endl;
    cout<<"=================================================="<<endl;
        for(b=0;b<n;b++){
        	cout<<"|      "<<kode[b]<<"\t|\t"<<nama[b]<<"\t|\t"<<stock[b]<<"\t |"<<endl;
            }
    cout<<"=================================================="<<endl;
        
	  cout<<endl;
}
void data::output(){
	cout<<"Masukan Kode Barang Untuk Mencari : ";
	cin>>cari;
	temu = 0;
    for(b=0; b<n; b++){
      if(kode[b]==cari){
        temu=1;
		cout<<"=================================="<<endl;
        cout<<"|  Nama Barang  |  Stock Barang  |"<<endl;
        cout<<"=================================="<<endl;
        cout<<"|      " <<nama[b]<<"\t|\t" <<stock[b] <<"\t |"<<endl;
			}
    	}
		cout<<"=================================="<<endl;
        
		if (temu == 0){
        	cout<<"Data Tidak ditemukan"<<endl;
        }
}
int main(){
	data run;
	run.input();
	run.proses();
	run.output();
}
