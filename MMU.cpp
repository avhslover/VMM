//
//  MMU.cpp
//
//

#include "MMU.h"
#include <iostream>


/*MMU MMU::instance()
{
    pageAccessCounts_ = 0;
    pageInFaults_ = 0;
    tlbAccessCount_ = 0;
    tlbFaults_ = 0;
    return *this; // dummy return
}*/

MMU::MMU()
{
    pageAccessCounts_ = 0;
    pageInFaults_ = 0;
    tlbAccessCount_ = 0;
    tlbFaults_ = 0;
    tlb_.numEntries = 0;
}

void MMU::clearTLB()
{
    tlb_.numEntries = 0;
}

int MMU::pageAccesses()
{
    return pageAccessCounts_;
}

int MMU::pageFaults()
{
    return pageInFaults_;
}

int MMU::TLBAccesses()
{
    return tlbAccessCount_;
}

int MMU::TLBFaults()
{
    return tlbFaults_;
}

//template <typename t>
void MMU::read(const Address &addr)
{
    cout << "test\n";
}

MMU::~MMU(){}

















