#include<iostream>
using namespace std;
int list[8] = { 1, 3 , 7, 11, 13,  17, 33, 37 };
int bainerysearch(int low, int hight,int x){
	if (low> hight){
		return (-1);
	}
	else{
		int min = (low + hight) / 2;
		if (list[min] == x){
			return min;
		}
		if (list[min] > x){
			return bainerysearch(low, min, x);
		}
		if (list[min] < x){
			return bainerysearch(min, hight, x);
		}

	}


}
int main(){
	int x;
	cout << "this app is bainerey search" << endl << "enter your number=";
	cin >> x;


	int m=bainerysearch(0, 7, x);
	if (m == (-1)){
		cout << "vojod nadarad";
	}
	else{ cout << m+1; }





	system("pause");
	return 0;
}