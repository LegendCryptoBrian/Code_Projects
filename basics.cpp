#include <iostream>
#include <iomanip>

int main(){
    /*
    //curly braces{}, parenthesis(), and none can work for ints
    //this should be zero
   int lion_count {};
   int dog_count {10};
   int cat_count {15};
   int domesticated_animals {dog_count + cat_count};
   

   std::cout << "domesticated animals : " << domesticated_animals << std::endl;
   */
  /*
   int lion_count (0);
   int dog_count (20);
   int cat_count (15);
   int domesticated_animals (dog_count + cat_count);
   

   std::cout << "domesticated animals : " << domesticated_animals << std::endl;
   */
  ///*
  /*
  short ints are 2 bytes
  long ints are 4-8 bytes
  signed ints can be negative 
  unsigned ints can only be positive
  
  */
 /*
     short short_var {-32768} ; //  2 Bytes 
    short int short_int {455} ; // 
    signed short signed_short {122}; //
    signed short int signed_short_int {-456}; // 
    unsigned short int unsigned_short_int {456};
    
    int int_var {55} ; // 4 bytes
    signed signed_var {66};//
    signed int signed_int {77};//
    unsigned int unsigned_int{77};
    
    long long_var {88}; // 4 OR 8 Bytes
    long int long_int {33};
    signed long signed_long {44};
    signed long int signed_long_int {44};
    unsigned long int unsigned_long_int{44};

    long long long_long {888};// 8 Bytes
    long long int long_long_int {999};
    signed long long signed_long_long {444};
    signed long long int signed_long_long_int{1234};
    unsigned long long int unsigned_long_long_int{1234};


        std::cout << "Short variable : " << short_var<<  " , size : "
        << sizeof (short) << " bytes" << std::endl;

        std::cout << "Short Int : " << short_int << " , size : "
        << sizeof (short int) << " bytes" << std::endl;

        std::cout << "Signed short : " << signed_short
        << " , size : " << sizeof (signed short) << " bytes" << std::endl;

        std::cout << "Signed short int :  " << signed_short_int
        <<  " , size : " << sizeof (signed short int) << " bytes" << std::endl;
        
        std::cout << "unsigned short int :  " << unsigned_short_int
        <<  " , size : " << sizeof (unsigned short int) << " bytes" << std::endl;
        
        std::cout << "---------------------" << std::endl;




    std::cout << "Int variable :  " << int_var <<" , size : "
        << sizeof (int) << " bytes" << std::endl;

    std::cout << "Signed variable " << signed_var <<" , size : "
        << sizeof (signed) << " bytes" << std::endl;

    std::cout << "Signed int :  " << signed_int <<" , size : "
        << sizeof (signed int) << " bytes" << std::endl;
        
    std::cout << "unsigned int :  " << unsigned_int <<" , size : "
        << sizeof (unsigned int) << " bytes" << std::endl;
        
    std::cout << "---------------------" << std::endl;


    std::cout << "Long variable :  " << long_var << " , size : "
        << sizeof (long) << " bytes" <<std::endl;

    std::cout << "Long int :  " << long_int <<" , size : "
        << sizeof (long int) << " bytes" << std::endl;

    std::cout << "Signed long :  " << signed_long <<" , size : "
        << sizeof (signed long) << " bytes" << std::endl;

    std::cout << "Signed long int : " << signed_long_int <<" , size : "
        << sizeof (signed long int) << " bytes" << std::endl;
        
    std::cout << "unsigned long int : " << unsigned_long_int <<" , size : "
        << sizeof (unsigned long int) << " bytes" << std::endl;
        
    std::cout << "---------------------" << std::endl;



    std::cout << "Long long : " << long_long <<" , size : "
        << sizeof (long long) << " bytes" << std::endl;

    std::cout << "Long long int : " << long_long_int <<" , size : "
        << sizeof (long long int) << " bytes" << std::endl;

    std::cout << "Signed long long : " << signed_long_long <<" , size : "
        << sizeof (signed long long) << " bytes" <<std::endl;
        
    std::cout << "Signed long long int : " << signed_long_long_int <<" , size : "
        << sizeof (signed long long int) << " bytes" << std::endl;
        
    std::cout << "unsigned long long int : " << unsigned_long_long_int <<" , size : "
        << sizeof (unsigned long long int) << " bytes" << std::endl;
        
    std::cout << "---------------------" << std::endl;
    */
   /*

   //Declare and initialize the variables
    float number1 {1.12345678901234567890f}; // Precision : 7
    double number2 {1.12345678901234567890}; // Precision : 15
    long double number3  {1.12345678901234567890L};
    
    //Print out the sizes
    std::cout << "sizeof float : " << sizeof(float) << std::endl;
    std::cout << "sizeof double : " << sizeof(double) << std::endl;
    std::cout << "sizeof long double : " << sizeof(long double) << std::endl;



    //Precision
    std::cout << std::setprecision(20); // Control the precision from std::cout.
    std::cout << "number1 is : " << number1 << std::endl; //7 digits
    std::cout << "number2 is : " << number2 << std::endl; // 15'ish digits
    std::cout << "number3 is : " << number3 << std::endl; // 15+ digits


    //Float problems : The precision is usually too limited
    //for a lot of applications
    float number4 = 192400023.0f;               // Error : narrowing conversion

    std::cout << "number4 : " << number4 << std::endl;
    std::cout << "-------------------------" << std::endl;
    
    double number5 {192400023};
    double number6 {1.92400023e8};
    double number7 {1.924e8};           // Can ommit the lower 00023
                                        // for simplicity if our application allows that.
    double number8 {0.00000000003498};
    double number9 {3.498e-11}; // multiply with 10 exp(-11)
    
    std::cout << "number5 is : " << number5 << std::endl;
    std::cout << "number6 is : " << number6 << std::endl;
    std::cout << "number7 is : " << number7 << std::endl;
    std::cout << "number8 is : " << number8 << std::endl;
    std::cout << "number9 is : " << number9 << std::endl;



    //Infinity and Nan
    std::cout << std::endl;
    std::cout << "Infinity and NaN" << std::endl;
    
    double number10{ -5.6 };
    double number11{};//Initialized to 0
    double number12{};  //Initialized to 0

    //Infinity
    double result { number10 / number11 };
    
    
    std::cout << number10 << "/" << number11 << "  yields " << result << std::endl;
    std::cout << result << " + " << number10 << " yields " << result + number10 << std::endl;
    
    //NaN
    result = number11 / number12;
    
    
    std::cout << number11 << "/" << number12 << " = " << result << std::endl;
    */
   /*
    bool red_light {1};
    bool green_light{0};
    
    if(red_light == true){
        std::cout << "Stop!" << std::endl;
    }else{
        std::cout << "Go through!" << std::endl;
    }

    if(green_light){
        std::cout << "The light is green!" << std::endl;
    }else{
        std::cout << "The light is NOT green!" << std::endl;
    }

    //sizeof()
    std::cout << "sizeof(bool) : " << sizeof(bool) << std::endl;


    //Printing out a bool
    //1 -->> true
    //0 -->> false
    std::cout << std::endl;
    std::cout << "red_light : " << red_light << std::endl;
    std::cout << "green_light : " << green_light << std::endl;

    std::cout << std::boolalpha;
    std::cout << "red_light : " << red_light << std::endl;
    std::cout << "green_light : " << green_light << std::endl;
    */
   /*
    char character1 {'a'};
    char character2 {'r'};
    char character3 {'r'};
    char character4 {'o'};
    char character5 {'w'};
    
    std::cout << character1 << std::endl;
    std::cout << character2 << std::endl;
    std::cout << character3 << std::endl;
    std::cout << character4 << std::endl;
    std::cout << character5 << std::endl;

    //One byte in memory : 2^8 = 256 different values (0 ~ 255)
    std::cout << std::endl;
    
    char value = 65 ; // ASCII character code for 'A'
    std::cout << "value : " << value << std::endl; // A
    std::cout << "value(int) : " << static_cast<int>(value) << std::endl; 
*/
/*
    auto var1 {12};
    auto var2 {13.0};
    auto var3 {14.0f};
    auto var4 {15.0l};
    auto var5 {'e'};
    
    //int modifier suffixes
    auto var6 { 123u}; // unsigned
    auto var7 { 123ul}; //unsigned long
    auto var8 { 123ll}; // long long

    std::cout << "var1 occupies : " << sizeof(var1) << " bytes" << std::endl;
    std::cout << "var2 occupies : " << sizeof(var2) << " bytes" << std::endl;
    std::cout << "var3 occupies : " << sizeof(var3) << " bytes" << std::endl;
    std::cout << "var4 occupies : " << sizeof(var4) << " bytes" << std::endl;
    std::cout << "var5 occupies : " << sizeof(var5) << " bytes" << std::endl;
    std::cout << "var6 occupies : " << sizeof(var6) << " bytes" << std::endl;
    std::cout << "var7 occupies : " << sizeof(var7) << " bytes" << std::endl;
    std::cout << "var8 occupies : " << sizeof(var8) << " bytes" << std::endl;
    */
    int var1{123}; // Declare and initialize
    std::cout << "var1 : "  << var1 << std::endl;
    
    var1 = 55; // Assign
    std::cout << "var1 : "  << var1 << std::endl;
    
    std::cout << std::endl;

    std::cout << "----------------" << std::endl;

    double var2 {44.55}; // Declare and initialize
    std::cout << "var2 : " << var2 << std::endl;
    
    var2 = 99.99; // Assign
    std::cout << "var2 : " << var2 << std::endl;
    
    std::cout << std::endl;

    std::cout << "----------------" << std::endl;

    std::cout << std::endl;
    bool state{false}; // Declare and initialize
    std::cout << std::boolalpha;
    std::cout << "state : " << state << std::endl;
    
    state = true; // Assign
    
    std::cout << "state : " << state << std::endl;


    //Auto type deduction
    //Careful about auto assignments
    auto var3 {333u}; // Declare and initialize with type deduction
    
    var3 = -22; // Assign negative number. DANGER!
    
    std::cout << "var3 : " << var3 << std::endl;

    return 0;
}           