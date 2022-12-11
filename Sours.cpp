#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class phone_book{
	private:
		string name;
		string surname;
		string home_phone;
		string mobile_phone;
	public:

		phone_book(string name, string surname, string home_phone,
				string mobile_phone){
		
		this->name = name;
		this->surname = surname;
		this->home_phone=home_phone;
		this->mobile_phone= mobile_phone;
		}
		phone_book(){}

		void set_date(string name, string surname, string home_phone,
				string mobile_phone){
			this->name = name;
			this->surname = surname;
			this->home_phone = home_phone;
			this->mobile_phone=mobile_phone;		
		}
		void get_date(){
		cout << "name: " << name << " ";
		cout << "surname: " << surname << " ";
		cout << "home_phone: " << home_phone << " ";
		cout << "mobile_phone: " << mobile_phone << endl;
		}

		void write_file(string str){
			ofstream file(str);
				if(file.is_open()){
				file << name << endl;
				}
		
		}

		void read_file(string str){
			ifstream file(str);
			while(!file.eof()){
			
			}
		
		}
};


int main(){
phone_book book;
book.set_date("test name", "test_sername", "test home_phone", "test mobile_phone");
book.get_date();

book.write_file("file.txt");




}
