#include<iostream>
#include<string>
using namespace std;
class Industry {
private:
	int id;
	string name;
	double global_worth;
public:

	static int indCount;

	Industry() {
		cout << "Enter id for Industry: ";
		cin >> this->id;
		cin.ignore();
		cout << "Enter name: ";
		getline(cin, this->name);
		cout << "Enter global worth: ";
		cin >> this->global_worth;
		cin.ignore();

		indCount++;
	}

	Industry(int id, string name, double global_worth)
	{
		this->id = id;
		this->name = name;
		this->global_worth = global_worth;
		indCount++;
	}

	Industry(const Industry &obj)
	{
		this->id = obj.global_worth;
		this->name = obj.name;
		this->global_worth = obj.global_worth;
		indCount++;

	}

	~Industry()
	{
		cout << "with the id of " << this->id<<" and the name of " <<this->name<<" has been deleted" << endl;
		indCount--;
	}
	static int getCount()
	{
		return indCount;
	}
	void setId(int id)
	{
		this->id = id;
	}

	void setGlobalWorth(double global_worth)
	{
		this->global_worth = global_worth;
	}

	void setName(string name)
	{
		this->name = name;
	}

	int getId()
	{
		return this->id;
	}

	string getName()
	{
		return this->name;
	}

	double getGlobalWorth()
	{
		return this->global_worth;
	}

	void displayIndustry()
	{
		cout << "Industry id: " <<this->id << endl;
		cout << " Name: " << this->name << endl;
		cout << " Global Worth: " << this->global_worth << endl;
	}


};

int Industry::indCount = 0;