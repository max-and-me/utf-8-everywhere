// Copyright 2023

#include "mam/string-convert/string-convert.h"

int main()
{
    const std::string name = "Hermann";
    auto wide_str          = mam::str_conv::string_to_wide_string(name);
    return 0;
}