#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
		vector <string> yourCart;
	while(true){

	int option;
	string item;
	int key=-1;

	cout <<"Chooose an action\n 1.Add to cart\n 2.View your cart\n 3.Remove from cart\n 4.Modify your cart \n 5.Exit\n"; 
	cin >>option;
	switch(option){
		case 1:
			cout <<"Enter item to add to your cart";
			cin >> item;
			yourCart.push_back(item);
			break;
			
		case 2:
			if(yourCart.empty()){
				cout <<"There is nothing in your cart";
			}
			else{
			for(int j = 0; j < yourCart.size(); j++) {
    cout << yourCart[j] << "\n";
}
			}
			break;
			
		case 3:
		    cout << "Enter the item you wanna remove";
		    cin >>item;
		for( int i=0; i< yourCart.size(); i++){
			if(item==yourCart[i]){
				key=i;
				
			}
		}
		if(key!=-1){
			yourCart.erase(yourCart.begin()+key);
		}
		else {
			cout <<"You do not have that item in your cart";
		}	
			
		break;
		case 5:
			cout <<"Thank you for using our shopping cart system";
			return 0;
			
		break;
		default:
			cout <<"Invalid option";
			break;
			
	}
}

}
