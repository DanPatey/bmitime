//
//  NSObject+BNREmployee.h
//  bmitime
//
//  Created by Dan Patey on 6/20/16.
//  Copyright © 2016 Dan Patey. All rights reserved.
//

#import "BNRPerson.h"
@class BNRAsset;

@interface BNREmployee:BNRPerson
{
    NSMutableArray *_assets;
}

@property (nonatomic) unsigned int employeeID;
@property (nonatomic) unsigned int officeAlarmCode;
@property (nonatomic) NSDate *hireDate;
@property (nonatomic, copy) NSArray *assets;
- (double)yearsOfEmployment;
- (void)addAssets:(BNRAsset *)a;
- (unsigned int)valueOfAssets;

@end