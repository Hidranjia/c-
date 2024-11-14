/*
# include <iostream>
using namespace std;
 struct product{
	int code;
	float weight;
	float price;
};
void initial(product &p) {
	p.code = 0;
	p.weight = 0;
	p.price = 0;
}
void modify(product &p) {
	cout << "modify the code" << endl;
	cin >> p.code;
	cout << "modifiy the price" << endl;
	cin >> p.price;
	cout << "modify the weight" << endl;
	cin >> p.weight;
}
void display(product p){
	cout << "The new code" << p.code << endl;
	cout << "The new price" << p.price << endl;
	cout << "The new weight" << p.weight << endl;
}
int main()
{
	product M1, M2;
	initial(M1);
	initial(M2);
	display(M1);
	display(M2);
	modify(M1);
	modify(M2);
	display(M1);
	display(M2);

	return 0;
} 
*/
# include <iostream>
using namespace std;
struct product {
	int code;
	float weight;
	float price;
};
void initialize(product* p) {
	p->code = 0;
	p->weight = 0;
	p->price = 0;
}
void modify(product* p) {
	cout << "modify the code" << endl;
	cin >> p->code;
	cout << "modify the price" << endl;
	cin >> p->price;
	cout << "modify the weight" << endl;
	cin >> p->weight;
}
void display(product* p) {
	cout << "The new code" << p->code << endl;
	cout << "The new price" << p->price << endl;
	cout << "The new weight" << p->weight << endl;
}
int main()
{
	product* M1 = new product;
	product* M2 = new product;
	initialize(M1);
	initialize(M2);
	display(M1);
	display(M2);
	modify(M1);
	modify(M2);
	display(M1);
	display(M2);
	delete M1;
	delete M2;
	return 0;
} 