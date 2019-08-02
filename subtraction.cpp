#include <bits/stdc++.h>
#include <cstring> 
using namespace std; 
int main(){
	string num1,num2,sum;
	cin>>num1>>num2;
	int n1 = num1.size();
	int n2 = num2.size();
	int carry = 0; 
	if(n2>n1){
		string temp = num1;
		num1 = num2;
		num2 = temp;
		int t;
		t = n1;
		n1 = n2;
		n2 = t;
	}
	for(int i=n1-1;i>=0;i--){
		if(i>=n1-n2){       
            if(num1[i]-num2[i+n2-n1]+carry<0){
			    sum += to_string(10+(num1[i]-num2[i+n2-n1]+carry));
			    carry = -1;
            }
            else{
                sum += to_string((num1[i]-num2[i+n2-n1]+carry));
                carry =0;
            }
		}
		else{
			sum+= to_string(num1[i]-'0');
		}
			         }

	string reversed(sum);
	reverse(reversed.begin(), reversed.end());
	cout<<reversed;	
	return 0;
}