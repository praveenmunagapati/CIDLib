// ----------------------------------------------------------------------------
//  FILE: TestCIDLib2_IDLGen.cpp
//  DATE: Tue, Feb 26 15:38:53 2019 -0500
//
//  This file was generated by the Charmed Quark CIDIDL compiler. Do not make
//  changes by hand, because they will be lost if the file is regenerated.
// ----------------------------------------------------------------------------

#include "TestCIDLib2.hpp"



static TEnumMap::TEnumValItem aeitemValues_ETest1[5] = 
{
    {  tCIDLib::TInt4(tTestCIDLib2::ETest1::Value1), 0, 0,  { L"", L"", L"", L"Value1", L"ETest1::Value1", L"" } }
  , {  tCIDLib::TInt4(tTestCIDLib2::ETest1::Value2), 0, 0,  { L"", L"", L"", L"Value2", L"ETest1::Value2", L"" } }
  , {  tCIDLib::TInt4(tTestCIDLib2::ETest1::Value3), 0, 0,  { L"", L"", L"", L"Value3", L"ETest1::Value3", L"" } }
  , {  tCIDLib::TInt4(tTestCIDLib2::ETest1::Value4), 0, 0,  { L"", L"", L"", L"Value4", L"ETest1::Value4", L"" } }
  , {  tCIDLib::TInt4(tTestCIDLib2::ETest1::Value5), 0, 0,  { L"", L"", L"", L"Value5", L"ETest1::Value5", L"" } }

};

static TEnumMap emapETest1
(
     L"ETest1"
     , 5
     , kCIDLib::False
     , aeitemValues_ETest1
     , nullptr
     , tCIDLib::TCard4(tTestCIDLib2::ETest1::Count)
);

TTextOutStream& operator<<(TTextOutStream& strmTar, const tTestCIDLib2::ETest1 eVal)
{
    strmTar << emapETest1.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::BaseName, kCIDLib::False);
    return strmTar;
}
tTestCIDLib2::ETest1 operator++(tTestCIDLib2::ETest1& eVal, int)
{
    tTestCIDLib2::ETest1 eTmp = eVal;
    eVal = tTestCIDLib2::ETest1(int(eVal)+1);
    return eTmp;
}

tCIDLib::TBoolean tTestCIDLib2::bIsValidEnum(const tTestCIDLib2::ETest1 eVal)
{
    return emapETest1.bIsValidEnum(tCIDLib::TCard4(eVal));

}
