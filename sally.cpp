# include "sally.h"
# include <iostream>

using namespace std;


sally::sally(){

}

sally::sally(int a){
	num = a;
}

// defiining a function --> return_type function_name (input_type input_name)

sally sally::operator+(sally aso){  // aso --> another sally object
	sally brandNewObject;
	brandNewObject.num = num+ aso.num;  // adds curent to aso sally object and stores it into brandnew object
	return brandNewObject;

} 

