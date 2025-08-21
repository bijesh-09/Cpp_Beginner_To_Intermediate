/*
-> Templates are used when u need to to write the same code(function or classes) 
   for different data types.
-> templates declared for function = function templates(generic functions)
-> templates declared for classes = class templates(generic classes)
-> Benifits us by making source code less redundant
-> Compiled code expands the source code and may contain multiple copies of
   same function/class.
-> generic data_type is the data_type declared in template_defn and it can become 
   any data type, depends upon the compile time 

-> Syntax of function template:

    template <class template_type1, class template_type2, .....>
    OR
    template <typename template_dataType1, typename template_dataType2, .....>

    type1 fn_name(template_type1 parameter1, template_type2 parameter2,.... ){
        fn body
    }
    -----------------------------------------------------------------------------------------------------------
    where,
        template -> keyword ; used for template declaration
        class -> keyword ; usedfor generic data_type declaration
        typename -> keyword ; same as class keyword, used for generic data_type declaration
        template_type1, template_type2, ... -> generic data_type ; replaced by actual data type later on compile time 
        parameter1, parameter2,.... -> identifiers( variables, objects, arrays, etc )
*/


#include<iostream>

template <class demo>
demo fn_max(demo x, demo y){
    if (x>y)
    {
        return x;
    }
    else{ return y;};
    
}
int main(){
    int x = 5, y=4;
    std::cout<<"Max number = "<<fn_max(x,y)<<std::endl;//auto template args deduction
    std::cout<<"Max number = "<<fn_max<int>(x,y)<<std::endl;//specifying template args
    char p= 'a', q = 'b';
    std::cout<<"Max character = "<<fn_max(p,q)<<std::endl;//auto template args deduction
    std::cout<<"Max character = "<<fn_max<char>(p,q)<<std::endl;//specifying template args
    return 0;
}