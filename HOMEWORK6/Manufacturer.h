#include<iostream>
#include<string>
using namespace std;
class Manufacturer {
private:
	int id;
	string name;
	string address;
	string telephone;

public:
	static int counter;

	Manufacturer()
	{
		cout << "Enter id for Manufacturer: ";
		cin >> this->id;
		cin.ignore();
		cout << "Enter name: ";
		getline(cin, this->name);
		cout << "Enter address: ";
		getline(cin, this->address);
		cout << "Enter telephone: ";
		getline(cin, this->telephone);
		cin.ignore();
		counter++;
	
	}

	Manufacturer(int id,string address,string name,string telephone)
	{
		this->id = id;
		this->name = name;
		this->address = address;
		this->telephone = telephone;
		counter++;
	
	}
	

	Manufacturer(const Manufacturer& old)
	{
		this->id = old.id;
		this->name = old.name;
		this->address = old.address;
		this->telephone = old.telephone;
		counter++;
	}

	~Manufacturer()
	{
		
		cout << "with the id of " << this->id << " and the name of " << this->name << " has been deleted" << endl;
		counter--;
		
	}

	static int getManCounter()
	{
		return counter;
	}

	void setId(int id)
	{
		this->id = id;

	}

	void setName(string name)
	{
		this->name = name;
	}

	void setAddress(string address)
	{
		this->address = address;
	}

	void setTelephone(string telephone)
	{
		this->telephone = telephone;
	}

	int getId()
	{
		return this->id;
	}

	string getName()
	{
		return this->name;
	}

	string getAddress()
	{
		return this->address;
	}
	
	string getTelephone()
	{
		return this->telephone;
	}

	void displayManufacturer() {
		cout << "Manufacturer id: " << this->id << endl;
		cout << "Name: " << this->name << endl;
		cout << "Address: " << this->address << endl;
		cout << "Telephone: " << this->telephone << endl;
	}
};

int Manufacturer::counter = 0;