#include <iostream>
#include <iomanip>

struct Notebook{
    size_t id;
    double weight;
    bool is_broken;
    double price;
};

int main() {
    int count;
    std::cin >> count;
    Notebook *struct_array = new Notebook[count];
    for(int i = 0; i < count; i++){
        struct_array[i].id = i;
        std::cin >> struct_array[i].weight >> struct_array[i].is_broken >> struct_array[i].price;
    }
    for (int i = 0; i < count; i++){
        std::cout << std::boolalpha;
        std::cout << std::setw(5) << "{\"id\": " << struct_array[i].id << ","
                  << std::setw(20) << "\"weight\": " << struct_array[i].weight << ","
                  << std::setw(20) << "\"is_broken:\" " << struct_array[i].is_broken << ","
                  << std::setw(20) << "\"price\": " << struct_array[i].price << "}" << std::endl;
    }
    delete[] struct_array;
    return 0;
}
