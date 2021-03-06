//
// FILE NAME: CIDImgFact.cpp
//
// AUTHOR: Dean Roddey
//
// CREATED: 03/02/2013
//
// COPYRIGHT: Charmed Quark Systems, Ltd @ 2019
//
//  This software is copyrighted by 'Charmed Quark Systems, Ltd' and
//  the author (Dean Roddey.) It is licensed under the MIT Open Source
//  license:
//
//  https://opensource.org/licenses/MIT
//
// DESCRIPTION:
//
//  This is the main file of the facility. It just provides the lazy
//  evaluation method for the facilty object.
//
// CAVEATS/GOTCHAS:
//
// LOG:
//
//  $_CIDLib_Log_$
//

// ---------------------------------------------------------------------------
//  Includes
// ---------------------------------------------------------------------------
#include    "CIDImgFact_.hpp"


//
//  This is the lazy eval method for the facility object.
//
TFacCIDImgFact& facCIDImgFact()
{
    static TFacCIDImgFact* pfacCIDImgFact = nullptr;
    if (!pfacCIDImgFact)
    {
        TBaseLock lockInit;
        if (!pfacCIDImgFact)
            pfacCIDImgFact = new TFacCIDImgFact;
    }
    return *pfacCIDImgFact;
}


