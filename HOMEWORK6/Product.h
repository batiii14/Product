#include<iostream>
#include<string>
using namespace std;
class Product {
private:
	int id;
	string name;
	Industry industry;
	Manufacturer manufacturer;
	double production_price;
	double customer_price;

public:
	static int prodCount;
	Product(int id,string name,double production_price,double customer_price,Industry ind,Manufacturer man):industry(ind),manufacturer(man)
	{
		this->id = id;
		this->production_price = production_price;
		this->customer_price = customer_price;
		prodCount++;
	}

	Product()
	{	
		cout << "Enter Product id: ";
		cin >> this->id;
		cin.ignore();
		cout << "Enter Product Name: ";
		getline(cin, this->name);
		cout << "Enter Production Price: ";
		cin >> this->production_price;
		cout << "Enter Customer Price: ";
		cin >> this->customer_price;
		cin.ignore();
		prodCount++;
		
	}

	Product(const Product& old)
	{
		this->id = old.id;
		this->production_price = old.production_price;
		this->customer_price = old.customer_price;
		this->name = old.name;
		prodCount++;

	}

	~Product()
	{
		cout << "Product with the id of " << this->id << " and the name of " << this->name << " has been deleted" << endl;
		prodCount--;
	}

	static int getCounter()
	{
		return prodCount;
	}

	void setId(int id)
	{
		this->id = id;
	}

	void setName(string name)
	{
		this->name = name;
	}

	void setProductionPrice(double production_price)
	{
		this->production_price = production_price;

	}
	
	void setCustomerPrice(double customer_price)
	{
		this->customer_price = customer_price;
	}

	int getId() 
	{
		return this->id;
	}

	string getName()
	{
		return this->name;
	}
	
	double getProductionPrice()
	{
		return this->production_price;
	}

	double getCustomerPrice()
	{
		return this->customer_price;
	}

	void displayProduct()
	{
		cout << "Product name: " << this->name << endl;
		cout<<"Product id: " << this->id << endl;
		cout << "Production Price: " << this->production_price << endl;
		cout << "Customer Price: " << this->customer_price << endl;
		cout << "\n\nManufacturer Information: " << endl;
		manufacturer.displayManufacturer();
		cout << "\n\nIndustry Information: " << endl;
		industry.displayIndustry();

		cout << "\nThere is " << prodCount << " product in the system " << endl;
		cout << "\nThere is " << manufacturer.getManCounter() << " manufacturer in the system " << endl;
		cout << "\nThere is " << industry.getCount() << " industry in the system " << endl;
	}
};

int Product::prodCount = 0;