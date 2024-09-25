
#pragma once
#include"Product.h"


class BinarySearchTree
{

public:
	Product* Root;
	int count;

	BinarySearchTree();

	void InsertProduct(string Name, string catagory, int rating, int price);

	void SearchProduct(int price, string catagory);
	void SearchProductByname(string name, int price, string catagory);


	void UpdateProduct(int OldPrice);
	void UpdateProductByname(string name, int price);


	void PrintMaxmiumPriceProduct();
	void PrintListMaxmiumPriceProduct();
	void PrintListMinimumPriceProduct();

	void PrintMinimumPriceProduct();
	void Print(Product*& root);

	

	void DeleteProductbyPrice(int price);
	void DeleteProductbyName(string name, int price);

	void recommensearchitems(Product*& product, string& category, int& counter, int& limit);
	void recommenuyitems(Product*& product, string& catagory, int& reccounter, int& reclimit);
};