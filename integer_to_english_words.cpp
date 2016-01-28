#include<iostream>
using namespace std;

class Solution {
public:
    string digits[20] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    string tens[10] = {"Zero", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    string numberToWords(int num) {
        if(num==0){
            return "Zero";
        }else{
            string result = numToString(num);
            return result.substr(1);
        }
    }
    
    string numToString(int num){
        string result;
        if(num>=1000000000){
            return numToString(num/1000000000)+" Billion"+numToString(num%1000000000);
        }else if(num>=1000000){
            return numToString(num/1000000)+" Million"+numToString(num%1000000);
        }else if(num>=1000){
            return numToString(num/1000)+ " Thousand"+numToString(num%1000);
        }else if(num>=100){
            return numToString(num/100)+" Hundred"+numToString(num%100);
        }else if(num>=20){
            return " "+tens[num/10]+numToString(num%10);
        }else if(num>=1){
            return " "+digits[num];
        }
        return "";
    }
     
};

int main(){
  Solution solution;
  cout<<solution.numberToWords(13412384979)<<'\n';
}
