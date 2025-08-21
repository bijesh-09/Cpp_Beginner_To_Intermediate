/*
-> Syntax:

    template <class template_dataType1, class template_dataType2, .....>
    OR
    template <typename template_dataType1, typename template_dataType2, .....>

    class max{
        // data member of template type or non-template type
        // for eg: 
        int a; template_dataType1 b; ......

        public:
           // member fn that takes template args and may or may not have template return type

           // other member fns
    };
    
    // for single template args
    class_name <data_type>object;

    // for multiple template args
    class_name <data_type1, data_type2, data_type3, .....>object;
    ------------------------------------------------------------------------------------------------------------------
    where,
        template -> keyword ; used for template declaration
        class -> keyword ; used for generic data_type declaration
        typename -> keyword ; same as class keyword, used for generic data_type declaration
        template_dataType1, template_dataType2, ... -> generic data_type ; replaced by actual data type later on compile time 
*/

#include<iostream>

template<class demo>
class max{
    demo a,b;
    public:
        max(){} 

        max(demo a, demo b){
            this->a = a;
            this->b = b;
        }

        demo getMax(){
            return a>b?a:b;
        }
};

int main(){
    // max <int>o1(2,3);
    max o1(2,3);
    
    std::cout<<"Max = "<<o1.getMax()<<std::endl;
    return 0;
}