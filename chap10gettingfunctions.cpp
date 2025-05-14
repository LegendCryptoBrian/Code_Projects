#include <iostream>
#include <cstring>
#if(0)
void max_str(const std::string& input1, const std::string input2,
			std::string& output)
{
	if(input1 > input2){
		output = input1;
	}else{
		output = input2;
	}
}

void max_int( int input1, int input2,int& output){
	if(input1 > input2){
		output = input1;
	}else{
		output = input2;
	}
}

void max_double( double input1, double input2,double* output){
	if(input1 > input2){
		*output = input1;
	}else{
		*output = input2;
	}
}
#endif
#if(1)
int sum ( int a , int b){
    int result = a + b;
    std::cout << "In : &result(int) :  " << &result << std::endl;
 	return result;
}

std::string add_strings(std::string str1, std::string str2){
    std::string result =  str1 + str2;
    std::cout << "In : &result(std::string) :  " << &result << std::endl;
    return result;
}
#endif
int main()
{
    #if(0)
    std::string out_str;
	std::string string1("Cassablanca");
	std::string string2("Bellevue");

	max_str(string1,string2,out_str);
	std::cout << "max_str : " << out_str << std::endl;
    int out_int;
    int in1{45};
    int in2{723};
    max_int(in1,in2,out_int);
    std::cout << "max_int : " << out_int << std::endl;
    double out_double;
   double in_double1{45.8};
   double in_double2{76.9};
   max_double(in_double1,in_double2,&out_double);
   std::cout << "max_double : " << out_double << std::endl;
    #endif
    #if(1)
    
    int x{15};
    int y{9};
    int result = sum(x,y);
    std::cout << "Out : &result(int) :  " << &result << std::endl;
    std::cout << "result : " << result << std::endl;
 

    std::string in_str1{"Hello"};
    std::string in_str2{" World!"};
    std::string result_str = add_strings(in_str1,in_str2);
    std::cout << "Out : &result_str(std::string) :  " << &result_str << std::endl;
    std::cout << "result_str : " << result_str << std::endl;
    #endif
    #if(1)
    #endif
    #if(1)
    #endif
    #if(1)
    #endif
    #if(1)
    #endif
    #if(1)
    #endif
    #if(1)
    #endif
    #if(1)
    #endif
    #if(1)
    #endif
    #if(1)
    #endif
    #if(1)
    #endif
    #if(1)
    #endif
    return 0;
}