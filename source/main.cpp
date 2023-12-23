// Copyright 2023

#include "mam/utf-8-everywhere/convert.h"

int main()
{
    const std::string name = "Hermann";
    auto wide_str          = mam::utf_8_everywhere::convert(name);
    return 0;
}