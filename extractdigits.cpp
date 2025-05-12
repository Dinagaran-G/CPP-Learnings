#include <iostream>
using namespace std;
void Extractsdigits(int digits[], int& num_digits)
{
   //AH90GH13H
   string str;
   cout << "Enter the string";
   cin >> str;
   num_digits = 0;
   for(int i =0; i<str.length(); i++)
   {
       if(isdigit(str[i]))
       {
           digits[num_digits] = str[i]-'0';
           num_digits++;
       }
   }
}
int adddigits(int digits[],int num_digits)
{
    int sum = 0;   
    for(int i =0 ; i < num_digits; i++)
    {
        sum = sum + digits[i];
    }
    return sum;
}
int Reducetosingledigit(int num)
{
    while(num >= 10)
    {
        int tempsum = 0;
        while(num > 0)
        {
            tempsum += num%10;
            num /= 10;
        }
        num = tempsum;
    }
    return num;
}
int main()
{
    int digits[100];
    int num_digits;
    Extractsdigits(digits,num_digits);
    if(num_digits > 0)
    {
      int sum = adddigits(digits,num_digits);
      cout << "sum of the extracted digits is: " << sum << endl;
      int singledigit = Reducetosingledigit(sum);
      cout << "Reduced to single digit is: " << singledigit << endl;
      if((singledigit == 3) || (singledigit == 6) || (singledigit == 9))
      {
           cout << "its Strong" << endl;
      }
      else
      {
        cout << "its weak";
      }
    }
    else
    {
        cout << "No Digits in the string";
    }
    return 0;
}