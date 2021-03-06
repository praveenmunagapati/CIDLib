//
// FILE NAME: CIDEncode_ThisFacility.cpp
//
// AUTHOR: Dean Roddey
//
// CREATED: 05/26/1999
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
//  This file implements the facility class for this facility.
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
#include    "CIDEncode_.hpp"


// ---------------------------------------------------------------------------
//  Do our standard members macro
// ---------------------------------------------------------------------------
RTTIDecls(TFacCIDEncode,TFacility)




// ---------------------------------------------------------------------------
//   CLASS: TFacCIDEncode
//  PREFIX: fac
// ---------------------------------------------------------------------------

// ---------------------------------------------------------------------------
//  TFacCIDEncode: Constructors and Destructor
// ---------------------------------------------------------------------------
TFacCIDEncode::TFacCIDEncode() :

    TFacility
    (
        L"CIDEncode"
        , tCIDLib::EModTypes::Dll
        , kCIDLib::c4MajVersion
        , kCIDLib::c4MinVersion
        , kCIDLib::c4Revision
        , tCIDLib::EModFlags::HasMsgFile
    )
    , m_pcolMap(0)
{
    //
    //  Create the map collection and fill it in with the standard set of
    //  mappings for the converters that we support and know have obvious
    //  names.
    //
    m_pcolMap = new TMapList(29, new TStringKeyOps(kCIDLib::False), &TKeyValuePair::strExtractKey);


    // Do some variations on UTF-8
    m_pcolMap->objAdd(TKeyValuePair(L"UTF8", L"TUTF8Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"UTF_8", L"TUTF8Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"UTF-8", L"TUTF8Converter"));

    // And some for US ASCII
    m_pcolMap->objAdd(TKeyValuePair(L"USASCII", L"TUSASCIIConverter"));
    m_pcolMap->objAdd(TKeyValuePair(L"US-ASCII", L"TUSASCIIConverter"));
    m_pcolMap->objAdd(TKeyValuePair(L"US_ASCII", L"TUSASCIIConverter"));
    m_pcolMap->objAdd(TKeyValuePair(L"ASCII", L"TUSASCIIConverter"));

    // And some for UTF-16, in both endians
    m_pcolMap->objAdd(TKeyValuePair(L"UTF16LE", L"TUTF16LEConverter"));
    m_pcolMap->objAdd(TKeyValuePair(L"UTF16-LE", L"TUTF16LEConverter"));
    m_pcolMap->objAdd(TKeyValuePair(L"UTF16_LE", L"TUTF16LEConverter"));
    m_pcolMap->objAdd(TKeyValuePair(L"UTF-16LE", L"TUTF16LEConverter"));
    m_pcolMap->objAdd(TKeyValuePair(L"UTF16L", L"TUTF16LEConverter"));
    m_pcolMap->objAdd(TKeyValuePair(L"UTF16-L", L"TUTF16LEConverter"));
    m_pcolMap->objAdd(TKeyValuePair(L"UTF-16L", L"TUTF16LEConverter"));

    m_pcolMap->objAdd(TKeyValuePair(L"UTF16BE", L"TUTF16BEConverter"));
    m_pcolMap->objAdd(TKeyValuePair(L"UTF16-BE", L"TUTF16BEConverter"));
    m_pcolMap->objAdd(TKeyValuePair(L"UTF16_BE", L"TUTF16BEConverter"));
    m_pcolMap->objAdd(TKeyValuePair(L"UTF-16BE", L"TUTF16BEConverter"));
    m_pcolMap->objAdd(TKeyValuePair(L"UTF16B", L"TUTF16BEConverter"));
    m_pcolMap->objAdd(TKeyValuePair(L"UTF16-B", L"TUTF16BEConverter"));
    m_pcolMap->objAdd(TKeyValuePair(L"UTF-16B", L"TUTF16BEConverter"));

    // And some UCS-4, in both endians
    m_pcolMap->objAdd(TKeyValuePair(L"UCS-4B", L"TUCS4BEConverter"));
    m_pcolMap->objAdd(TKeyValuePair(L"UCS-4BE", L"TUCS4BEConverter"));
    m_pcolMap->objAdd(TKeyValuePair(L"UCS4-B", L"TUCS4BEConverter"));
    m_pcolMap->objAdd(TKeyValuePair(L"UCS4-BE", L"TUCS4BEConverter"));
    m_pcolMap->objAdd(TKeyValuePair(L"UCS-4L", L"TUCS4LEConverter"));
    m_pcolMap->objAdd(TKeyValuePair(L"UCS-4LE", L"TUCS4LEConverter"));
    m_pcolMap->objAdd(TKeyValuePair(L"UCS4-L", L"TUCS4LEConverter"));
    m_pcolMap->objAdd(TKeyValuePair(L"UCS4-LE", L"TUCS4LEConverter"));


    // Do the Latin-x encodings
    m_pcolMap->objAdd(TKeyValuePair(L"Latin1", L"TLatin1Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"Latin-1", L"TLatin1Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"ISO-8859-1", L"TLatin1Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"8859-1", L"TLatin1Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"CP819", L"TLatin1Converter"));

    m_pcolMap->objAdd(TKeyValuePair(L"Latin2", L"TLatin2Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"Latin-2", L"TLatin2Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"ISO-8859-2", L"TLatin2Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"8859-2", L"TLatin2Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"CP912", L"TLatin2Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"IBM912", L"TLatin2Converter"));

    m_pcolMap->objAdd(TKeyValuePair(L"Latin3", L"TLatin3Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"Latin-3", L"TLatin3Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"ISO-8859-3", L"TLatin3Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"8859-3", L"TLatin3Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"CP913", L"TLatin3Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"IBM913", L"TLatin3Converter"));

    m_pcolMap->objAdd(TKeyValuePair(L"Latin4", L"TLatin4Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"Latin-4", L"TLatin4Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"ISO-8859-4", L"TLatin4Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"8859-4", L"TLatin4Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"CP914", L"TLatin4Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"IBM914", L"TLatin4Converter"));

    m_pcolMap->objAdd(TKeyValuePair(L"Latin5", L"TLatin5Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"Latin-5", L"TLatin5Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"ISO-8859-5", L"TLatin5Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"8859-5", L"TLatin5Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"CP915", L"TLatin5Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"Cyrillic", L"TLatin5Converter"));

    m_pcolMap->objAdd(TKeyValuePair(L"Latin6", L"TLatin6Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"Latin-6", L"TLatin6Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"ISO-8859-6", L"TLatin6Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"8859-6", L"TLatin6Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"CP1089", L"TLatin6Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"IBM1089", L"TLatin6Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"Arabic", L"TLatin6Converter"));

    // Do the EBCDIC encodings
    m_pcolMap->objAdd(TKeyValuePair(L"EBCDIC-CP-US", L"TEBCDIC037Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"CP037", L"TEBCDIC037Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"CPIBM037", L"TEBCDIC037Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"IBM037", L"TEBCDIC037Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"EBCDIC-CP-CA", L"TEBCDIC037Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"EBCDIC-CP-WT", L"TEBCDIC037Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"EBCDIC-CP-NL", L"TEBCDIC037Converter"));

    // Some miscellaneous IBM encodings
    m_pcolMap->objAdd(TKeyValuePair(L"CP437", L"TPC437Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"IBM437", L"TPC437Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"CP850", L"TPC850Converter"));

    // Some Microsoft encodings
    m_pcolMap->objAdd(TKeyValuePair(L"CP1251", L"TWin1251Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"Windows-1251", L"TWin1251Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"CP1252", L"TWin1252Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"Windows-1252", L"TWin1252Converter"));
    m_pcolMap->objAdd(TKeyValuePair(L"CP1004", L"TWin1252Converter"));

    // Miscellaenous
    m_pcolMap->objAdd(TKeyValuePair(L"ZWaveOEM", L"TZWaveOEMConverter"));

    //
    //  Do some non-endian specific encodings. The best we can do is to
    //  set them up so that they are in the local host endianness.
    //
    #if defined(CIDIB_LITTLEENDIAN)
    m_pcolMap->objAdd(TKeyValuePair(L"UTF-16", L"UTF16LEConverter"));
    m_pcolMap->objAdd(TKeyValuePair(L"UTF_16", L"UTF16LEConverter"));
    m_pcolMap->objAdd(TKeyValuePair(L"UCS-2", L"UTF16LEConverter"));
    m_pcolMap->objAdd(TKeyValuePair(L"UCS_2", L"UTF16LEConverter"));
    m_pcolMap->objAdd(TKeyValuePair(L"UCS2", L"UTF16LEConverter"));
    m_pcolMap->objAdd(TKeyValuePair(L"ISO-10646-UCS-2", L"UTF16LEConverter"));
    m_pcolMap->objAdd(TKeyValuePair(L"CP1200", L"UTF16LEConverter"));
    m_pcolMap->objAdd(TKeyValuePair(L"UCS-4", L"UCS4LEConverter"));
    m_pcolMap->objAdd(TKeyValuePair(L"UCS_4", L"UCS4LEConverter"));
    m_pcolMap->objAdd(TKeyValuePair(L"UCS4", L"UCS4LEConverter"));
    #else
    m_pcolMap->objAdd(TKeyValuePair(L"UTF-16", L"UTF16BEConverter"));
    m_pcolMap->objAdd(TKeyValuePair(L"UTF_16", L"UTF16BEConverter"));
    m_pcolMap->objAdd(TKeyValuePair(L"UCS-2", L"UTF16BEConverter"));
    m_pcolMap->objAdd(TKeyValuePair(L"UCS_2", L"UTF16BEConverter"));
    m_pcolMap->objAdd(TKeyValuePair(L"UCS2", L"UTF16BEConverter"));
    m_pcolMap->objAdd(TKeyValuePair(L"ISO-10646-UCS-2", L"UTF16BEConverter"));
    m_pcolMap->objAdd(TKeyValuePair(L"CP1200", L"UTF16BEConverter"));
    m_pcolMap->objAdd(TKeyValuePair(L"UCS-4", L"UCS4BEConverter"));
    m_pcolMap->objAdd(TKeyValuePair(L"UCS_4", L"UCS4BEConverter"));
    m_pcolMap->objAdd(TKeyValuePair(L"UCS4", L"UCS4BEConverter"));
    #endif

    //
    //  Do a magic one for our tCIDLib::TCh format, which is different per
    //  platform. Its just used for doing embedded L"" type strings.
    //
    m_pcolMap->objAdd(TKeyValuePair(kCIDLib::pszNativeWCEncoding, L"TNativeWCConverter"));
}

TFacCIDEncode::~TFacCIDEncode()
{
    delete m_pcolMap;
}


// ---------------------------------------------------------------------------
//  TFacCIDEncode: Public, non-virtual methods
// ---------------------------------------------------------------------------
tCIDLib::TVoid
TFacCIDEncode::AddMapping(  const   TString&    strName
                            , const TString&    strClass)
{
    //
    //  We need to upper case the name, since we use a hash table it doesn't
    //  have every possible case combination.
    //
    TString strActualName(strName);
    strActualName.ToUpper();

    // Lock the map before we change it
    TMtxLocker lockMap(m_pcolMap->pmtxLock());

    // See if this name exists already. If so, then update it, else add it
    TKeyValuePair* pkvalFound = m_pcolMap->pobjFindByKey(strActualName);
    if (pkvalFound)
        pkvalFound->strValue(strClass);
    else
        m_pcolMap->objAdd(TKeyValuePair(strActualName, strClass));
}


//
//  Given a blob of data (file, received over net, etc...), probe it and see if we
//  can make any sort of determination of the encoding.
//
//  There's not many we can figure out without knowing something about the source
//  contents, but we can check for some obvious stuff.
//
tCIDLib::TBoolean
TFacCIDEncode::bProbeForEncoding(const  TMemBuf&        mbufSrc
                                , const tCIDLib::TCard4 c4Size
                                ,       TString&        strToFill)
{
    tCIDLib::TBoolean bRet = kCIDLib::True;

    // Check for UTF-8 with BOM
    if ((c4Size > 2)
    &&  (mbufSrc.c1At(0) == 0xEF)
    &&  (mbufSrc.c1At(1) == 0xBB)
    &&  (mbufSrc.c1At(2) == 0xBF))
    {
        strToFill = L"UTF-8";
    }
     else if (c4Size > 1)
    {
        // Check for Unicode with BOM
        if (mbufSrc.c2At(0) == 0xFEFF)
        {
            strToFill = L"UTF16-LE";
            bRet = kCIDLib::True;
        }
         else if (mbufSrc.c2At(0) == 0xFFFE)
        {
            strToFill = L"UTF16-BE";
            bRet = kCIDLib::True;
        }
    }
     else
    {
        // Dunno what it is
        bRet = kCIDLib::False;
    }
    return bRet;
}


// Return true if we support the passed encoding
tCIDLib::TBoolean
TFacCIDEncode::bSupportsEncoding(const TString& strToCheck) const
{
    //
    //  We need to upper case the name, since we use a hash table it doesn't
    //  have every possible case combination.
    //
    TString strActualName(strToCheck);
    strActualName.ToUpper();

    TMtxLocker lockMap(m_pcolMap->pmtxLock());
    return m_pcolMap->bKeyExists(strActualName);
}


tCIDLib::TVoid
TFacCIDEncode::GetAllEncodingNames(tCIDLib::TStrCollect& colToFill) const
{
    // Flush the passed collection first
    colToFill.RemoveAll();

    // Lock the map while we do this
    TMtxLocker lockMap(m_pcolMap->pmtxLock());

    //
    //  Get a read cursor for our collection, and iterate through it. For each
    //  one, add a copy of the key string to the caller's collection.
    //
    TMapList::TCursor cursSrc(m_pcolMap);
    for (; cursSrc; ++cursSrc)
        colToFill.objAdd(cursSrc->strKey());
}


//
//  Gen up a new converter and return it. We can return it by pointer, or
//  in a managed pointer for more by value semantics. The latter just calls
//  the former and puts the pointer in a managed pointer object.
//
TTextConverter* TFacCIDEncode::ptcvtMakeNew(const TString& strName) const
{
    //
    //  We need to upper case the name, since we use a hash table it doesn't
    //  have every possible case combination.
    //
    TString strActualName(strName);
    strActualName.ToUpper();

    //
    //  We lock the mapping list until we've gotten our value out of it.
    //  So we use a scope block to prevent locking it longer than required.
    //
    TString strClassName;
    {
        TMtxLocker lockMap(m_pcolMap->pmtxLock());
        TKeyValuePair* pkvalFound = m_pcolMap->pobjFindByKey(strActualName);
        if (pkvalFound)
            strClassName = pkvalFound->strValue();
    }

    // Never found it, so return zero
    if (strClassName.bIsEmpty())
        return 0;

    // Lets try to create an object of this type dymamically and return it
    return ::pobjMakeNewOfClass<TTextConverter>(strClassName);
}

tCIDEncode::TTCvtPtr TFacCIDEncode::mptrMakeNew(const TString& strName) const
{
    return tCIDEncode::TTCvtPtr(ptcvtMakeNew(strName));
}


//
//  Because this class needs to be thread safe, we can't return a reference
//  to the string, we have to return it by value.
//
TString TFacCIDEncode::strBaseNameFor(const TString& strName) const
{
    //
    //  We need to upper case the name, since we use a hash table it doesn't
    //  have every possible case combination.
    //
    TString strActualName(strName);
    strActualName.ToUpper();

    TMtxLocker lockMap(m_pcolMap->pmtxLock());

    TKeyValuePair* pkvalFound = m_pcolMap->pobjFindByKey(strActualName);
    if (!pkvalFound)
    {
        facCIDEncode().ThrowErr
        (
            CID_FILE
            , CID_LINE
            , kEncErrs::errcName_NotFound
            , tCIDLib::ESeverities::Failed
            , tCIDLib::EErrClasses::NotFound
            , strName
        );
    }
    return pkvalFound->strValue();
}


