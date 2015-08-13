//
//  XCTestCompat.h
//  XCTest compatibility layer for GNUstep
//
//  Created by Damien Brossard on 18/07/2015.
//

#import <SenTestingKit.h>

// classes
#define XCTestCase SenTestCase

// macros
#define XCTAssertEqual(e1,e2) STAssertEquals(e1,e2,@#e1 " - " #e2)
#define XCTAssertEqualObjects(o1,o2) STAssertEqualObjects(o1,o2,@#o1 " - " #o2)
#define XCTAssertFalse(e) STAssertFalse(e,@#e)
#define XCTAssert(e) STAssertTrue(e,@#e)
#define XCTAssertThrows(e) STAssertThrows(e,@#e)
#define XCTAssertNil(e) STAssertTrue((e == nil), @#e)
#define XCTAssertNotNil(e) STAssertTrue((e != nil), @#e)