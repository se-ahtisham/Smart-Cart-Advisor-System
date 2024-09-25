#include"History.h"



void intro()
{
	cout << endl;
	cout << "\t\t\t ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: " << endl;
	cout << "\t\t\t :::::::::::  Welcome To E-commerce Recommendation system  :::::::::: " << endl;
	cout << "\t\t\t ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: " << endl;
	cout << endl;
}




int main()
{
	intro();
	int choice = 1;
	string name = "";
	string catagory = "";
	int rating = 0;
	int price = 0;


	string searchcatagpry = "";
	string purchasecatagory = "";


	BinarySearchTree B1;
	Search S1;
	History H1;



	while (choice != 0)
	{
		int userchoice = 0;
		cout << endl;
		cout << " Press 1. To Insert Products " << endl;
		cout << " Press 2. To Search and purchase Product By price " << endl;
		cout << " Press 3. To Search and purchase Product By Name" << endl;
		cout << " Press 4. To Update Product Details By Name " << endl;
		cout << " Press 5. To Update Product Details By Price " << endl;
		cout << " Press 6. To Find Most Expensive Product " << endl;
		cout << " Press 7. To Find Cheapest Product " << endl;
		cout << " Press 8. To Find list of Expensive Products " << endl;
		cout << " Press 9. To Find list of Cheap Products " << endl;
		cout << " Press 10. To Delete Product By Price" << endl;
		cout << " Press 11. To Delete Product By Name" << endl;
		cout << " Press 12. To Show all Products" << endl;
		cout << " Press 13. To View Search History " << endl; 
		cout << " Press 14. To View Purchase History " << endl;
		cout << " Press 15. To View Recommended Items " << endl;
		cout << " Press 16. To Test code " << endl; 




		cout << endl;
		cout << " Please Enter Your Choice >>>>>  ";
		cin >> userchoice;
		switch (userchoice)
		{
		case 1:  // To Insert Product By simple
		{
			cout << endl;
			cout << " Please Enter Product Name: ";
			cin >> name;
			cout << " Please Enter Product Catagory: ";
			cin >> catagory;
			cout << " Please Enter Product Raking: ";
			cin >> rating;
			cout << " Please Enter Product Price: ";
			cin >> price;
			B1.InsertProduct(name, catagory, rating, price);
			cout << endl;
		}
		break;
		case 2: // To Search and purchased Product By price
		{
			cout << endl;
			cout << " Please Enter Product Price: ";
			cin >> price;
			cout << " Please Enter Product Catagory: ";
			cin >> catagory;
			B1.SearchProduct(price, catagory);
			cout << endl;
			int userchoice = 0;
			cout << " Please Enter 1. If you Want to Purchase this item " << endl;
			cout << " Please Enter 2. If you ar Not Intreested " << endl;
			cout << " >> Please Enter Your Choice:  ";
			cin >> userchoice;
			switch (userchoice)
			{
			case 1:
			{
				searchcatagpry = catagory;
				purchasecatagory = catagory;
				S1.InsertSearchHistroy(name, price, catagory);
				H1.PurchaseProduct(name, price, catagory);
				cout << " Congratulation Item Purchased Successfully :) " << endl;
				cout << endl;
			}
			break;

			case 2:
			{
				searchcatagpry = catagory;
				S1.InsertSearchHistroy(name, price, catagory);
				break;
			}
			break;

			default:
			{
				cout << endl;
				cout << " Error! Invlid Input :( " << endl;
			}
			break;
			}
		}
		break;
		case 3: // To Search and purchased Product By Name
		{
			cout << endl;
			cout << "Please Enter Product name: ";
			cin >> name;
			cout << " Please Enter Product Catagory: ";
			cin >> catagory;
			cout << "Please Enter Product Price: ";
			cin >> price;
			B1.SearchProductByname(name, price, catagory);
			cout << endl;
			int userchoice = 0;
			cout << " Please Enter 1. If you Want to Purchase this item " << endl;
			cout << " Please Enter 2. If you ar Not Intreested " << endl;
			cout << " >> Please Enter Your Choice:  ";
			cin >> userchoice;
			switch (userchoice)
			{
			case 1:
			{
				searchcatagpry = catagory;
				purchasecatagory = catagory;
				S1.InsertSearchHistroy(name, price, catagory);
				H1.PurchaseProduct(name, price, catagory);
				cout << " Congratulation Item Purchased Successfully :) " << endl;
				cout << endl;
			}
			break;

			case 2:
			{
				searchcatagpry = catagory;
				S1.InsertSearchHistroy(name, price, catagory);
				break;
			}
			break;

			default:
			{
				cout << endl;
				cout << " Error! Invlid Input :( " << endl;
			}
			break;
			}

		}
		break;
		case 4:  // Update Product Details By Name
		{
			cout << endl;
			cout << " Please Enter Product Name: ";
			cin >> name;
			cout << " Please Enter Product Price: ";
			cin >> name;
			B1.UpdateProductByname(name, price);
			cout << endl;

		}
		break;
		case 5: // To Update Product Details by price
		{
			cout << endl;
			cout << " Please Enter Product Price: ";
			cin >> price;
			B1.UpdateProduct(price);
			cout << endl;

		}
		break;
		case 6: // To Find Most Expensive One Product by simple perfect
		{
			cout << endl;
			B1.PrintMaxmiumPriceProduct();
			cout << endl;
		}
		break;
		case 7: // Print one cheap product by simple
		{
			cout << endl;
			B1.PrintMinimumPriceProduct();
			cout << endl;
		}
		break;
		case 8:
		{
			cout << endl;
			B1.PrintListMaxmiumPriceProduct();
			cout << endl;
		}
		break;
		case 9:
		{
			cout << endl;
			B1.PrintListMinimumPriceProduct();
			cout << endl;

		}
		break;
		case 10: // To Delete by price
		{
			cout << endl;
			cout << "Pease Enter Product Price: ";
			cin >> price;
			B1.DeleteProductbyPrice(price);
			cout << endl;
		}
		break;
		case 11: //To Delete by Name
		{
			cout << endl;
			cout << "Pease Enter Product Name: ";
			cin >> name;
			cout << " Please Enter Product Price: ";
			cin >> price;
			B1.DeleteProductbyName(name, price);
			cout << endl;
		}
		break;
		case 12:
		{
			cout << endl;
			B1.Print(B1.Root);
			cout << endl;

		}
		break;

		case 13: //To Print Search Histroy
		{
			cout << endl;
			S1.PrintallSearch();
			cout << endl;
		}
		break;
		case 14: //To Print Purchased Histroy
		{
			cout << endl;
			H1.PrintallPurchaseHistory();
			cout << endl;
		}
		break;
		case 15: //To Print recommened items
		{
			cout << endl;
			cout << "-------------------------------------------" << endl;
			int counter = 0;  // 0
			int reccounter = 0;  // 0
			int limit = 7;  // Limit the search to 7 items
			int reclimit = 3;  // Limit the search to 7 items

			B1.recommensearchitems(B1.Root, searchcatagpry, counter, limit);
			B1.recommenuyitems(B1.Root, purchasecatagory, reccounter, reclimit);
			cout << endl;
		}
		break;
		case 16: //Only for test
		{
			BinarySearchTree bst;

			// Inserting 50 products
			for (int i = 1; i <= 20; ++i)
			{
				bst.InsertProduct("BeautyProduct" + to_string(i), "Beauty", i, i * 10);
			}

			for (int i = 21; i <= 40; ++i)
			{
				bst.InsertProduct("PowerProduct" + to_string(i - 20), "Power", i, i * 10);
			}

			for (int i = 41; i <= 50; ++i)
			{
				bst.InsertProduct("KidsProduct" + to_string(i - 40), "Kids", i, i * 10);
			}
			cout << endl;
			cout << "-------------------------------------------" << endl;
			// Buy beauty products
			string beautyCategory = "Beauty";
			int counter = 0;  // 0
			int reccounter = 0;  // 0
			int limit = 7;  // Limit the search to 7 items
			int reclimit = 3;  // Limit the recomended to 3 items
			bst.recommensearchitems(bst.Root, beautyCategory, counter, limit);
			bst.recommenuyitems(bst.Root, beautyCategory, reccounter, reclimit);
		}
		break;

		default:
		{
			cout << endl;
			cout << " Error! Invlid Input :( " << endl;
		}
		break;

		} // Switch Brackets

		cout << " Press any key to run again and Press to exit " << endl;
		cout << " Please Enter Your Choice:  ";
		cin >> choice;
		cout << endl;
	} // while Loop Brackets



	system("Pause");
}