#include"BinarySearchTree.h"

BinarySearchTree::BinarySearchTree() {
	Root = NULL;
	count = 0;
}



void BinarySearchTree::InsertProduct(string Name, string category, int rating, int price)
{
	Product* NewProduct = new Product();
	NewProduct->ProductName = Name;
	NewProduct->ProductCatagory = category;
	NewProduct->ProductRating = rating;
	NewProduct->ProductPrice = price;

	if (Root == NULL)
	{
		Root = NewProduct;
		cout << "Product Insert Root Successfully :)" << endl;
		count++;
	}
	else
	{
		Product* temp = Root;
		while (temp != NULL)
		{
			// For Larger Values
			if (price > temp->ProductPrice)
			{
				if (temp->Right != NULL)
				{
					temp = temp->Right;
				}
				else
				{
					temp->Right = NewProduct;
					cout << "Product Insert right Successfully :)" << endl;
					count++;
					break;
				}
			}
			// For Smaller Values
			else if (price < temp->ProductPrice)
			{
				if (temp->Left != NULL)
				{
					temp = temp->Left;
				}
				else
				{
					temp->Left = NewProduct;
					cout << "Product Insert left Successfully :)" << endl;
					count++;
					break;
				}
			}
			else
			{
				cout << "Duplicate product with the same price." << endl;
				delete NewProduct;
				break;
			}
		}
	}
}

void BinarySearchTree::SearchProduct(int price, string catagory)
{
	if (Root == NULL)
	{
		cout << endl;
		cout << " Nothing is entered by user :( " << endl;
	}
	else
	{
		Product* temp = Root;
		while (temp != NULL)
		{
			if (price > temp->ProductPrice)
			{
				temp = temp->Right;
			}
			else if (price < temp->ProductPrice)
			{
				temp = temp->Left;
			}
			else
			{
				cout << " ::::: Found ::::: " << endl;
				cout << " Product Name is: " << temp->ProductName << endl;
				cout << " Product Catagory is: " << temp->ProductCatagory << endl;
				cout << " Product Price is: " << temp->ProductPrice << endl;
				cout << " Product Rating is: " << temp->ProductRating << endl;
				cout << endl;
				return;

			}

		}


	}
}
void BinarySearchTree::SearchProductByname(string name, int price, string catagory) {
	if (Root == NULL)
	{
		cout << endl;
		cout << " Nothing is entered by user :( " << endl;
	}
	else
	{
		Product* temp = Root;
		while (temp != NULL)
		{
			if (price > temp->ProductPrice)
			{
				temp = temp->Right;
			}
			else if (price < temp->ProductPrice)
			{
				temp = temp->Left;
			}
			else
			{
				cout << " ::::: Found ::::: " << endl;
				cout << " Product Name is: " << temp->ProductName << endl;
				cout << " Product Catagory is: " << temp->ProductCatagory << endl;
				cout << " Product Price is: " << temp->ProductPrice << endl;
				cout << " Product Rating is: " << temp->ProductRating << endl;
				return;

			}

		}


	}

}

void BinarySearchTree::UpdateProduct(int OldPrice)
{
	if (Root == NULL)
	{
		cout << "No products are entered by the user :(" << endl;
	}
	else
	{
		Product* temp = Root;
		while (temp != NULL)
		{
			if (OldPrice > temp->ProductPrice)
			{
				temp = temp->Right;
			}
			else if (OldPrice < temp->ProductPrice)
			{
				temp = temp->Left;
			}
			else
			{
				cout << "Found product with old price " << OldPrice << ":" << endl;
				cout << "Old Details:" << endl;
				cout << "Product Name: " << temp->ProductName << endl;
				cout << "Product Category: " << temp->ProductCatagory << endl;
				cout << "Product Price: " << temp->ProductPrice << endl;
				cout << "Product Rating: " << temp->ProductRating << endl;
				cout << endl;

				// Get new details from the user
				string newName, newCategory;
				int newRating, newPrice;

				cout << "Enter new details:" << endl;
				cout << "New Product Name: ";
				cin >> newName;
				cout << "New Product Category: ";
				cin >> newCategory;
				cout << "New Product Price: ";
				cin >> newPrice;
				cout << "New Product Rating: ";
				cin >> newRating;

				// Update product details
				temp->ProductName = newName;
				temp->ProductCatagory = newCategory;
				temp->ProductRating = newRating;

				cout << "Updated details:" << endl;
				cout << "Product Name: " << temp->ProductName << endl;
				cout << "Product Category: " << temp->ProductCatagory << endl;
				cout << "Product Price: " << temp->ProductPrice << endl;
				cout << "Product Rating: " << temp->ProductRating << endl;
				cout << endl;

				return;
			}
		}

		cout << "Product with old price " << OldPrice << " not found." << endl;
	}
}
void BinarySearchTree::UpdateProductByname(string name, int price)
{
	if (Root == NULL)
	{
		cout << "No products are entered by the user :(" << endl;
	}
	else
	{
		Product* temp = Root;
		while (temp != NULL)
		{
			if (price > temp->ProductPrice)
			{
				temp = temp->Right;
			}
			else if (price < temp->ProductPrice)
			{
				temp = temp->Left;
			}
			else if (price == temp->ProductPrice && name == temp->ProductName)
			{
				cout << "Found product with name '" << name << "':" << endl;
				cout << "Old Details:" << endl;
				cout << "Product Name: " << temp->ProductName << endl;
				cout << "Product Category: " << temp->ProductCatagory << endl;
				cout << "Product Price: " << temp->ProductPrice << endl;
				cout << "Product Rating: " << temp->ProductRating << endl;
				cout << endl;

				// Get new details from the user
				string newname;
				string newCategory;
				int newRating;

				cout << "Enter new details:" << endl;
				cout << "New Product Name: ";
				cin >> newname;
				cout << "New Product Category: ";
				cin >> newCategory;
				cout << "New Product Rating: ";
				cin >> newRating;

				// Update product details
				temp->ProductCatagory = newCategory;
				temp->ProductName = newname;
				temp->ProductRating = newRating;

				cout << "Updated details:" << endl;
				cout << "Product Name: " << temp->ProductName << endl;
				cout << "Product Category: " << temp->ProductCatagory << endl;
				cout << "Product Price: " << temp->ProductPrice << endl;
				cout << "Product Rating: " << temp->ProductRating << endl;
				cout << endl;

				return;
			}
		}

		cout << "Product with name '" << name << "' not found." << endl;
	}
}


void BinarySearchTree::PrintMaxmiumPriceProduct()
{
	if (Root == NULL)
	{
		cout << endl;
		cout << " Nothing is entered by user :( " << endl;
	}

	else
	{
		Product* temp = Root;
		while (temp->Right != NULL)
		{
			temp = temp->Right;
		}
		cout << " ::::: This is Most Expensive Product ::::: " << endl;
		cout << " Product Name is: " << temp->ProductName << endl;
		cout << " Product Catagory is: " << temp->ProductCatagory << endl;
		cout << " Product Price is: " << temp->ProductPrice << endl;
		cout << " Product Rating is: " << temp->ProductRating << endl;
		cout << endl;
	}
}  // Print one expensive product by simple


void BinarySearchTree::PrintListMaxmiumPriceProduct()
{
	if (Root == NULL)
	{
		cout << endl;
		cout << " Nothing is entered by user :( " << endl;
	}

	else
	{
		Product* temp = Root;
		while (temp->Right != NULL)
		{
			cout << " ::::: This is Expensive Product ::::: " << endl;
			cout << " Product Name is: " << temp->ProductName << endl;
			cout << " Product Catagory is: " << temp->ProductCatagory << endl;
			cout << " Product Price is: " << temp->ProductPrice << endl;
			cout << " Product Rating is: " << temp->ProductRating << endl;
			cout << endl;
			temp = temp->Right;
		}
		
	}
}  // Print one expensive product by simple
void BinarySearchTree::PrintMinimumPriceProduct()
{
	if (Root == NULL)
	{
		cout << endl;
		cout << " Nothing is entered by user :( " << endl;
	}

	else
	{
		Product* temp = Root;
		while (temp->Left != NULL)
		{
			temp = temp->Left;
		}


		cout << " ::::: This is Most Cheap Product ::::: " << endl;
		cout << " Product Name is: " << temp->ProductName << endl;
		cout << " Product Catagory is: " << temp->ProductCatagory << endl;
		cout << " Product Price is: " << temp->ProductPrice << endl;
		cout << " Product Rating is: " << temp->ProductRating << endl;
		cout << endl;
	}



}  // Print one cheap product by simple
void BinarySearchTree::PrintListMinimumPriceProduct()
{
	if (Root == NULL)
	{
		cout << endl;
		cout << " Nothing is entered by user :( " << endl;
	}

	else
	{
		Product* temp = Root;
		while (temp->Left != NULL)
		{
			cout << " ::::: This is Most Cheap Product ::::: " << endl;
			cout << " Product Name is: " << temp->ProductName << endl;
			cout << " Product Catagory is: " << temp->ProductCatagory << endl;
			cout << " Product Price is: " << temp->ProductPrice << endl;
			cout << " Product Rating is: " << temp->ProductRating << endl;
			cout << endl;
			temp = temp->Left;
		}


		
	}



}
void BinarySearchTree::Print(Product*& temp)
{
	while (temp != nullptr) {
		if (temp->Left == nullptr) {
			cout << "The Product Name is: " << temp->ProductName << endl;
			cout << "The Product Price is: " << temp->ProductPrice << endl;
			cout << "-----------------------------" << endl;
			temp = temp->Right;
		}
		else {
			Product* pre = temp->Left;
			while (pre->Right != nullptr && pre->Right != temp) {
				pre = pre->Right;
			}

			if (pre->Right == nullptr) {
				pre->Right = temp;
				temp = temp->Left;
			}
			else {
				pre->Right = nullptr;
				cout << "The Product Name is: " << temp->ProductName << endl;
				cout << "The Product Price is: " << temp->ProductPrice << endl;
				cout << "-----------------------------" << endl;
				temp = temp->Right;
			}
		}
	}
}



void BinarySearchTree::DeleteProductbyPrice(int price) {
	if (Root == NULL) {
		cout << "Tree is Empty..." << endl;
		return;
	}

	Product* curr = Root;
	Product* parent = NULL;

	// Search for the node to delete
	while (curr != NULL) {
		if (curr->ProductPrice == price) {
			break;
		}
		else {
			parent = curr;
			if (price < curr->ProductPrice) {
				curr = curr->Left;
			}
			else {
				curr = curr->Right;
			}
		}
	}

	if (curr == NULL || curr->ProductPrice != price) {
		cout << "Product not found" << endl;
		return;
	}

	// Case 1: delete a node having zero child
	if (curr->Left == NULL && curr->Right == NULL) {
		if (parent == NULL) {
			// Deleting the root node
			delete Root;
			Root = NULL;
		}
		else if (parent->Left == curr) {
			parent->Left = NULL;
			delete curr;
		}
		else {
			parent->Right = NULL;
			delete curr;
		}
	}
	// Case 2: delete a node having a single child
	else if (curr->Left != NULL && curr->Right == NULL) {
		if (parent == NULL) {
			// Deleting the root node
			Root = curr->Left;
			delete curr;
		}
		else if (parent->Left == curr) {
			parent->Left = curr->Left;
			delete curr;
		}
		else {
			parent->Right = curr->Left;
			delete curr;
		}
	}
	else if (curr->Left == NULL && curr->Right != NULL) {
		if (parent == NULL) {
			// Deleting the root node
			Root = curr->Right;
			delete curr;
		}
		else if (parent->Left == curr) {
			parent->Left = curr->Right;
			delete curr;
		}
		else {
			parent->Right = curr->Right;
			delete curr;
		}
	}
	// Case 3: delete a node having two children
	else {
		Product* temp = curr->Left;
		Product* chkr = temp;
		while (chkr->Right != NULL) {
			temp = chkr;
			chkr = chkr->Right;
		}

		swap(curr->ProductPrice, chkr->ProductPrice);
		swap(curr->ProductName, chkr->ProductName);
		swap(curr->ProductCatagory, chkr->ProductCatagory);
		swap(curr->ProductRating, chkr->ProductRating);

		temp->Right = NULL;
		delete chkr;
	}

	cout << "Product deleted" << endl;
	count--;
	return;
}
void BinarySearchTree::DeleteProductbyName(string name, int price) {
	if (Root == NULL) {
		cout << "Tree is Empty..." << endl;
		return;
	}

	Product* curr = Root;
	Product* parent = NULL;

	// Search for the node to delete
	while (curr != NULL) {
		if (curr->ProductName == name) {
			break;
		}
		else {
			parent = curr;
			if (price < curr->ProductPrice) {
				curr = curr->Left;
			}
			else {
				curr = curr->Right;  // Fix: Corrected to curr->Right
			}
		}
	}

	if (curr == NULL || curr->ProductName != name) {
		cout << "Product not found" << endl;
		return;
	}

	// Case 1: delete a node having zero child
	if (curr->Left == NULL && curr->Right == NULL) {
		if (parent == NULL) {
			// Deleting the root node
			delete Root;
			Root = NULL;
		}
		else if (parent->Left == curr) {
			parent->Left = NULL;
			delete curr;
		}
		else {
			parent->Right = NULL;
			delete curr;
		}
	}
	// Case 2: delete a node having a single child
	else if (curr->Left != NULL && curr->Right == NULL) {
		if (parent == NULL) {
			// Deleting the root node
			Root = curr->Left;
			delete curr;
		}
		else if (parent->Left == curr) {
			parent->Left = curr->Left;
			delete curr;
		}
		else {
			parent->Right = curr->Left;
			delete curr;
		}
	}
	else if (curr->Left == NULL && curr->Right != NULL) {
		if (parent == NULL) {
			// Deleting the root node
			Root = curr->Right;
			delete curr;
		}
		else if (parent->Left == curr) {
			parent->Left = curr->Right;
			delete curr;
		}
		else {
			parent->Right = curr->Right;
			delete curr;
		}
	}
	// Case 3: delete a node having two children
	else {
		Product* temp = curr->Left;
		Product* chkr = temp;
		while (chkr->Right != NULL) {
			temp = chkr;
			chkr = chkr->Right;
		}

		swap(curr->ProductPrice, chkr->ProductPrice);
		swap(curr->ProductName, chkr->ProductName);
		swap(curr->ProductCatagory, chkr->ProductCatagory);
		swap(curr->ProductRating, chkr->ProductRating);

		temp->Right = NULL;
		delete chkr;
	}

	cout << "Product deleted" << endl;
	count--;
	return;
}

void BinarySearchTree::recommensearchitems(Product*& product, string& category, int& counter, int& limit)
{

	while (product != nullptr && counter < limit) {
		if (category == product->ProductCatagory) {
			cout << " ::::: Try this Product ::::: " << endl;
			cout << " Product Name is: " << product->ProductName << endl;
			cout << " Product Category is: " << product->ProductCatagory << endl;
			cout << " Product Price is: " << product->ProductPrice << endl;
			cout << " Product Rating is: " << product->ProductRating << endl;
			cout << " ----------------------------------------- " << endl;
			cout << endl;
			counter++;
		}

		// Traverse left first if available, otherwise go right
		if (product->Left != nullptr) {
			product = product->Left;
		}
		else {
			product = product->Right;
		}
	}

}
void BinarySearchTree::recommenuyitems(Product*& product, string& category, int& reccounter, int& reclimit)
{

	while (product != nullptr && reccounter < reclimit) {
		if (category == product->ProductCatagory) {
			cout << " ::::: Try this Product ::::: " << endl;
			cout << " Product Name is: " << product->ProductName << endl;
			cout << " Product Category is: " << product->ProductCatagory << endl;
			cout << " Product Price is: " << product->ProductPrice << endl;
			cout << " Product Rating is: " << product->ProductRating << endl;
			cout << " ----------------------------------------- " << endl;
			cout << endl;
			reccounter++;
		}

		if (product->Left != nullptr) {
			product = product->Left;
		}
		else {
			product = product->Right;
		}
	}
}

