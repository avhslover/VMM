//
//  Word.cpp
//  VMM
//
//  Created by Matthew Mikulka on 4/29/19.
//  Copyright © 2019 Matthew Mikulka. All rights reserved.
//

#include "Word.h"


u_int32_t Address::address()
{
    /*
        this simply returns the value from the
        word structure in the header
     */
    return  value_;
}

Word Address::displacement()
{
    Word temp;
    return temp;
}

Word Address::frame()
{
    /*
        don't touch this. i tried modifying it and got a crap load of errors.
        just leave as is please
     */
    Word temp = { (value_>>8) & 255};
    return temp;
}

Word page()
{
    Word temp;
    return temp;
}
