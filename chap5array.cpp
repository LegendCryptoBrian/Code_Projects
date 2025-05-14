#include <iostream>



int main(){
    /*
    //Declare an array of ints
   // int scores [10]; // Junk data

    //Read data

   // std:: cout << " scores [0] : " << scores[0] << std::endl;
   // std:: cout << " scores [1] : " << scores[1] << std::endl;
   

    //Read with a loop
    /*
    for( size_t i {0} ; i < 10 ; ++i){
        std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
    }
    */
  


   /*
    scores[0] = 20;
    scores[1] = 21;
    scores[2] = 22;

    //Print the data out
    for( size_t i {0} ; i < 10 ; ++i){
        std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
    }
    */


   //Write data in a loop
   /*
   for(size_t i{0}; i < 10 ; ++i){
       scores[i] = i * 10;
   }

    //Print the data out
    for( size_t i {0} ; i < 10 ; ++i){
        std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
    }
    */

    //Declare and initialize at the same time
    /*
	double salaries[5] {12.7, 7.5, 13.2, 8.1, 9.3};
	
	for(size_t i{0}; i < 5; ++i){
		std::cout << "salary[" << i << "] : " << salaries[i] << std::endl;
	}
    */
  

    //If you don't initialize all the elements, those you leave out
    //are initialized to 0
    /*
    int families[5] {12, 7, 5};
	
	for(size_t i{0}; i < 5; ++i){
		std::cout << "families[" << i << "] : " << families[i] << std::endl;
	}
    */
    

   	//Omit the size of the array at declaration
   /*
    int class_sizes[] {10,12,15,11,18,17,23,56}; 
	
	// Will print this with a range based for loop
	for(auto value : class_sizes){
		std::cout << "value : " << value << std::endl;
	}
    */
    


   // Read only arrays
   /*
   const int birds[] {10,12,15,11,18,17,23,56}; 
   birds[2] = 8;


    //Sum up scores array, store result in sum
 
    int scores [] {2,5,8,2,5,6,9};
    int sum {0};
    
    for( int element : scores){
        sum += element;
    }
    std::cout << "Score sum : " << sum << std::endl;
  
   
  
    int scores [] {1,2,5};

   
    int count { std::size(scores)}; // std::size( C++17)

    std::cout << "sizeof(scores) : " << sizeof(scores) << std::endl;
    std::cout << "sizeof(scores[0]) : " << sizeof(scores[0]) << std::endl;
    std::cout << "count : " << count << std::endl;


    int count {sizeof(scores)/sizeof(scores[0])};


    for(size_t i {0} ; i < count ; ++i){
        std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
    }
 

   //Range based for loop
    for ( auto i : scores){
            std::cout << "value  : " << i << std::endl;       
    }
    
    */
   /*
   char message [5] {'H','e','l','l','o'};

   std::cout << "message : ";
   for( auto c : message){
        std::cout << c ;
   }
   */
  char message [5]  {"Hello"};
    //int data[5] {1,2,3,3,3};

    //std::cout << "data : " << data << std::endl;
    
  
    //Print out the array through looping
    /*
    std::cout << "message : ";
    for( auto c : message){
        std::cout << c ;
    }
    std::cout << std::endl;
    */

    
   /*
    //Change characters in our array
    message[1] = 'a';

    //Print out the array through looping
    std::cout << "message : ";
    for( auto c : message){
        std::cout << c ;
    }
    std::cout << std::endl;
    */

   
   
    // Will probably print garbage after your char array
    /*
    std::cout << "message : " << message << std::endl;
    */
   

 
    //If a character array is null terminated, it's called as C-String
    /*
    char message1 [] {'H','e','l','l','o','\0'};
    std::cout << "message1 : " << message1 << std::endl;
    std::cout << "sizeof(message1) : " << sizeof(message1) << std::endl;
    */

  
   /*
    char message2 [6] {'H','e','l','l','o'};
    std::cout << "message2 : " << message2 << std::endl;
    std::cout << "sizeof(message2) : " << sizeof(message2) << std::endl;

    char message3 [] {'H','e','l','l','o'}; // This is not a c string ,
											//as there is not null character
    std::cout << "message3 : " << message3 << std::endl;
    std::cout << "sizeof(message3) : " << sizeof(message3) << std::endl;
    */

    

    //String literal
    /*
    char message4 [] {"Hello"};
    std::cout << "message4 : " << message4 << std::endl;
    std::cout << "sizeof(message4) : " << sizeof(message4) << std::endl;
    */


   /*
    //Can't safely print out arrays other than those of characters
    int numbers [] {1,2,3,4,5};
    std::cout << "numbers :  " << numbers << std::endl;
    */
   int numbers[] {1,2,3,4,5,6,7,8,9,0};
	
	//Read beyond bounds : Will read garbage or crash your program
	//std::cout << "numbers[12] : " << numbers[12] << std::endl;

	//Write beyond bounds. The compiler allows it. But you don't own 
	//the memory at index 12, so other programs may modify it and your
	//program may read bogus data at a later time. Or you can even
	//corrupt data used by other parts of your ptogram

	numbers[129] = 1000;
	std::cout << "numbers[129] : " << numbers[129] << std::endl;

    std::cout << "Program ending...." << std::endl;
    return 0;
}