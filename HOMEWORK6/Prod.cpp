#include<iostream>
#include<string>
using namespace std;
#include "Industry.h"
#include "Manufacturer.h"
#include "Product.h"



void main()
{
	Industry autoobj1;
	Industry* ptr1 = new Industry;
	Industry* ptr2 = new Industry;
	Manufacturer manObj[3], *ptr3;
	ptr3 = manObj;

	Product* ptrArr = new Product[5];

	
	

	for (int i = 0; i <= 1; i++)
	{
		ptrArr[i].displayProduct();
	}
	system("pause");
}