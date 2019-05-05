//
//  MMU.hpp
//  
//
//

#ifndef MMU_hpp
#define MMU_hpp

#include <stdio.h>
#include "Word.h"

using namespace std;

struct TLB
{
    int pageNum[16] = {0};
    int FrameNumber[16] = {0};
    int numEntries;
};


class MMU
{
public:
    MMU();//=delete;
    MMU(MMU&); // = delete;
    //MMU instance();
    void clearTLB();
    int pageAccesses();
    int pageFaults();
    int TLBAccesses();
    int TLBFaults();
    void read(const Address &addr);

    ~MMU();

private:
    int pageAccessCounts_;
    int pageInFaults_;
    int tlbAccessCount_;
    int tlbFaults_;
    TLB tlb_;
    
    struct PageFault
    {
        PageFault();
        Word pageNumber_;
    };
};



#endif /* MMU_hpp */
