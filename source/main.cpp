// Copyright Max & Me 2023

#include "utf_8_everywhere/convert.h"

int main()
{
    const std::string name = "Hermann";
    auto wide_str          = utf_8_everywhere::convert(name);
    return 0;
}