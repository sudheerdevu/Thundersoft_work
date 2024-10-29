#include <vector>
#include <iostream>
int main()
{
	
	std::vector<int> primes{ 2, 3, 5, 7,11 };          
	std::vector<char> vowels { 'a', 'e', 'i', 'o', 'u' }; 
    std::cout<<"size is:"<<sizeof(int)<<"\n"; //size is:4
    std::cout <<&(primes[0])<<std::endl;  //0x145605e60
	return 0;
    
}