/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_FWaveTest_init = false;
#include "/home/vmuser/Tsunami/SWE1D/src/unit tests/FWaveTest.h"

static FWaveTest suite_FWaveTest;

static CxxTest::List Tests_FWaveTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_FWaveTest( "FWaveTest.h", 15, "FWaveTest", suite_FWaveTest, Tests_FWaveTest );

static class TestDescription_suite_FWaveTest_testSameHeightNoSpeed : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FWaveTest_testSameHeightNoSpeed() : CxxTest::RealTestDescription( Tests_FWaveTest, suiteDescription_FWaveTest, 43, "testSameHeightNoSpeed" ) {}
 void runTest() { suite_FWaveTest.testSameHeightNoSpeed(); }
} testDescription_suite_FWaveTest_testSameHeightNoSpeed;

static class TestDescription_suite_FWaveTest_testSameHeightLeftSpeed : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FWaveTest_testSameHeightLeftSpeed() : CxxTest::RealTestDescription( Tests_FWaveTest, suiteDescription_FWaveTest, 68, "testSameHeightLeftSpeed" ) {}
 void runTest() { suite_FWaveTest.testSameHeightLeftSpeed(); }
} testDescription_suite_FWaveTest_testSameHeightLeftSpeed;

static class TestDescription_suite_FWaveTest_testSameHeightRightSpeed : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FWaveTest_testSameHeightRightSpeed() : CxxTest::RealTestDescription( Tests_FWaveTest, suiteDescription_FWaveTest, 95, "testSameHeightRightSpeed" ) {}
 void runTest() { suite_FWaveTest.testSameHeightRightSpeed(); }
} testDescription_suite_FWaveTest_testSameHeightRightSpeed;

static class TestDescription_suite_FWaveTest_testSameHeightLeftRightSpeed : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FWaveTest_testSameHeightLeftRightSpeed() : CxxTest::RealTestDescription( Tests_FWaveTest, suiteDescription_FWaveTest, 122, "testSameHeightLeftRightSpeed" ) {}
 void runTest() { suite_FWaveTest.testSameHeightLeftRightSpeed(); }
} testDescription_suite_FWaveTest_testSameHeightLeftRightSpeed;

static class TestDescription_suite_FWaveTest_testSameHeightRightLeftSpeed : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FWaveTest_testSameHeightRightLeftSpeed() : CxxTest::RealTestDescription( Tests_FWaveTest, suiteDescription_FWaveTest, 149, "testSameHeightRightLeftSpeed" ) {}
 void runTest() { suite_FWaveTest.testSameHeightRightLeftSpeed(); }
} testDescription_suite_FWaveTest_testSameHeightRightLeftSpeed;

static class TestDescription_suite_FWaveTest_testDecreasingHeightNoSpeed : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FWaveTest_testDecreasingHeightNoSpeed() : CxxTest::RealTestDescription( Tests_FWaveTest, suiteDescription_FWaveTest, 176, "testDecreasingHeightNoSpeed" ) {}
 void runTest() { suite_FWaveTest.testDecreasingHeightNoSpeed(); }
} testDescription_suite_FWaveTest_testDecreasingHeightNoSpeed;

static class TestDescription_suite_FWaveTest_testDecreasingHeightLeftSpeed : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FWaveTest_testDecreasingHeightLeftSpeed() : CxxTest::RealTestDescription( Tests_FWaveTest, suiteDescription_FWaveTest, 204, "testDecreasingHeightLeftSpeed" ) {}
 void runTest() { suite_FWaveTest.testDecreasingHeightLeftSpeed(); }
} testDescription_suite_FWaveTest_testDecreasingHeightLeftSpeed;

static class TestDescription_suite_FWaveTest_testDecreasingHeightRightSpeed : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FWaveTest_testDecreasingHeightRightSpeed() : CxxTest::RealTestDescription( Tests_FWaveTest, suiteDescription_FWaveTest, 232, "testDecreasingHeightRightSpeed" ) {}
 void runTest() { suite_FWaveTest.testDecreasingHeightRightSpeed(); }
} testDescription_suite_FWaveTest_testDecreasingHeightRightSpeed;

static class TestDescription_suite_FWaveTest_testDecreasingHeightLeftRightSpeed : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FWaveTest_testDecreasingHeightLeftRightSpeed() : CxxTest::RealTestDescription( Tests_FWaveTest, suiteDescription_FWaveTest, 260, "testDecreasingHeightLeftRightSpeed" ) {}
 void runTest() { suite_FWaveTest.testDecreasingHeightLeftRightSpeed(); }
} testDescription_suite_FWaveTest_testDecreasingHeightLeftRightSpeed;

static class TestDescription_suite_FWaveTest_testDecreasingHeightRightLeftSpeed : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FWaveTest_testDecreasingHeightRightLeftSpeed() : CxxTest::RealTestDescription( Tests_FWaveTest, suiteDescription_FWaveTest, 288, "testDecreasingHeightRightLeftSpeed" ) {}
 void runTest() { suite_FWaveTest.testDecreasingHeightRightLeftSpeed(); }
} testDescription_suite_FWaveTest_testDecreasingHeightRightLeftSpeed;

static class TestDescription_suite_FWaveTest_testIncreasingHeightNoSpeed : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FWaveTest_testIncreasingHeightNoSpeed() : CxxTest::RealTestDescription( Tests_FWaveTest, suiteDescription_FWaveTest, 316, "testIncreasingHeightNoSpeed" ) {}
 void runTest() { suite_FWaveTest.testIncreasingHeightNoSpeed(); }
} testDescription_suite_FWaveTest_testIncreasingHeightNoSpeed;

static class TestDescription_suite_FWaveTest_testIncreasingHeightLeftSpeed : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FWaveTest_testIncreasingHeightLeftSpeed() : CxxTest::RealTestDescription( Tests_FWaveTest, suiteDescription_FWaveTest, 344, "testIncreasingHeightLeftSpeed" ) {}
 void runTest() { suite_FWaveTest.testIncreasingHeightLeftSpeed(); }
} testDescription_suite_FWaveTest_testIncreasingHeightLeftSpeed;

static class TestDescription_suite_FWaveTest_testIncreasingHeightRightSpeed : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FWaveTest_testIncreasingHeightRightSpeed() : CxxTest::RealTestDescription( Tests_FWaveTest, suiteDescription_FWaveTest, 372, "testIncreasingHeightRightSpeed" ) {}
 void runTest() { suite_FWaveTest.testIncreasingHeightRightSpeed(); }
} testDescription_suite_FWaveTest_testIncreasingHeightRightSpeed;

static class TestDescription_suite_FWaveTest_testIncreasingHeightLeftRightSpeed : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FWaveTest_testIncreasingHeightLeftRightSpeed() : CxxTest::RealTestDescription( Tests_FWaveTest, suiteDescription_FWaveTest, 400, "testIncreasingHeightLeftRightSpeed" ) {}
 void runTest() { suite_FWaveTest.testIncreasingHeightLeftRightSpeed(); }
} testDescription_suite_FWaveTest_testIncreasingHeightLeftRightSpeed;

static class TestDescription_suite_FWaveTest_testIncreasingHeightRightLeftSpeed : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FWaveTest_testIncreasingHeightRightLeftSpeed() : CxxTest::RealTestDescription( Tests_FWaveTest, suiteDescription_FWaveTest, 428, "testIncreasingHeightRightLeftSpeed" ) {}
 void runTest() { suite_FWaveTest.testIncreasingHeightRightLeftSpeed(); }
} testDescription_suite_FWaveTest_testIncreasingHeightRightLeftSpeed;

static class TestDescription_suite_FWaveTest_testSameBathymethrySameHeightSpeedRightLeft : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FWaveTest_testSameBathymethrySameHeightSpeedRightLeft() : CxxTest::RealTestDescription( Tests_FWaveTest, suiteDescription_FWaveTest, 456, "testSameBathymethrySameHeightSpeedRightLeft" ) {}
 void runTest() { suite_FWaveTest.testSameBathymethrySameHeightSpeedRightLeft(); }
} testDescription_suite_FWaveTest_testSameBathymethrySameHeightSpeedRightLeft;

static class TestDescription_suite_FWaveTest_testIncreasingBathymethrySameHeightSpeedRight : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FWaveTest_testIncreasingBathymethrySameHeightSpeedRight() : CxxTest::RealTestDescription( Tests_FWaveTest, suiteDescription_FWaveTest, 486, "testIncreasingBathymethrySameHeightSpeedRight" ) {}
 void runTest() { suite_FWaveTest.testIncreasingBathymethrySameHeightSpeedRight(); }
} testDescription_suite_FWaveTest_testIncreasingBathymethrySameHeightSpeedRight;

static class TestDescription_suite_FWaveTest_testIncreasingBathymethrySameHeightSpeedLeftRight : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FWaveTest_testIncreasingBathymethrySameHeightSpeedLeftRight() : CxxTest::RealTestDescription( Tests_FWaveTest, suiteDescription_FWaveTest, 516, "testIncreasingBathymethrySameHeightSpeedLeftRight" ) {}
 void runTest() { suite_FWaveTest.testIncreasingBathymethrySameHeightSpeedLeftRight(); }
} testDescription_suite_FWaveTest_testIncreasingBathymethrySameHeightSpeedLeftRight;

static class TestDescription_suite_FWaveTest_testIncreasingBathymethrySameHeightSpeedRightLeft : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FWaveTest_testIncreasingBathymethrySameHeightSpeedRightLeft() : CxxTest::RealTestDescription( Tests_FWaveTest, suiteDescription_FWaveTest, 546, "testIncreasingBathymethrySameHeightSpeedRightLeft" ) {}
 void runTest() { suite_FWaveTest.testIncreasingBathymethrySameHeightSpeedRightLeft(); }
} testDescription_suite_FWaveTest_testIncreasingBathymethrySameHeightSpeedRightLeft;

static class TestDescription_suite_FWaveTest_testDecreasingBathymethrySameHeightSpeedRight : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FWaveTest_testDecreasingBathymethrySameHeightSpeedRight() : CxxTest::RealTestDescription( Tests_FWaveTest, suiteDescription_FWaveTest, 576, "testDecreasingBathymethrySameHeightSpeedRight" ) {}
 void runTest() { suite_FWaveTest.testDecreasingBathymethrySameHeightSpeedRight(); }
} testDescription_suite_FWaveTest_testDecreasingBathymethrySameHeightSpeedRight;

static class TestDescription_suite_FWaveTest_testDecreasingBathymethrySameHeightSpeedLeftRight : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FWaveTest_testDecreasingBathymethrySameHeightSpeedLeftRight() : CxxTest::RealTestDescription( Tests_FWaveTest, suiteDescription_FWaveTest, 606, "testDecreasingBathymethrySameHeightSpeedLeftRight" ) {}
 void runTest() { suite_FWaveTest.testDecreasingBathymethrySameHeightSpeedLeftRight(); }
} testDescription_suite_FWaveTest_testDecreasingBathymethrySameHeightSpeedLeftRight;

static class TestDescription_suite_FWaveTest_testDecreasingBathymethrySameHeightSpeedRightLeft : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FWaveTest_testDecreasingBathymethrySameHeightSpeedRightLeft() : CxxTest::RealTestDescription( Tests_FWaveTest, suiteDescription_FWaveTest, 636, "testDecreasingBathymethrySameHeightSpeedRightLeft" ) {}
 void runTest() { suite_FWaveTest.testDecreasingBathymethrySameHeightSpeedRightLeft(); }
} testDescription_suite_FWaveTest_testDecreasingBathymethrySameHeightSpeedRightLeft;

static class TestDescription_suite_FWaveTest_testDecreasingBathymethryDecreasingHeightSpeedRightStay : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FWaveTest_testDecreasingBathymethryDecreasingHeightSpeedRightStay() : CxxTest::RealTestDescription( Tests_FWaveTest, suiteDescription_FWaveTest, 666, "testDecreasingBathymethryDecreasingHeightSpeedRightStay" ) {}
 void runTest() { suite_FWaveTest.testDecreasingBathymethryDecreasingHeightSpeedRightStay(); }
} testDescription_suite_FWaveTest_testDecreasingBathymethryDecreasingHeightSpeedRightStay;

static class TestDescription_suite_FWaveTest_testDecreasingBathymethryDecreasingHeightSpeedStayLeft : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FWaveTest_testDecreasingBathymethryDecreasingHeightSpeedStayLeft() : CxxTest::RealTestDescription( Tests_FWaveTest, suiteDescription_FWaveTest, 696, "testDecreasingBathymethryDecreasingHeightSpeedStayLeft" ) {}
 void runTest() { suite_FWaveTest.testDecreasingBathymethryDecreasingHeightSpeedStayLeft(); }
} testDescription_suite_FWaveTest_testDecreasingBathymethryDecreasingHeightSpeedStayLeft;

static class TestDescription_suite_FWaveTest_testIncreasingBathymethryDecreasingHeightSpeedRightStay : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FWaveTest_testIncreasingBathymethryDecreasingHeightSpeedRightStay() : CxxTest::RealTestDescription( Tests_FWaveTest, suiteDescription_FWaveTest, 726, "testIncreasingBathymethryDecreasingHeightSpeedRightStay" ) {}
 void runTest() { suite_FWaveTest.testIncreasingBathymethryDecreasingHeightSpeedRightStay(); }
} testDescription_suite_FWaveTest_testIncreasingBathymethryDecreasingHeightSpeedRightStay;

static class TestDescription_suite_FWaveTest_testIncreasingBathymethryDecreasingHeightSpeedStayLeft : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_FWaveTest_testIncreasingBathymethryDecreasingHeightSpeedStayLeft() : CxxTest::RealTestDescription( Tests_FWaveTest, suiteDescription_FWaveTest, 756, "testIncreasingBathymethryDecreasingHeightSpeedStayLeft" ) {}
 void runTest() { suite_FWaveTest.testIncreasingBathymethryDecreasingHeightSpeedStayLeft(); }
} testDescription_suite_FWaveTest_testIncreasingBathymethryDecreasingHeightSpeedStayLeft;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
