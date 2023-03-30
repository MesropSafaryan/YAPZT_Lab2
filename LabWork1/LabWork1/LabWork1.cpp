//restaurant menu system
#include <iostream>
using namespace std;
string encryptDecrypt(string toEncrypt) {
	char key[3] = { 'K', 'C', 'Q' };
	string output = toEncrypt;

	for (int i = 0; i < toEncrypt.size(); i++)
		output[i] = toEncrypt[i] ^ key[i % (sizeof(key) / sizeof(char))];

	return output;
}
int main() {
	int order, no_deals;
	string str1Encr = encryptDecrypt("|*---------------------------MENU-----------------------------*|");
	string str1Decr = encryptDecrypt(str1Encr);
    cout << str1Decr << endl;
	cout << endl;
	string str2Encr = encryptDecrypt("(1)  Chicken Biryani                    $2 only.");
	string str2Decr = encryptDecrypt(str2Encr);
	cout << str2Decr << endl;
	string str3Encr = encryptDecrypt("(2)  Chicken Palao                      $1.5 only.");
	string str3Decr = encryptDecrypt(str3Encr);
	cout << str3Decr << endl;
	string str4Encr = encryptDecrypt("(3)  Chinese Rice                       $2.5 only.");
	string str4Decr = encryptDecrypt(str4Encr);
	cout << str4Decr << endl;
	string str5Encr = encryptDecrypt("(4)  Chicken Burgar                     $1 only.");
	string str5Decr = encryptDecrypt(str5Encr);
	cout << str5Decr << endl;
	string str6Encr = encryptDecrypt("(5)  Nawabi Pizza                       $4.5 only.");
	string str6Decr = encryptDecrypt(str6Encr);
	cout << str6Decr << endl;
	string str7Encr = encryptDecrypt("(6)  2.5 Litre Coke                     $1.75 only.");
	string str7Decr = encryptDecrypt(str7Encr);
	cout << str7Decr << endl;
	cout << endl;
	string str8Encr = encryptDecrypt("Please select the order number: ");
	string str8Decr = encryptDecrypt(str8Encr);
	cout << str8Decr;
	cin >> order;
	string str9Encr = encryptDecrypt("Please enter the number of deals: ");
	string str9Decr = encryptDecrypt(str9Encr);
	cout << str9Decr;
	cin >> no_deals;
	cout << endl;
	string str10Encr = encryptDecrypt("Order : Chicken Biryani.");
	string str10Decr = encryptDecrypt(str10Encr);
	string str11Encr = encryptDecrypt("Number of deals : ");
	string str11Decr = encryptDecrypt(str11Encr);
	string str12Encr = encryptDecrypt("Price of each deal: $2 only.");
	string str12Decr = encryptDecrypt(str12Encr);
	string str13Encr = encryptDecrypt("Total price : ");
	string str13Decr = encryptDecrypt(str13Encr);
	string str14Encr = encryptDecrypt("~---------THANK YOU FOR COMING-----------~");
	string str14Decr = encryptDecrypt(str14Encr);

	string str15Encr = encryptDecrypt("Order Chicken Palao.");
	string str15Decr = encryptDecrypt(str15Encr);
	string str16Encr = encryptDecrypt("Number of deals : ");
	string str16Decr = encryptDecrypt(str16Encr);
	string str17Encr = encryptDecrypt("Price of each deal: $1.5 only.");
	string str17Decr = encryptDecrypt(str17Encr);
	string str18Encr = encryptDecrypt("Total price : ");
	string str18Decr = encryptDecrypt(str18Encr);
	string str19Encr = encryptDecrypt("~---------THANK YOU FOR COMING-----------~");
	string str19Decr = encryptDecrypt(str19Encr);

	string str20Encr = encryptDecrypt("Order : Chinese Rice.");
	string str20Decr = encryptDecrypt(str20Encr);
	string str21Encr = encryptDecrypt("Number of deals : ");
	string str21Decr = encryptDecrypt(str21Encr);
	string str22Encr = encryptDecrypt("Price of each deal: $2.5 only.");
	string str22Decr = encryptDecrypt(str22Encr);
	string str23Encr = encryptDecrypt("Total price : ");
	string str23Decr = encryptDecrypt(str23Encr);
	string str24Encr = encryptDecrypt("~---------THANK YOU FOR COMING-----------~");
	string str24Decr = encryptDecrypt(str24Encr);

	string str25Encr = encryptDecrypt("Order : Chicken Burgar.");
	string str25Decr = encryptDecrypt(str25Encr);
	string str26Encr = encryptDecrypt("Number of deals : ");
	string str26Decr = encryptDecrypt(str26Encr);
	string str27Encr = encryptDecrypt("Price of each deal: $1 only.");
	string str27Decr = encryptDecrypt(str27Encr);
	string str28Encr = encryptDecrypt("Total price : ");
	string str28Decr = encryptDecrypt(str28Encr);
	string str29Encr = encryptDecrypt("~---------THANK YOU FOR COMING-----------~");
	string str29Decr = encryptDecrypt(str29Encr);

	string str30Encr = encryptDecrypt("Order : Nawabi Pizza.");
	string str30Decr = encryptDecrypt(str30Encr);
	string str31Encr = encryptDecrypt("Number of deals : ");
	string str31Decr = encryptDecrypt(str31Encr);
	string str32Encr = encryptDecrypt("Price of each deal: $4.5 only.");
	string str32Decr = encryptDecrypt(str32Encr);
	string str33Encr = encryptDecrypt("Total price : ");
	string str33Decr = encryptDecrypt(str33Encr);
	string str34Encr = encryptDecrypt("~---------THANK YOU FOR COMING-----------~");
	string str34Decr = encryptDecrypt(str34Encr);

	string str35Encr = encryptDecrypt("Order : 2.5 Litre Coke.");
	string str35Decr = encryptDecrypt(str35Encr);
	string str36Encr = encryptDecrypt("Number of deals : ");
	string str36Decr = encryptDecrypt(str36Encr);
	string str37Encr = encryptDecrypt("Price of each deal: $1.75 only.");
	string str37Decr = encryptDecrypt(str37Encr);
	string str38Encr = encryptDecrypt("Total price : ");
	string str38Decr = encryptDecrypt(str38Encr);
	string str39Encr = encryptDecrypt("~---------THANK YOU FOR COMING-----------~");
	string str39Decr = encryptDecrypt(str39Encr);
	switch (order) {

	case 1:

		cout << str10Decr << endl;
		cout << str11Decr << no_deals << endl;
		cout << str12Decr << endl;
		cout << str13Decr << "$" << 2 * no_deals << " " << "only." << endl;
		cout << endl;
		cout << str14Decr << endl;
		break;
	case 2:
		cout << str15Decr << endl;
		cout << str16Decr << no_deals << endl;
		cout << str17Decr << endl;
		cout << str18Decr << "$" << 1.5 * no_deals << " " << "only." << endl;
		cout << endl;
		cout << str19Decr << endl;
		break;
	case 3:
		cout << str20Decr << endl;
		cout << str21Decr << no_deals << endl;
		cout << str22Decr << endl;
		cout << str23Decr << "$" << 2.5 * no_deals << " " << "only." << endl;
		cout << endl;
		cout << str24Decr << endl;
		break;
	case 4:
		cout << str25Encr << endl;
		cout << str26Encr << no_deals << endl;
		cout << str27Encr << endl;
		cout << str28Encr << "$" << 1 * no_deals << " " << "only." << endl;
		cout << endl;
		cout << str29Encr << endl;
		break;
	case 5:
		cout << str30Decr << endl;
		cout << str31Decr << no_deals << endl;
		cout << str32Decr << endl;
		cout << str33Decr << "$" << 4.5 * no_deals << " " << "only." << endl;
		cout << endl;
		cout << str34Decr << endl;
		break;
	case 6:
		cout << str35Encr << endl;
		cout << str36Encr << no_deals << endl;
		cout << str37Encr << endl;
		cout << str38Encr << "$" << 1.75 * no_deals << " " << "only." << endl;
		cout << endl;
		cout << str39Encr << endl;
		break;

	} return 0;
}
