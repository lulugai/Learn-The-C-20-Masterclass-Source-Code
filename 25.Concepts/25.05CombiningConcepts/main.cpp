#include <iostream>
#include <concepts>


template <typename T>
concept TinyType = requires ( T t){
	sizeof(T) <=4; // Simple requirement
	requires sizeof(T) <= 4; // Nested requirement
};


template <typename T>
//requires std::integral<T> || std::floating_point<T> // OR operator
//requires std::integral<T> && TinyType<T>
requires std::integral<T> && requires ( T t){
	sizeof(T) <=4; // Simple requirement
	requires sizeof(T) <= 4; // Nested requirement
}
T add(T a, T b){
    return a + b;
}



int main(){

    long int x{7};
    long int y{5};
    std::cout << "sizeof(x): " << sizeof(x) << std::endl;
    add(x,y);

   
    return 0;
}