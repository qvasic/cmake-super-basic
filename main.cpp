#include <iostream>
#include <fmt/core.h>

int main()
{
    constexpr auto i = 0;
    std::cout << fmt::format("hell{}", i) << std::endl;
}
