#pragma once
#include <unordered_map>
#include <iostream>


class TypeSizesMap {
private:
    std::unordered_map<std::string, size_t> typeSizes;

public:
    template<typename T>
    void addType() {
        typeSizes[typeid(T).name()] = sizeof(T);
    }

    void printSizes() const {
        for (const auto& pair : typeSizes) {
            std::cout << pair.first << " size = " << pair.second << " bytes" << std::endl;
        }
    }

    TypeSizesMap() {
        addType<char>();
        addType<int>();
        addType<bool>();
        addType<float>();
        addType<double>();
        addType<long double>();
        addType<long long>();
        addType<int8_t>();
        addType<int16_t>();
        addType<int64_t>();
        addType<int_least8_t>();
        addType<int_least16_t>();
        addType<int_least32_t>();
        addType<int_least64_t>();
        addType<int_fast8_t>();
        addType<int_fast16_t>();
        addType<int_fast32_t>();
        addType<int_fast64_t>();
        addType<intmax_t>();
        addType<uintmax_t>();
        addType<intptr_t>();
        addType<uintptr_t>();
    }
};