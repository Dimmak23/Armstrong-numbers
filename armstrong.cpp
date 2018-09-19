#include <iostream>

//Function which give you sum of cubes for each digit in
//the input number
long long get_sum_cub(long long k){
    
    long long y = 0, power = k, sum = 0;
    
    for (; k; k/=10){
        y = 1;
        for (long long c = power; c; c /= 10) y *= k % 10;
        sum += y;
    }

    return sum;
}

int main() {
    
    //Declaration and initialization of main parameters
    int k = 0;
    //Range of Armstrong number research
    long long N;
    
    std::cout << "\nWe would like to get all";
    std::cout << " Armstrong numbers bellow ";
    std::cin >> N;
    
    if (!N){
        N = 500;
        std::cout << "\nIncorrect input, range was corrected to 500.\n";
    }

    for (long long i = 0; i < N; i++) {
        //sum = get_sum_cub(i, sum);
        //Only Armstrong numbers will be print
        if ( get_sum_cub(i) == i )
            if (!k) std::cout << '\n' << "#" << ++k << ". " << i;
            else std::cout << ";\n" << "#" << ++k << ". " << i;
    }
    std::cout << '.' << '\n';
    
    std::cout<<"\nThank you for attention!\n";
}